// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepRepr_RepresentationRelationshipWithTransformation_HeaderFile
#define _StepRepr_RepresentationRelationshipWithTransformation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepRepr_RepresentationRelationshipWithTransformation.hxx>

#include <StepRepr_Transformation.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepRepr_Representation.hxx>
class TCollection_HAsciiString;
class StepRepr_Representation;
class StepRepr_Transformation;



class StepRepr_RepresentationRelationshipWithTransformation : public StepRepr_ShapeRepresentationRelationship
{

public:

  
  Standard_EXPORT StepRepr_RepresentationRelationshipWithTransformation();
  
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription, const Handle(StepRepr_Representation)& aRep1, const Handle(StepRepr_Representation)& aRep2, const StepRepr_Transformation& aTransf) ;
  
  Standard_EXPORT   StepRepr_Transformation TransformationOperator()  const;
  
  Standard_EXPORT   void SetTransformationOperator (const StepRepr_Transformation& aTrans) ;




  DEFINE_STANDARD_RTTI(StepRepr_RepresentationRelationshipWithTransformation)

protected:




private: 


  StepRepr_Transformation theTrans;


};







#endif // _StepRepr_RepresentationRelationshipWithTransformation_HeaderFile
