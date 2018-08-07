//
// Copyright (c) 2016 CNRS
//
// This file is part of Pinocchio
// Pinocchio is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// Pinocchio is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Lesser Public License for more details. You should have
// received a copy of the GNU Lesser General Public License along with
// Pinocchio If not, see
// <http://www.gnu.org/licenses/>.

#ifndef __se3_joint_fwd_hpp__
#define __se3_joint_fwd_hpp__

#include "pinocchio/fwd.hpp"

namespace se3
{
  enum { MAX_JOINT_NV = 6 };

  template<typename Scalar, int Options, int axis> struct JointModelRevoluteTpl;
  template<typename Scalar, int Options, int axis> struct JointDataRevoluteTpl;

  template<typename Scalar, int Options = 0> struct JointModelRevoluteUnalignedTpl;
  typedef JointModelRevoluteUnalignedTpl<double> JointModelRevoluteUnaligned;
  
  template<typename Scalar, int Options = 0> struct JointDataRevoluteUnalignedTpl;
  typedef JointDataRevoluteUnalignedTpl<double> JointDataRevoluteUnaligned;

  template<typename Scalar, int Options, int axis> struct JointModelRevoluteUnboundedTpl;
  template<typename Scalar, int Options, int axis> struct JointDataRevoluteUnboundedTpl;

  template<typename Scalar, int Options = 0> struct JointModelSphericalTpl;
  typedef JointModelSphericalTpl<double> JointModelSpherical;
  
  template<typename Scalar, int Options = 0> struct JointDataSphericalTpl;
  typedef JointDataSphericalTpl<double> JointDataSpherical;

  template<typename Scalar, int Options = 0> struct JointModelSphericalZYXTpl;
  typedef JointModelSphericalZYXTpl<double> JointModelSphericalZYX;
  
  template<typename Scalar, int Options = 0> struct JointDataSphericalZYXTpl;
  typedef JointDataSphericalZYXTpl<double> JointDataSphericalZYX;

  template<typename Scalar, int Options, int axis> struct JointModelPrismaticTpl;
  template<typename Scalar, int Options, int axis> struct JointDataPrismaticTpl;

  template<typename Scalar, int Options = 0> struct JointModelPrismaticUnalignedTpl;
  typedef JointModelPrismaticUnalignedTpl<double> JointModelPrismaticUnaligned;

  template<typename Scalar, int Options = 0> struct JointDataPrismaticUnalignedTpl;
  typedef JointDataPrismaticUnalignedTpl<double> JointDataPrismaticUnaligned;

  template<typename Scalar, int Options = 0> struct JointModelFreeFlyerTpl;
  typedef JointModelFreeFlyerTpl<double> JointModelFreeFlyer;
  
  template<typename Scalar, int Options = 0> struct JointDataFreeFlyerTpl;
  typedef JointDataFreeFlyerTpl<double> JointDataFreeFlyer;

  template<typename Scalar, int Options = 0> struct JointModelPlanarTpl;
  typedef JointModelPlanarTpl<double> JointModelPlanar;
  
  template<typename Scalar, int Options = 0> struct JointDataPlanarTpl;
  typedef JointDataPlanarTpl<double> JointDataPlanar;

  template<typename Scalar, int Options = 0> struct JointModelTranslationTpl;
  typedef JointModelTranslationTpl<double> JointModelTranslation;
  
  template<typename Scalar, int Options = 0> struct JointDataTranslationTpl;
  typedef JointDataTranslationTpl<double> JointDataTranslation;

  template<typename Scalar, int Options = 0> struct JointCollectionDefaultTpl;
  typedef JointCollectionDefaultTpl<double> JointCollectionDefault;
  
  template<typename Scalar, int Options = 0, template<typename S, int O> class JointCollectionTpl = JointCollectionDefaultTpl>
  struct JointModelCompositeTpl;
  typedef JointModelCompositeTpl<double> JointModelComposite;
  
  template<typename Scalar, int Options = 0, template<typename S, int O> class JointCollectionTpl = JointCollectionDefaultTpl>
  struct JointDataCompositeTpl;
  typedef JointDataCompositeTpl<double> JointDataComposite;
  
  template<typename JointCollection> struct JointModelTpl;
  typedef JointModelTpl<JointCollectionDefault> JointModel;
  
  template<typename JointCollection> struct JointDataTpl;
  typedef JointDataTpl<JointCollectionDefault> JointData;
  
}

#endif // ifndef __se3_joint_fwd_hpp__
