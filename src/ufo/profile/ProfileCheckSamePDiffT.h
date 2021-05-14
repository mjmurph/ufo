/*
 * (C) Crown copyright 2020, Met Office
 * 
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0. 
 */

#ifndef UFO_PROFILE_PROFILECHECKSAMEPDIFFT_H_
#define UFO_PROFILE_PROFILECHECKSAMEPDIFFT_H_

#include <vector>

#include "ufo/profile/ProfileCheckBase.h"
#include "ufo/profile/ProfileDataHandler.h"

namespace ufo {
  class ProfileConsistencyCheckParameters;
}

namespace ufo {

  /// \brief Profile QC: same P/different T check
  class ProfileCheckSamePDiffT : public ProfileCheckBase {
   public:
    explicit ProfileCheckSamePDiffT(const ProfileConsistencyCheckParameters &options);

    /// Run check
    void runCheck(ProfileDataHandler &profileDataHandler) override;
  };
}  // namespace ufo

#endif  // UFO_PROFILE_PROFILECHECKSAMEPDIFFT_H_
