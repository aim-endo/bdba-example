#include "mycuda.h"
#include <cuda_runtime_api.h>

namespace mycuda {

int driverVersion()
{
    int v = 0;
    [[maybe_unused]] const auto err = cudaDriverGetVersion(&v);
    return v;
}

int runtimeVersion() 
{
    int v = 0;
    [[maybe_unused]] const auto err = cudaRuntimeGetVersion(&v);
    return v;
}

};

