// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _RWStepDimTol_RWDatum_HeaderFile
#define _RWStepDimTol_RWDatum_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_StepData_StepReaderData.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Interface_Check.hxx>
#include <Handle_StepDimTol_Datum.hxx>
class StepData_StepReaderData;
class Interface_Check;
class StepDimTol_Datum;
class StepData_StepWriter;
class Interface_EntityIterator;


//! Read & Write tool for Datum
class RWStepDimTol_RWDatum 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor
  Standard_EXPORT RWStepDimTol_RWDatum();
  
  //! Reads Datum
  Standard_EXPORT   void ReadStep (const Handle(StepData_StepReaderData)& data, const Standard_Integer num, Handle(Interface_Check)& ach, const Handle(StepDimTol_Datum)& ent)  const;
  
  //! Writes Datum
  Standard_EXPORT   void WriteStep (StepData_StepWriter& SW, const Handle(StepDimTol_Datum)& ent)  const;
  
  //! Fills data for graph (shared items)
  Standard_EXPORT   void Share (const Handle(StepDimTol_Datum)& ent, Interface_EntityIterator& iter)  const;




protected:





private:





};







#endif // _RWStepDimTol_RWDatum_HeaderFile
