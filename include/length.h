#include <limits>

struct length_t
{
    typedef long long int internal_type;
    constexpr length_t(long long int l) : length_{l} {}
    internal_type length_;

    constexpr bool operator==(const length_t &rhs) const
    {
        return rhs.length_ == length_;
    }
    constexpr length_t operator*(const long long int f) const
    {
        return {length_ * f};
    }

    constexpr length_t operator-() { return {-length_}; }
};

constexpr length_t operator"" _m(const unsigned long long int m)
{
    if (m > std::numeric_limits<length_t::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return m * 100;
}

constexpr length_t operator"" _km(const unsigned long long int km)
{
    if (km > std::numeric_limits<length_t::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return km * 100000;
}

constexpr length_t operator"" _cm(const unsigned long long int cm)
{
    if (cm > std::numeric_limits<length_t::internal_type>::max())
    {
        throw std::overflow_error("supplied value too large");
    }
    return cm;
}
