#include "myssl.h"
#include <string>
#include <iostream>
#include <openssl/crypto.h>

namespace myssl {

int sslVersion()
{
    [[maybe_unused]] const std::string full_version = SSLeay_version(SSLEAY_VERSION);

    return OpenSSL_version_num();
}

};
