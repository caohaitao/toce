// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_EdgeFaceTool_HeaderFile
#define _HLRBRep_EdgeFaceTool_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
class gp_Dir;


//! The EdgeFaceTool computes the  UV coordinates at a
//! given parameter on a Curve and a Surface.  It also
//! compute the signed  curvature value in a direction
//! at a given u,v point on a surface.
class HLRBRep_EdgeFaceTool 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Real CurvatureValue (const Standard_Address F, const Standard_Real U, const Standard_Real V, const gp_Dir& Tg) ;
  
  //! return True if U and V are found.
  Standard_EXPORT static   Standard_Boolean UVPoint (const Standard_Real Par, const Standard_Address E, const Standard_Address F, Standard_Real& U, Standard_Real& V) ;




protected:





private:





};







#endif // _HLRBRep_EdgeFaceTool_HeaderFile
