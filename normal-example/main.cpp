#include <iostream>
#include "mycuda.h"

int main(int argc, const char** argv)
{
    std::cout << "bdba example 1" << std::endl;
    std::cout << "  nvidia driver = " << mycuda::driverVersion() << std::endl;
    std::cout << "  cuda runtime  = " << mycuda::runtimeVersion() << std::endl;

    return 0;
}
