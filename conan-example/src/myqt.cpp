#include "myqt.h"
#include <string>
#include <QtGlobal>

namespace myqt {

int qtVersion()
{
    const std::string v = qVersion();
    return std::stoi(v);
}

}
