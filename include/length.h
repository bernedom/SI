#include <limits>

struct length_t
{

    typedef long long int internal_type;
    constexpr length_t(long long int l) : length_{l} {}
    internal_type length_;

    bool operator==(const length_t &rhs) const { return rhs.length_ == length_; }
    constexpr length_t operator*(const long long int f) const
    {
        return {length_ * f};
    }

    constexpr length_t operator-() { return {-length_}; }
};

constexpr length_t operator"" _m(const unsigned long long int m)
{
    // static_assert(m < std::numeric_limits<length_t::internal_type>::max(), "m
    // is in scope");
    return m * 100;
}

constexpr length_t operator"" _km(const unsigned long long int km)
{
    return km * 100000;
}

constexpr length_t operator"" _cm(const unsigned long long int cm)
{
    return cm;
}
