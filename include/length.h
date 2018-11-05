unsigned long long int operator"" _m(const unsigned long long int m)
{
    return m * 100;
}

unsigned long long int operator"" _km(const unsigned long long int km)
{
    return km * 1000_m;
}

unsigned long long int operator"" _cm(const unsigned long long int cm)
{
    return cm;
}