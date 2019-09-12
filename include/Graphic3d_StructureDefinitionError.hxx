// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_StructureDefinitionError_HeaderFile
#define _Graphic3d_StructureDefinitionError_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_DefineException.hxx>
#include <Standard_SStream.hxx>
#include <Standard_OutOfRange.hxx>
#include <Handle_Graphic3d_StructureDefinitionError.hxx>

#if !defined No_Exception && !defined No_Graphic3d_StructureDefinitionError
  #define Graphic3d_StructureDefinitionError_Raise_if(CONDITION, MESSAGE) \
  if (CONDITION) Graphic3d_StructureDefinitionError::Raise(MESSAGE);
#else
  #define Graphic3d_StructureDefinitionError_Raise_if(CONDITION, MESSAGE)
#endif

DEFINE_STANDARD_EXCEPTION(Graphic3d_StructureDefinitionError, Standard_OutOfRange)

#endif // _Graphic3d_StructureDefinitionError_HeaderFile
