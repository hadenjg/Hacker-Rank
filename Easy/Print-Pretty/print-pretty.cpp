#include <iostream>
#include <iomanip>

int main() {

    int T; std::cin >> T;
    std::cout << std::setiosflags(std::ios::uppercase);
    std::cout << std::setw(0xf) << std::internal;
    while(T--) 
    {
        double A; std::cin >> A;
        double B; std::cin >> B;
        double C; std::cin >> C;

        std::cout << std::hex << std::showbase << std::nouppercase << std::left << int(A) << std::endl;
        std::cout << std::showpos << std::right << std::setw(15) << std::setfill('_') << B << std::endl;
        std::cout << std::uppercase << std::scientific << std::setprecision(9) << std::noshowpos << C << std::endl;

    }
    return 0;
}
