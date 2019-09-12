// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_Protocol_HeaderFile
#define _StepAP214_Protocol_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP214_Protocol.hxx>

#include <StepData_Protocol.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Standard_Type.hxx>
#include <Standard_CString.hxx>
#include <Handle_Interface_Protocol.hxx>
class Standard_Type;
class Interface_Protocol;


//! Protocol for StepAP214 Entities
//! It requires StepAP214 as a Resource
class StepAP214_Protocol : public StepData_Protocol
{

public:

  
  Standard_EXPORT StepAP214_Protocol();
  
  //! Returns a Case Number for each of the StepAP214 Entities
  Standard_EXPORT virtual   Standard_Integer TypeNumber (const Handle(Standard_Type)& atype)  const;
  
  Standard_EXPORT virtual   Standard_CString SchemaName()  const;
  
  //! Returns count of Protocol used as Resources (level one)
  Standard_EXPORT virtual   Standard_Integer NbResources()  const;
  
  //! Returns a Resource, given its rank (between 1 and NbResources)
  Standard_EXPORT virtual   Handle(Interface_Protocol) Resource (const Standard_Integer num)  const;




  DEFINE_STANDARD_RTTI(StepAP214_Protocol)

protected:




private: 




};







#endif // _StepAP214_Protocol_HeaderFile
