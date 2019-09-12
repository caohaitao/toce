// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PGeom2d_BezierCurve_HeaderFile
#define _PGeom2d_BezierCurve_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PGeom2d_BezierCurve.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_PColgp_HArray1OfPnt2d.hxx>
#include <Handle_PColStd_HArray1OfReal.hxx>
#include <PGeom2d_BoundedCurve.hxx>
class PColgp_HArray1OfPnt2d;
class PColStd_HArray1OfReal;


class PGeom2d_BezierCurve : public PGeom2d_BoundedCurve
{

public:

  
  //! Creates a non rational  Bezier curve with default
  //! values.
  Standard_EXPORT PGeom2d_BezierCurve();
  
  //! Creates a non rational Bezier curve with a set of
  //! poles aCurvePoles and a set of weights aPoleWeight.
  Standard_EXPORT PGeom2d_BezierCurve(const Handle(PColgp_HArray1OfPnt2d)& aPoles, const Handle(PColStd_HArray1OfReal)& aWeights, const Standard_Boolean aRational);
  
  //! Set the value of the field rational with <aRational>.
  Standard_EXPORT   void Rational (const Standard_Boolean aRational) ;
  
  //! Returns the value of the field rational.
  Standard_EXPORT   Standard_Boolean Rational()  const;
  
  //! Set the value of the field poles with <aPoles>.
  Standard_EXPORT   void Poles (const Handle(PColgp_HArray1OfPnt2d)& aPoles) ;
  
  //! Returns the value of the field poles.
  Standard_EXPORT   Handle(PColgp_HArray1OfPnt2d) Poles()  const;
  
  //! Set the value of the field weights.
  Standard_EXPORT   void Weights (const Handle(PColStd_HArray1OfReal)& aWeights) ;
  
  //! Returns the value of the field weights.
  Standard_EXPORT   Handle(PColStd_HArray1OfReal) Weights()  const;

PGeom2d_BezierCurve(const Storage_stCONSTclCOM& a) : PGeom2d_BoundedCurve(a)
{
  
}
    Standard_Boolean _CSFDB_GetPGeom2d_BezierCurverational() const { return rational; }
    void _CSFDB_SetPGeom2d_BezierCurverational(const Standard_Boolean p) { rational = p; }
    Handle(PColgp_HArray1OfPnt2d) _CSFDB_GetPGeom2d_BezierCurvepoles() const { return poles; }
    void _CSFDB_SetPGeom2d_BezierCurvepoles(const Handle(PColgp_HArray1OfPnt2d)& p) { poles = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPGeom2d_BezierCurveweights() const { return weights; }
    void _CSFDB_SetPGeom2d_BezierCurveweights(const Handle(PColStd_HArray1OfReal)& p) { weights = p; }



  DEFINE_STANDARD_RTTI(PGeom2d_BezierCurve)

protected:




private: 


  Standard_Boolean rational;
  Handle(PColgp_HArray1OfPnt2d) poles;
  Handle(PColStd_HArray1OfReal) weights;


};







#endif // _PGeom2d_BezierCurve_HeaderFile
