/*
 * Copyright(c) 2020 ADLINK Technology Limited and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#ifndef IDLPY_GENERATOR_H
#define IDLPY_GENERATOR_H

#include <stdio.h>

#include "idlc/generator.h"


#if _WIN32
__declspec(dllexport)
#endif
idl_retcode_t generate(const idl_pstate_t *pstate, const idlc_generator_config_t *config);

#if _WIN32
__declspec(dllexport)
#endif
const idlc_option_t** generator_options(void);


#endif /* GENERATOR_H */