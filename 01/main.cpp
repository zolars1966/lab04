#include <iostream>

int main() {
    int a = 42;                 // десятичный
    int b = 052;                // восьмеричный
    int c = 0b101010;           // двоичный
    int d = 0x2A;               // шестнадцатеричный

    unsigned int e = 42U;       // unsigned
    long f = 42L;               // long
    unsigned long g = 42UL;     // unsigned long
    long long h = 42LL;          // long long
    unsigned long long i = 42ULL;

    std::cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    std::cout << e << ' ' << f << ' ' << g << ' ' << h << ' ' << i << '\n';

    return 0;
}