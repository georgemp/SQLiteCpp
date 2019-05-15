/**
 * @file    Errors.cpp
 * @ingroup SQLiteCpp
 * @brief   Hooks SQLITE exceptions into a std::error_code
 *
 * Copyright (c) 2012-2018 George Malayil Philip (george.malayil@roguemonkey.in)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
 */

#include "SQLiteCpp/Errors.h"

namespace SQLite {
::std::ostream& operator<<(::std::ostream& os, const Error& err)
{
    return os << static_cast<int>(err);
}

} // namespace SQLite

namespace detail {
const char* SQLite_exception_category::name() const noexcept
{
    return "SQLiteCPP Exception";
}

std::string SQLite_exception_category::message(int c) const
{
    switch (static_cast<SQLite::Error>(c)) {
    case SQLite::Error::ok:
        return "sqlite_ok";
    case SQLite::Error::error:
        return "sqlite_error";
    case SQLite::Error::internal:
        return "sqlite_internal";
    case SQLite::Error::perm:
        return "sqlite_perm";
    case SQLite::Error::abort:
        return "sqlite_abort";
    case SQLite::Error::busy:
        return "sqlite_busy";
    case SQLite::Error::locked:
        return "sqlite_locked";
    case SQLite::Error::nomem:
        return "sqlite_nomem";
    case SQLite::Error::readonly:
        return "sqlite_readonly";
    case SQLite::Error::interrupt:
        return "sqlite_interrupt";
    case SQLite::Error::ioerr:
        return "sqlite_ioerr";
    case SQLite::Error::corrupt:
        return "sqlite_corrupt";
    case SQLite::Error::notfound:
        return "sqlite_notfound";
    case SQLite::Error::full:
        return "sqlite_full";
    case SQLite::Error::cantopen:
        return "sqlite_cantopen";
    case SQLite::Error::protocol:
        return "sqlite_protocol";
    case SQLite::Error::empty:
        return "sqlite_empty";
    case SQLite::Error::schema:
        return "sqlite_schema";
    case SQLite::Error::toobig:
        return "sqlite_toobig";
    case SQLite::Error::constraint:
        return "sqlite_constraint";
    case SQLite::Error::mismatch:
        return "sqlite_mismatch";
    case SQLite::Error::misuse:
        return "sqlite_misuse";
    case SQLite::Error::nolfs:
        return "sqlite_nolfs";
    case SQLite::Error::auth:
        return "sqlite_auth";
    case SQLite::Error::format:
        return "sqlite_format";
    case SQLite::Error::range:
        return "sqlite_range";
    case SQLite::Error::notadb:
        return "sqlite_notabd";
    case SQLite::Error::notice:
        return "sqlite_notice";
    case SQLite::Error::warning:
        return "sqlite_warning";
    case SQLite::Error::row:
        return "sqlite_row";
    case SQLite::Error::done:
        return "sqlite_done";
    case SQLite::Error::error_missing_collseq:
        return "sqlite_error_missing_collseq";
    case SQLite::Error::error_retry:
        return "sqlite_error_retry";
    case SQLite::Error::ioerr_read:
        return "sqlite_ioerr_read";
    case SQLite::Error::ioerr_short_read:
        return "sqlite_ioerr_short_read";
    case SQLite::Error::ioerr_write:
        return "sqlite_ioerr_write";
    case SQLite::Error::ioerr_fsync:
        return "sqlite_ioerr_fsync";
    case SQLite::Error::ioerr_dir_fsync:
        return "sqlite_ioerr_dir_fsync";
    case SQLite::Error::ioerr_truncate:
        return "sqlite_ioerr_truncate";
    case SQLite::Error::ioerr_fstat:
        return "sqlite_ioerr_fstat";
    case SQLite::Error::ioerr_unlock:
        return "sqlite_ioerr_unlock";
    case SQLite::Error::ioerr_rdlock:
        return "sqlite_ioerr_rdlock";
    case SQLite::Error::ioerr_delete:
        return "sqlite_ioerr_delete";
    case SQLite::Error::ioerr_blocked:
        return "sqlite_ioerr_blocked";
    case SQLite::Error::ioerr_nomem:
        return "sqlite_ioerr_nomem";
    case SQLite::Error::ioerr_access:
        return "sqlite_ioerr_access";
    case SQLite::Error::ioerr_checkreservedlock:
        return "sqlite_ioerr_checkreservedlock";
    case SQLite::Error::ioerr_lock:
        return "sqlite_ioerr_lock";
    case SQLite::Error::ioerr_close:
        return "sqlite_ioerr_close";
    case SQLite::Error::ioerr_dir_close:
        return "sqlite_ioerr_dir_close";
    case SQLite::Error::ioerr_shmopen:
        return "sqlite_ioerr_shmopen";
    case SQLite::Error::ioerr_shmsize:
        return "sqlite_ioerr_shmsize";
    case SQLite::Error::ioerr_shmlock:
        return "sqlite_ioerr_shmlock";
    case SQLite::Error::ioerr_shmmap:
        return "sqlite_ioerr_shmmap";
    case SQLite::Error::ioerr_seek:
        return "sqlite_ioerr_seek";
    case SQLite::Error::ioerr_delete_noent:
        return "sqlite_ioerr_delete_noent";
    case SQLite::Error::ioerr_mmap:
        return "sqlite_ioerr_mmap";
    case SQLite::Error::ioerr_gettemppath:
        return "sqlite_ioerr_gettemppath";
    case SQLite::Error::ioerr_convpath:
        return "sqlite_ioerr_convpath";
    case SQLite::Error::ioerr_vnode:
        return "sqlite_ioerr_vnode";
    case SQLite::Error::ioerr_auth:
        return "sqlite_ioerr_auth";
    case SQLite::Error::ioerr_begin_atomic:
        return "sqlite_ioerr_begin_atomic";
    case SQLite::Error::ioerr_commit_atomic:
        return "sqlite_ioerr_commit_atomic";
    case SQLite::Error::ioerr_rollback_atomic:
        return "sqlite_ioerr_rollback_atomic";
    case SQLite::Error::locked_sharedcache:
        return "sqlite_locked_shared_cache";
    case SQLite::Error::locked_vtab:
        return "sqlite_locked_vtab";
    case SQLite::Error::busy_recovery:
        return "sqlite_busy_recovery";
    case SQLite::Error::busy_snapshot:
        return "sqlite_busy_snapshot";
    case SQLite::Error::cantopen_notempdir:
        return "sqlite_cantopen_notempdir";
    case SQLite::Error::cantopen_isdir:
        return "sqlite_cantopen_isdir";
    case SQLite::Error::cantopen_fullpath:
        return "sqlite_cantopen_fullpath";
    case SQLite::Error::cantopen_convpath:
        return "sqlite_cantopen_convpath";
    case SQLite::Error::corrupt_vtab:
        return "sqlite_corrupt_vtab";
    case SQLite::Error::corrupt_sequence:
        return "sqlite_corrupt_sequence";
    case SQLite::Error::readonly_recovery:
        return "sqlite_readonly_recovery";
    case SQLite::Error::readonly_cantlock:
        return "sqlite_readonly_cantlock";
    case SQLite::Error::readonly_rollback:
        return "sqlite_readonly_rollback";
    case SQLite::Error::readonly_dbmoved:
        return "sqlite_readonly_dbmoved";
    case SQLite::Error::readonly_cantinit:
        return "sqlite_readonly_cantinit";
    case SQLite::Error::readonly_directory:
        return "sqlite_readonly_directory";
    case SQLite::Error::abort_rollback:
        return "sqlite_abort_rollback";
    case SQLite::Error::constraint_check:
        return "sqlite_constraint_check";
    case SQLite::Error::constraint_commithook:
        return "sqlite_constraint_commithook";
    case SQLite::Error::constraint_foreignkey:
        return "sqlite_constraint_foreignkey";
    case SQLite::Error::constraint_function:
        return "sqlite_constraint_function";
    case SQLite::Error::constraint_notnull:
        return "sqlite_constraint_notnull";
    case SQLite::Error::constraint_primarykey:
        return "sqlite_constraint_primarykey";
    case SQLite::Error::constraint_trigger:
        return "sqlite_constraint_trigger";
    case SQLite::Error::constraint_unique:
        return "sqlite_constraint_unique";
    case SQLite::Error::constraint_vtab:
        return "sqlite_constraint_vtab";
    case SQLite::Error::constraint_rowid:
        return "sqlite_constraint_rowid";
    case SQLite::Error::notice_recover_wal:
        return "sqlite_notice_recover_wal";
    case SQLite::Error::notice_recover_rollback:
        return "sqlite_notice_recover_rollback";
    case SQLite::Error::warning_autoindex:
        return "sqlite_warning_autoindex";
    case SQLite::Error::auth_user:
        return "sqlite_auth_user";
    case SQLite::Error::ok_load_permanently:
        return "return sqlite_ok_load_permanently";
    default:
        return "unknown sqlitecpp exception";
    }
}

std::error_condition SQLite_exception_category::default_error_condition(
    int c) const noexcept
{
    switch (static_cast<SQLite::Error>(c)) {
    case SQLite::Error::ok:
        return {};
    case SQLite::Error::abort:
    case SQLite::Error::abort_rollback:
        return std::make_error_condition(std::errc::connection_aborted);
    case SQLite::Error::busy:
    case SQLite::Error::busy_recovery:
    case SQLite::Error::busy_snapshot:
        return std::make_error_condition(std::errc::device_or_resource_busy);
    case SQLite::Error::locked:
        return std::make_error_condition(std::errc::no_lock_available);
    case SQLite::Error::nomem:
        return std::make_error_condition(std::errc::not_enough_memory);
    case SQLite::Error::interrupt:
        return std::make_error_condition(std::errc::interrupted);
    case SQLite::Error::ioerr:
    case SQLite::Error::ioerr_read:
    case SQLite::Error::ioerr_short_read:
    case SQLite::Error::ioerr_write:
    case SQLite::Error::ioerr_fsync:
    case SQLite::Error::ioerr_dir_fsync:
    case SQLite::Error::ioerr_truncate:
    case SQLite::Error::ioerr_fstat:
    case SQLite::Error::ioerr_unlock:
    case SQLite::Error::ioerr_rdlock:
    case SQLite::Error::ioerr_delete:
    case SQLite::Error::ioerr_blocked:
    case SQLite::Error::ioerr_nomem:
    case SQLite::Error::ioerr_access:
    case SQLite::Error::ioerr_checkreservedlock:
    case SQLite::Error::ioerr_lock:
    case SQLite::Error::ioerr_close:
    case SQLite::Error::ioerr_dir_close:
    case SQLite::Error::ioerr_shmopen:
    case SQLite::Error::ioerr_shmsize:
    case SQLite::Error::ioerr_shmlock:
    case SQLite::Error::ioerr_shmmap:
    case SQLite::Error::ioerr_seek:
    case SQLite::Error::ioerr_delete_noent:
    case SQLite::Error::ioerr_mmap:
    case SQLite::Error::ioerr_gettemppath:
    case SQLite::Error::ioerr_convpath:
    case SQLite::Error::ioerr_vnode:
    case SQLite::Error::ioerr_auth:
    case SQLite::Error::ioerr_begin_atomic:
    case SQLite::Error::ioerr_commit_atomic:
    case SQLite::Error::ioerr_rollback_atomic:
        return std::make_error_condition(std::errc::io_error);
    case SQLite::Error::notfound:
        return std::make_error_condition(std::errc::no_such_file_or_directory);
    case SQLite::Error::protocol:
        return std::make_error_condition(std::errc::protocol_error);
    case SQLite::Error::toobig:
    case SQLite::Error::nolfs:
        return std::make_error_condition(std::errc::file_too_large);
    case SQLite::Error::misuse:
        return std::make_error_condition(std::errc::operation_not_permitted);
    case SQLite::Error::range:
        return std::make_error_condition(std::errc::result_out_of_range);
    case SQLite::Error::error:
    case SQLite::Error::internal:
    case SQLite::Error::perm:
    case SQLite::Error::readonly:
    case SQLite::Error::corrupt:
    case SQLite::Error::full:
    case SQLite::Error::cantopen:
    case SQLite::Error::empty:
    case SQLite::Error::schema:
    case SQLite::Error::constraint:
    case SQLite::Error::mismatch:
    case SQLite::Error::auth:
    case SQLite::Error::format:
    case SQLite::Error::notadb:
    case SQLite::Error::notice:
    case SQLite::Error::warning:
    case SQLite::Error::row:
    case SQLite::Error::done:
    case SQLite::Error::error_missing_collseq:
    case SQLite::Error::error_retry:
    case SQLite::Error::locked_sharedcache:
    case SQLite::Error::locked_vtab:
    case SQLite::Error::cantopen_notempdir:
    case SQLite::Error::cantopen_isdir:
    case SQLite::Error::cantopen_fullpath:
    case SQLite::Error::cantopen_convpath:
    case SQLite::Error::corrupt_vtab:
    case SQLite::Error::corrupt_sequence:
    case SQLite::Error::readonly_recovery:
    case SQLite::Error::readonly_cantlock:
    case SQLite::Error::readonly_rollback:
    case SQLite::Error::readonly_dbmoved:
    case SQLite::Error::readonly_cantinit:
    case SQLite::Error::readonly_directory:
    case SQLite::Error::constraint_check:
    case SQLite::Error::constraint_commithook:
    case SQLite::Error::constraint_foreignkey:
    case SQLite::Error::constraint_function:
    case SQLite::Error::constraint_notnull:
    case SQLite::Error::constraint_primarykey:
    case SQLite::Error::constraint_trigger:
    case SQLite::Error::constraint_unique:
    case SQLite::Error::constraint_vtab:
    case SQLite::Error::constraint_rowid:
    case SQLite::Error::notice_recover_wal:
    case SQLite::Error::notice_recover_rollback:
    case SQLite::Error::warning_autoindex:
    case SQLite::Error::auth_user:
    case SQLite::Error::ok_load_permanently:
        return std::error_condition(c, *this);
    }
}

} // namespace detail
