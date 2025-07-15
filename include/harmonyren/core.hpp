#ifndef HARMONY_CORE_HPP
#define HARMONY_CORE_HPP

#include <harmonyren/crypto/dilithium.hpp>
#include <harmonyren/crypto/random.hpp>
#include <harmonyren/crypto/sha.hpp>

#include <harmonyren/utils/helpers.hpp>
#include <harmonyren/utils/log.hpp>
#include <harmonyren/utils/types.hpp>

#include <filesystem> // IWYU pragma: keep

namespace harmonyren {

namespace fs = std::filesystem; // NOLINT(misc-unused-alias-decls)

inline fs::path USER_HOME =
#ifdef _WIN32
    std::getenv("USERPROFILE")
#else
    std::getenv("HOME")
#endif
    ;

} // namespace harmonyren

#endif