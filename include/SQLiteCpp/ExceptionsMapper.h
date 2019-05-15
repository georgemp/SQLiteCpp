/**
 * @file    ExceptionsMapper.h
 * @ingroup SQLiteCpp
 * @brief   Maps SQLite::Exception to std::error_code
 *
 * Copyright (c) 2012-2018 George Malayil Philip (george.malayil@roguemonkey.in)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */

#pragma once

#include <SQLiteCpp/Errors.h>

namespace SQLite {

std::error_code map_exception_to_error_code(const SQLite::Exception& e);
std::error_code map_exception_to_error_code(std::exception_ptr&& ep);

} // namespace SQLite
