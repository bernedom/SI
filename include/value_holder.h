#include <ratio>

template <class R = std::ratio<1>, typename T = long long int>
struct value_holder_t
{
    typedef R ratio;
    typedef T internal_type;
    constexpr value_holder_t(T v) : value_{v} {}
    internal_type value_;

    internal_type raw_value() const { return value_; }

    template <class Rr = std::ratio<1>>
    constexpr bool operator==(const value_holder_t<Rr> &rhs) const
    {
        return rhs.value_ * value_holder_t<Rr>::ratio::num /
                   value_holder_t<Rr>::ratio::den ==
               value_ * ratio::num / ratio::den;
    }
    constexpr value_holder_t operator*(const T f) const { return {value_ * f}; }

    constexpr value_holder_t operator-() { return {-value_}; }
};
