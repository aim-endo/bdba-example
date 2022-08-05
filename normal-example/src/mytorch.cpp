#include "mytorch.h"
#include <string>
#include <sstream>
#include <torch/torch.h>

namespace mytorch {

int torchVersion()
{
    std::stringstream s;
    s << ((TORCH_VERSION_MAJOR * 10000) + (TORCH_VERSION_MINOR * 100) + TORCH_VERSION_PATCH);
    return std::stoi(s.str());
}

};
