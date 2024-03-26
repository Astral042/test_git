#ifndef TEST_CONSTEXPRPOW_H
#define TEST_CONSTEXPRPOW_H

constexpr int pow(int base, int exp) noexcept
{
    auto result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result; 
}

#endif //TEST_CONSTEXPRPOW_H