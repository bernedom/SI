#include <limits>
#include <ratio>

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

constexpr length_t<std::ratio<1>>
operator"" _m(const unsigned long long int m)
{
    if (m > std::numeric_limits<length_t<std::ratio<1>>::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return m;
}

constexpr length_t<std::kilo> operator"" _km(const unsigned long long int km)
{
    if (km > std::numeric_limits<length_t<std::kilo>::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return km;
}

constexpr length_t<std::centi> operator"" _cm(const unsigned long long int cm)
{
    if (cm > std::numeric_limits<length_t<std::centi>::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return cm;
}
