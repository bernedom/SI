#include <limits>
#include <ratio>
#include <stdexcept>

template <class R = std::ratio<1>>
struct length_t
{
    typedef R ratio;
    typedef long long int internal_type;
    constexpr length_t(long long int l) : length_{l} {}
    internal_type length_;

    template <class Rr = std::ratio<1>>
    constexpr bool operator==(const length_t<Rr> &rhs) const
    {
        return (rhs.length_ * length_t<Rr>::ratio::num) /
                   length_t<Rr>::ratio::den ==
               (length_ * ratio::num) / ratio::den;
    }
    constexpr length_t operator*(const long long int f) const
    {
        return {length_ * f};
    }

    constexpr length_t operator-() { return {-length_}; }
};

namespace
{
template <typename R>
constexpr auto generate_length_type(const unsigned long long int magnitude)
{
    if (magnitude > std::numeric_limits<typename length_t<R>::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return length_t<R>(magnitude);
}
} // namespace

constexpr auto operator"" _m(const unsigned long long int m)
{
    return generate_length_type<std::ratio<1>>(m);
}

constexpr auto operator"" _km(const unsigned long long int km)
{
    return generate_length_type<std::kilo>(km);
}

constexpr auto operator"" _cm(const unsigned long long int cm)
{
    return generate_length_type<std::centi>(cm);
}
