/*
 * Copyright (c) 2011-2014 CrystaX .NET.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are
 * permitted provided that the following conditions are met:
 *
 *    1. Redistributions of source code must retain the above copyright notice, this list of
 *       conditions and the following disclaimer.
 *
 *    2. Redistributions in binary form must reproduce the above copyright notice, this list
 *       of conditions and the following disclaimer in the documentation and/or other materials
 *       provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY CrystaX .NET ''AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL CrystaX .NET OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those of the
 * authors and should not be interpreted as representing official policies, either expressed
 * or implied, of CrystaX .NET.
 */

#ifndef __CRYSTAX_PTHREAD_H_B2421410F8124BED8ACB3D385041AECF
#define __CRYSTAX_PTHREAD_H_B2421410F8124BED8ACB3D385041AECF

#include <crystax/id.h>

#include <crystax/google/pthread.h>

/* In old platform headers, these symbols were defined as enum elements.
 * We defined them as macro here so they become available to preprocessor.
 */

#ifndef PTHREAD_MUTEX_DEFAULT
#define PTHREAD_MUTEX_DEFAULT PTHREAD_MUTEX_DEFAULT
#endif

#ifndef PTHREAD_MUTEX_ERRORCHECK
#define PTHREAD_MUTEX_ERRORCHECK PTHREAD_MUTEX_ERRORCHECK
#endif

#ifndef PTHREAD_MUTEX_NORMAL
#define PTHREAD_MUTEX_NORMAL PTHREAD_MUTEX_NORMAL
#endif

#ifndef PTHREAD_MUTEX_RECURSIVE
#define PTHREAD_MUTEX_RECURSIVE PTHREAD_MUTEX_RECURSIVE
#endif

#ifdef __cplusplus
extern "C" {
#endif

int pthread_mutex_timedlock(pthread_mutex_t *, const struct timespec*);

#ifdef __cplusplus
}
#endif

#endif /* __CRYSTAX_PTHREAD_H_B2421410F8124BED8ACB3D385041AECF */
