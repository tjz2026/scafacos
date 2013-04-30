/*
  Copyright (C) 2013 Olaf Lenz
  
  This file is part of ScaFaCoS.
  
  ScaFaCoS is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
  
  ScaFaCoS is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>. 
*/
#ifndef _P3M_TIMING_H
#define _P3M_TIMING_H

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <mpi.h>
#include "types.h"

/** Test run the method with the current parameters and return the elapsed CPU time. */
fcs_float
ifcs_p3m_timing
(ifcs_p3m_data_struct *d,
 fcs_int _num_particles, fcs_int _max_num_particles,
 fcs_float *_positions, fcs_float *_charges);

#endif
