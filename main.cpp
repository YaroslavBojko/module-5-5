#include <iostream>

int main() {
    int a,b,c;
    std::cout << "Enter the parameters of the first box (A,B,C): ";
    std::cin >> a >> b >> c;

    int m,n,k;
    std::cout << "Enter the parameters of the second box (m,n,k): ";
    std::cin >> m >> n >> k;

    if ((m > a && n > b && k > c) || (m > a && n > c && k > b) || (m > b && n > a && k > c) ||
        (m > b && n > c && k > a) || (m > c && n > a && k > b) || (m > c && n > b && k > a))
        std::cout << "The first box CAN be placed inside the second.";
    else
        std::cout << "The first box CANNOT be placed inside the second.";
}
