/*
 * (C) Copyright 2017-2018 UCAR
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 */

#ifndef UFO_LOCATIONS_INTERFACE_H_
#define UFO_LOCATIONS_INTERFACE_H_

#include "ioda/ObsSpace.h"

#include "Fortran.h"

namespace ufo {

/// Interface to Fortran UFO Locations routines
/*!
 * The core of the UFO Locations is coded in Fortran.
 * Here we define the interfaces to the Fortran code.
 */

extern "C" {

  void ufo_locs_init_f90(F90locs &, const ioda::ObsSpace &,
                                    const util::DateTime * const *,
                                    const util::DateTime * const *);
  void ufo_locs_create_f90(F90locs &, const int  &, const double *,
                            const double *, const int  &);
  void ufo_locs_delete_f90(F90locs &);
  void ufo_locs_nobs_f90(const F90locs &, int &);
  void ufo_locs_coords_f90(const F90locs &, int &, double &, double &);

// -----------------------------------------------------------------------------

}  // extern C

}  // namespace ufo
#endif  // UFO_LOCATIONS_INTERFACE_H_
