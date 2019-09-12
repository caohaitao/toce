// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_ExtPRevS_HeaderFile
#define _Extrema_ExtPRevS_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Extrema_ExtPRevS.hxx>

#include <Handle_Adaptor3d_HSurfaceOfRevolution.hxx>
#include <Standard_Real.hxx>
#include <gp_Ax2.hxx>
#include <Extrema_GenExtPS.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Extrema_POnSurf.hxx>
#include <Standard_Transient.hxx>
class Adaptor3d_HSurfaceOfRevolution;
class StdFail_NotDone;
class Standard_OutOfRange;
class gp_Pnt;
class Extrema_POnSurf;


//! It calculates all the extremum (minimum and
//! maximum) distances between a point and a surface
//! of revolution.
class Extrema_ExtPRevS : public Standard_Transient
{

public:

  
  Standard_EXPORT Extrema_ExtPRevS();
  
  //! It calculates all the distances between a point
  //! from gp and a SurfacePtr from Adaptor3d.
  Standard_EXPORT Extrema_ExtPRevS(const gp_Pnt& P, const Handle(Adaptor3d_HSurfaceOfRevolution)& S, const Standard_Real Umin, const Standard_Real Usup, const Standard_Real Vmin, const Standard_Real Vsup, const Standard_Real TolU, const Standard_Real TolV);
  
  //! It calculates all the distances between a point
  //! from gp and a SurfacePtr from Adaptor3d.
  Standard_EXPORT Extrema_ExtPRevS(const gp_Pnt& P, const Handle(Adaptor3d_HSurfaceOfRevolution)& S, const Standard_Real TolU, const Standard_Real TolV);
  
  Standard_EXPORT   void Initialize (const Handle(Adaptor3d_HSurfaceOfRevolution)& S, const Standard_Real Umin, const Standard_Real Usup, const Standard_Real Vmin, const Standard_Real Vsup, const Standard_Real TolU, const Standard_Real TolV) ;
  
  Standard_EXPORT   void Perform (const gp_Pnt& P) ;
  
  //! Returns True if the distances are found.
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns the number of extremum distances.
  Standard_EXPORT   Standard_Integer NbExt()  const;
  
  //! Returns the value of the Nth resulting square distance.
  Standard_EXPORT   Standard_Real SquareDistance (const Standard_Integer N)  const;
  
  //! Returns the point of the Nth resulting distance.
  Standard_EXPORT  const  Extrema_POnSurf& Point (const Standard_Integer N)  const;




  DEFINE_STANDARD_RTTI(Extrema_ExtPRevS)

protected:




private: 


  Handle(Adaptor3d_HSurfaceOfRevolution) myS;
  Standard_Real myvinf;
  Standard_Real myvsup;
  Standard_Real mytolv;
  gp_Ax2 myPosition;
  Extrema_GenExtPS myExtPS;
  Standard_Boolean myIsAnalyticallyComputable;
  Standard_Boolean myDone;
  Standard_Integer myNbExt;
  Standard_Real mySqDist[8];
  Extrema_POnSurf myPoint[8];


};







#endif // _Extrema_ExtPRevS_HeaderFile
