#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char **argv)
{

    std::cout << "Hello World\n";

    if (argc != 1)
    {
        std::cout << "No. of Arguments " << argc << std::endl;
    }

    for (int i = 0; i < argc; ++i)
    {
        std::cout << argv[i] << "\n";
    }

    return 0;
}