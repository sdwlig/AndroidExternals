/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#ifndef OPENSSL_DHERR_H
#define OPENSSL_DHERR_H
#pragma once

#include <openssl/cryptoerr_legacy.h>
#include <openssl/opensslconf.h>
#include <openssl/symhacks.h>

#ifndef OPENSSL_NO_DH

/*
 * DH reason codes.
 */
#define DH_R_BAD_FFC_PARAMETERS 127
#define DH_R_BAD_GENERATOR 101
#define DH_R_BN_DECODE_ERROR 109
#define DH_R_BN_ERROR 106
#define DH_R_CHECK_INVALID_J_VALUE 115
#define DH_R_CHECK_INVALID_Q_VALUE 116
#define DH_R_CHECK_PUBKEY_INVALID 122
#define DH_R_CHECK_PUBKEY_TOO_LARGE 123
#define DH_R_CHECK_PUBKEY_TOO_SMALL 124
#define DH_R_CHECK_P_NOT_PRIME 117
#define DH_R_CHECK_P_NOT_SAFE_PRIME 118
#define DH_R_CHECK_Q_NOT_PRIME 119
#define DH_R_DECODE_ERROR 104
#define DH_R_INVALID_PARAMETER_NAME 110
#define DH_R_INVALID_PARAMETER_NID 114
#define DH_R_INVALID_PUBKEY 102
#define DH_R_INVALID_SECRET 128
#define DH_R_KDF_PARAMETER_ERROR 112
#define DH_R_KEYS_NOT_SET 108
#define DH_R_MISSING_PUBKEY 125
#define DH_R_MODULUS_TOO_LARGE 103
#define DH_R_MODULUS_TOO_SMALL 126
#define DH_R_NOT_SUITABLE_GENERATOR 120
#define DH_R_NO_PARAMETERS_SET 107
#define DH_R_NO_PRIVATE_VALUE 100
#define DH_R_PARAMETER_ENCODING_ERROR 105
#define DH_R_PEER_KEY_ERROR 111
#define DH_R_SHARED_INFO_ERROR 113
#define DH_R_UNABLE_TO_CHECK_GENERATOR 121

#endif
#endif
