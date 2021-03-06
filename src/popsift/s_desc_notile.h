/*
 * Copyright 2016-2017, Simula Research Laboratory
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
#pragma once
#include "sift_pyramid.h"
#include "sift_octave.h"
#include "sift_extremum.h"
#include "common/debug_macros.h"


namespace popsift
{

bool start_ext_desc_notile( const int octave, Octave& oct_obj );

}; // namespace popsift
