#ifndef HARMONYREN_CRYPTO_SHA_HPP
#define HARMONYREN_CRYPTO_SHA_HPP

#include <harmonyren/utils/types.hpp>

extern "C" {
#include <openssl/evp.h>
#include <openssl/sha.h>
}
namespace harmonyren {

namespace crypto {


String sha3_256(const String &input);
String sha3_512(const String &input);

}

} // namespace harmonyren

#endif