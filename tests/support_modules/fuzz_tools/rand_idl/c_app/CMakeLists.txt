#
# Copyright(c) 2021 ADLINK Technology Limited and others
#
# This program and the accompanying materials are made available under the
# terms of the Eclipse Public License v. 2.0 which is available at
# http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
# v. 1.0 which is available at
# http://www.eclipse.org/org/documents/edl-v10.php.
#
# SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
#

cmake_minimum_required(VERSION 3.16)
project(xtypes_sub LANGUAGES C)
find_package(CycloneDDS REQUIRED)

cmake_policy(SET CMP0060 NEW)

idlc_generate(TARGET xtypes_sub_lib FILES ${IDL_FILE})

# Dynamic index is generated by Python
add_executable(xtypes_sub xtypes_sub.c xtypes_dynamic_index.c)
target_link_libraries(xtypes_sub xtypes_sub_lib CycloneDDS::ddsc)

