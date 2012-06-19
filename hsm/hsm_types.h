/**
 * @file hsm_types.h
 *
 * Copyright (c) 2012, everMany, LLC.
 * All rights reserved.
 * 
 * All code licensed under the "New BSD" (BSD 3-Clause) License
 * See License.txt for complete information.
 */
#pragma once
#ifndef __HSM_TYPES_H__
#define __HSM_TYPES_H__

#ifdef __cplusplus
#define HSM_TRUE  true
#define HSM_FALSE false
typedef bool hsm_bool;
#else
typedef int hsm_bool;
#define HSM_TRUE  1
#define HSM_FALSE 0
#endif

typedef unsigned long hsm_uint32;
typedef unsigned short hsm_uint16;

/**
 * 16 is a decent amt of hiearchy depth, it's probably more than good enough
 * nesting regions will yield new sets of 16.
 */
#define HSM_MAX_DEPTH 16


#endif // #ifndef __HSM_TYPES_H__
