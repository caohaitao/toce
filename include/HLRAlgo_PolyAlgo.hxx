// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRAlgo_PolyAlgo_HeaderFile
#define _HLRAlgo_PolyAlgo_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_HLRAlgo_PolyAlgo.hxx>

#include <Handle_TColStd_HArray1OfTransient.hxx>
#include <Standard_Real.hxx>
#include <HLRAlgo_ListIteratorOfListOfBPoint.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Address.hxx>
class TColStd_HArray1OfTransient;
class TColStd_Array1OfTransient;
class HLRAlgo_EdgeStatus;


//! to remove Hidden lines on Triangulations.
class HLRAlgo_PolyAlgo : public MMgt_TShared
{

public:

  
  Standard_EXPORT HLRAlgo_PolyAlgo();
  
  Standard_EXPORT   void Init (const Handle(TColStd_HArray1OfTransient)& HShell) ;
  
      TColStd_Array1OfTransient& PolyShell()  const;
  
  Standard_EXPORT   void Clear() ;
  
  //! Prepare all the data to process the algo.
  Standard_EXPORT   void Update() ;
  
      void InitHide() ;
  
      Standard_Boolean MoreHide()  const;
  
  Standard_EXPORT   void NextHide() ;
  
  //! process hiding between <Pt1> and <Pt2>.
  Standard_EXPORT   void Hide (Standard_Address& Coordinates, HLRAlgo_EdgeStatus& status, Standard_Integer& Index, Standard_Boolean& reg1, Standard_Boolean& regn, Standard_Boolean& outl, Standard_Boolean& intl) ;
  
      void InitShow() ;
  
      Standard_Boolean MoreShow()  const;
  
  Standard_EXPORT   void NextShow() ;
  
  //! process hiding between <Pt1> and <Pt2>.
  Standard_EXPORT   void Show (Standard_Address& Coordinates, Standard_Integer& Index, Standard_Boolean& reg1, Standard_Boolean& regn, Standard_Boolean& outl, Standard_Boolean& intl) ;




  DEFINE_STANDARD_RTTI(HLRAlgo_PolyAlgo)

protected:




private: 


  Handle(TColStd_HArray1OfTransient) myHShell;
  Standard_Real myRealPtr[10];
  HLRAlgo_ListIteratorOfListOfBPoint mySegListIt;
  Standard_Integer myNbrShell;
  Standard_Integer myCurShell;
  Standard_Boolean myFound;


};


#include <HLRAlgo_PolyAlgo.lxx>





#endif // _HLRAlgo_PolyAlgo_HeaderFile
