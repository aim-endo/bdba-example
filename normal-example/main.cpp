#include <iostream>
#include "mycuda.h"
#include "myqt.h"
#include "myssl.h"
#include "mytorch.h"

int main(int argc, const char** argv)
{
    std::cout << "bdba example 1" << std::endl;
    std::cout << "  nvidia driver = " << mycuda::driverVersion() << std::endl;
    std::cout << "  cuda runtime  = " << mycuda::runtimeVersion() << std::endl;
    std::cout << "  qt version    = " << myqt::qtVersion() << std::endl;
    std::cout << "  ssl version   = " << myssl::sslVersion() << std::endl;
    std::cout << "  torch version = " << mytorch::torchVersion() << std::endl;

    return 0;
}
