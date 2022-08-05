#include "mycuda.h"
#include <cuda_runtime_api.h>

namespace mycuda {

int driverVersion()
{
    int v = 0;
    const auto err = cudaDriverGetVersion(&v);
    return v;
}

int runtimeVersion() 
{
    int v = 0;
    const auto err = cudaRuntimeGetVersion(&v);
    return v;
}

};

