#include <array>

#include "constexprpow.h"

int main()
{
    constexpr auto numConds = 5;
    std::array<int, pow(3, numConds)> results;

    return 0;
}