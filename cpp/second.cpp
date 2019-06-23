#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
    std::string sQuestion("Enter number: ");
    std::string sNum1, sNum2;
    std::cout << sQuestion;
    getline(std::cin, sNum1);

    int nNum1 = std::stoi(sNum1);

    return 0;
}