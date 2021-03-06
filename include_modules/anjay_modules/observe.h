/*
 * Copyright 2017-2019 AVSystem <avsystem@avsystem.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANJAY_INCLUDE_ANJAY_MODULES_OBSERVE_H
#define ANJAY_INCLUDE_ANJAY_MODULES_OBSERVE_H
#include <anjay/core.h>

VISIBILITY_PRIVATE_HEADER_BEGIN

#ifdef WITH_OBSERVE

void _anjay_observe_gc(anjay_t *anjay);

#else // WITH_OBSERVE

#    define _anjay_observe_gc(...) ((void) 0)

#endif // WITH_OBSERVE

VISIBILITY_PRIVATE_HEADER_END

#endif /* ANJAY_INCLUDE_ANJAY_MODULES_OBSERVE_H */
