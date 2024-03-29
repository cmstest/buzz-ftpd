//
// BuzzFTPInterface.h - part of buzz-ftpd
// Copyright (c) 2011, cxxjoe
// Please refer to the LICENSE file for details.
//

#ifndef _BUZZ_FTP_INTERFACE_H
#define _BUZZ_FTP_INTERFACE_H

// cmake-generated fuzz
#include "buzzconfig.h"

// internal constants
#define FTP_MAX_LINE 4096

// ASIO header(s)
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>

// basic object stuff
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/noncopyable.hpp>
#include <boost/bind.hpp>

// conversion & utilities
#include <boost/lexical_cast.hpp>
using boost::lexical_cast;
#include <boost/numeric/conversion/cast.hpp>
using boost::numeric_cast;
#include <boost/assert.hpp>

// string helpers
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string/case_conv.hpp>

// logger
#include "BuzzLogger.h"

#endif /* !_BUZZ_FTP_INTERFACE_H */
