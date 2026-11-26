/*
 * Copyright (C) Phantom Animation Inc.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

/*
 * Emscripten's libc declares the WASI API for its own calls ( wasi/api.h, which its
 * stdio.h, unistd.h and fcntl.h include ), under the names platform_wasi_types.h
 * gives the guest's WASI types, and with the host's layout: a runtime built with
 * Emscripten takes Emscripten's first, then gives its own types names of their own.
 * The constants both define have the same values; Emscripten's go, for the guest's.
 */

#ifndef _PLATFORM_WASI_TYPES_EMSCRIPTEN_H
#define _PLATFORM_WASI_TYPES_EMSCRIPTEN_H

#include <wasi/api.h>

#undef __WASI_ADVICE_DONTNEED
#undef __WASI_ADVICE_NOREUSE
#undef __WASI_ADVICE_NORMAL
#undef __WASI_ADVICE_RANDOM
#undef __WASI_ADVICE_SEQUENTIAL
#undef __WASI_ADVICE_WILLNEED
#undef __WASI_DIRCOOKIE_START
#undef __WASI_EVENTTYPE_CLOCK
#undef __WASI_EVENTTYPE_FD_READ
#undef __WASI_EVENTTYPE_FD_WRITE
#undef __WASI_FILETYPE_BLOCK_DEVICE
#undef __WASI_FILETYPE_CHARACTER_DEVICE
#undef __WASI_FILETYPE_DIRECTORY
#undef __WASI_FILETYPE_REGULAR_FILE
#undef __WASI_FILETYPE_SOCKET_DGRAM
#undef __WASI_FILETYPE_SOCKET_STREAM
#undef __WASI_FILETYPE_SYMBOLIC_LINK
#undef __WASI_FILETYPE_UNKNOWN
#undef __WASI_PREOPENTYPE_DIR
#undef __WASI_WHENCE_CUR
#undef __WASI_WHENCE_END
#undef __WASI_WHENCE_SET

#define __wasi_addr_info_hints_t wamr_wasi_addr_info_hints_t
#define __wasi_addr_info_t wamr_wasi_addr_info_t
#define __wasi_addr_ip4_port_t wamr_wasi_addr_ip4_port_t
#define __wasi_addr_ip4_t wamr_wasi_addr_ip4_t
#define __wasi_addr_ip6_port_t wamr_wasi_addr_ip6_port_t
#define __wasi_addr_ip6_t wamr_wasi_addr_ip6_t
#define __wasi_addr_ip_t wamr_wasi_addr_ip_t
#define __wasi_addr_t wamr_wasi_addr_t
#define __wasi_addr_type_t wamr_wasi_addr_type_t
#define __wasi_address_family_t wamr_wasi_address_family_t
#define __wasi_advice_t wamr_wasi_advice_t
#define __wasi_ciovec_t wamr_wasi_ciovec_t
#define __wasi_clockid_t wamr_wasi_clockid_t
#define __wasi_device_t wamr_wasi_device_t
#define __wasi_dircookie_t wamr_wasi_dircookie_t
#define __wasi_dirent_t wamr_wasi_dirent_t
#define __wasi_dirnamlen_t wamr_wasi_dirnamlen_t
#define __wasi_errno_t wamr_wasi_errno_t
#define __wasi_event_t wamr_wasi_event_t
#define __wasi_event_u_fd_readwrite_t wamr_wasi_event_u_fd_readwrite_t
#define __wasi_eventrwflags_t wamr_wasi_eventrwflags_t
#define __wasi_eventtype_t wamr_wasi_eventtype_t
#define __wasi_exitcode_t wamr_wasi_exitcode_t
#define __wasi_fd_t wamr_wasi_fd_t
#define __wasi_fdflags_t wamr_wasi_fdflags_t
#define __wasi_fdstat_t wamr_wasi_fdstat_t
#define __wasi_filedelta_t wamr_wasi_filedelta_t
#define __wasi_filesize_t wamr_wasi_filesize_t
#define __wasi_filestat_t wamr_wasi_filestat_t
#define __wasi_filetype_t wamr_wasi_filetype_t
#define __wasi_fstflags_t wamr_wasi_fstflags_t
#define __wasi_inode_t wamr_wasi_inode_t
#define __wasi_iovec_t wamr_wasi_iovec_t
#define __wasi_ip_port_t wamr_wasi_ip_port_t
#define __wasi_linkcount_t wamr_wasi_linkcount_t
#define __wasi_lookupflags_t wamr_wasi_lookupflags_t
#define __wasi_oflags_t wamr_wasi_oflags_t
#define __wasi_preopentype_t wamr_wasi_preopentype_t
#define __wasi_prestat_t wamr_wasi_prestat_t
#define __wasi_prestat_u_dir_t wamr_wasi_prestat_u_dir_t
#define __wasi_riflags_t wamr_wasi_riflags_t
#define __wasi_rights_t wamr_wasi_rights_t
#define __wasi_roflags_t wamr_wasi_roflags_t
#define __wasi_sdflags_t wamr_wasi_sdflags_t
#define __wasi_siflags_t wamr_wasi_siflags_t
#define __wasi_signal_t wamr_wasi_signal_t
#define __wasi_size_t wamr_wasi_size_t
#define __wasi_sock_type_t wamr_wasi_sock_type_t
#define __wasi_subclockflags_t wamr_wasi_subclockflags_t
#define __wasi_subscription_clock_t wamr_wasi_subscription_clock_t
#define __wasi_subscription_fd_readwrite_t wamr_wasi_subscription_fd_readwrite_t
#define __wasi_subscription_t wamr_wasi_subscription_t
#define __wasi_subscription_u_t wamr_wasi_subscription_u_t
#define __wasi_subscription_u_u_t wamr_wasi_subscription_u_u_t
#define __wasi_timestamp_t wamr_wasi_timestamp_t
#define __wasi_userdata_t wamr_wasi_userdata_t
#define __wasi_whence_t wamr_wasi_whence_t

#endif /* end of _PLATFORM_WASI_TYPES_EMSCRIPTEN_H */
