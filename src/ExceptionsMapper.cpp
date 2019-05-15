/**
 * @file    ExceptionsMapper.cpp
 * @ingroup SQLiteCpp
 * @brief   Maps SQLite::Exception to std::error_code
 *
 * Copyright (c) 2012-2018 George Malayil Philip (george.malayil@roguemonkey.in)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */

#include <SQLiteCpp/Exception.h>
#include <SQLiteCpp/ExceptionsMapper.h>

namespace SQLite {
std::error_code map_exception_to_error_code(const SQLite::Exception& e)
{
    auto error_code = std::error_code();
    auto sqlite_extended_error_code = e.getExtendedErrorCode();
    if (sqlite_extended_error_code != -1) {
        error_code = Error(sqlite_extended_error_code);
    }

    auto sqlite_error_code = e.getErrorCode();
    if (sqlite_error_code != -1) {
        error_code = Error(sqlite_error_code);
    }

    return error_code;
}

std::error_code map_exception_to_error_code(std::exception_ptr&& ep)
{
    auto error_code = std::error_code();

    if (ep) {
        try {
            std::rethrow_exception(ep);
        } catch (const SQLite::Exception& e) {
            error_code = map_exception_to_error_code(e);
        } catch (...) {
        }
    }

    return error_code;
}

} // namespace SQLite
