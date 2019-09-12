// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_Driver_HeaderFile
#define _XCAFPrs_Driver_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XCAFPrs_Driver.hxx>

#include <TPrsStd_Driver.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_AIS_InteractiveObject.hxx>
class TDF_Label;
class AIS_InteractiveObject;
class Standard_GUID;


//! Implements a driver for presentation of shapes in DECAF
//! document. Its the only purpose is to initialize and return
//! XCAFPrs_AISObject object on request
class XCAFPrs_Driver : public TPrsStd_Driver
{

public:

  
  Standard_EXPORT virtual   Standard_Boolean Update (const TDF_Label& L, Handle(AIS_InteractiveObject)& ais) ;
  
  //! returns GUID of the driver
  Standard_EXPORT static  const  Standard_GUID& GetID() ;




  DEFINE_STANDARD_RTTI(XCAFPrs_Driver)

protected:




private: 




};







#endif // _XCAFPrs_Driver_HeaderFile
