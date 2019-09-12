// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DNaming_HeaderFile
#define _DNaming_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_TDataStd_Real.hxx>
#include <Handle_TFunction_Function.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TDataStd_Integer.hxx>
#include <Handle_TDataStd_Name.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_TNaming_NamedShape.hxx>
#include <Handle_TDataStd_UAttribute.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Standard_CString.hxx>
#include <Handle_TDF_Data.hxx>
#include <Draw_Interpretor.hxx>
class TDataStd_Real;
class TFunction_Function;
class TDataStd_Integer;
class TDataStd_Name;
class TNaming_NamedShape;
class gp_Ax1;
class TDataStd_UAttribute;
class TopoDS_Shape;
class BRepBuilderAPI_MakeShape;
class TNaming_Builder;
class TopTools_DataMapOfShapeShape;
class TDF_Label;
class BRepAlgoAPI_BooleanOperation;
class TDF_Data;
class TopTools_ListOfShape;
class TCollection_AsciiString;
class DNaming_BoxDriver;
class DNaming_CylinderDriver;
class DNaming_SphereDriver;
class DNaming_SelectionDriver;
class DNaming_BooleanOperationDriver;
class DNaming_FilletDriver;
class DNaming_TransformationDriver;
class DNaming_PrismDriver;
class DNaming_RevolutionDriver;
class DNaming_PointDriver;
class DNaming_Line3DDriver;
class DNaming_DataMapOfShapeOfName;
class DNaming_DataMapNodeOfDataMapOfShapeOfName;
class DNaming_DataMapIteratorOfDataMapOfShapeOfName;



class DNaming 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Handle(TDataStd_Real) GetReal (const Handle(TFunction_Function)& theFunction, const Standard_Integer thePosition) ;
  
  Standard_EXPORT static   Handle(TDataStd_Integer) GetInteger (const Handle(TFunction_Function)& theFunction, const Standard_Integer thePosition) ;
  
  Standard_EXPORT static   Handle(TDataStd_Name) GetString (const Handle(TFunction_Function)& theFunction, const Standard_Integer thePosition) ;
  
  Standard_EXPORT static   Standard_Boolean ComputeAxis (const Handle(TNaming_NamedShape)& theNS, gp_Ax1& theAx1) ;
  
  Standard_EXPORT static   Handle(TNaming_NamedShape) GetFunctionResult (const Handle(TFunction_Function)& theFunction) ;
  
  Standard_EXPORT static   Handle(TDataStd_UAttribute) GetObjectArg (const Handle(TFunction_Function)& theFunction, const Standard_Integer thePosition) ;
  
  Standard_EXPORT static   void SetObjectArg (const Handle(TFunction_Function)& theFunction, const Standard_Integer thePosition, const Handle(TDataStd_UAttribute)& theNewValue) ;
  
  Standard_EXPORT static   Handle(TNaming_NamedShape) GetObjectValue (const Handle(TDataStd_UAttribute)& theObject) ;
  
  Standard_EXPORT static   Handle(TFunction_Function) GetLastFunction (const Handle(TDataStd_UAttribute)& theObject) ;
  
  Standard_EXPORT static   Handle(TFunction_Function) GetFirstFunction (const Handle(TDataStd_UAttribute)& theObject) ;
  
  Standard_EXPORT static   Handle(TFunction_Function) GetPrevFunction (const Handle(TFunction_Function)& theFunction) ;
  
  Standard_EXPORT static   Handle(TDataStd_UAttribute) GetObjectFromFunction (const Handle(TFunction_Function)& theFunction) ;
  
  Standard_EXPORT static   Standard_Boolean IsAttachment (const Handle(TDataStd_UAttribute)& theObject) ;
  
  Standard_EXPORT static   Handle(TNaming_NamedShape) GetAttachmentsContext (const Handle(TDataStd_UAttribute)& theObject) ;
  
  Standard_EXPORT static   Standard_Boolean ComputeSweepDir (const TopoDS_Shape& theShape, gp_Ax1& theAxis) ;
  
  Standard_EXPORT static   void LoadAndOrientModifiedShapes (BRepBuilderAPI_MakeShape& MakeShape, const TopoDS_Shape& ShapeIn, const TopAbs_ShapeEnum GeneratedFrom, TNaming_Builder& Buider, const TopTools_DataMapOfShapeShape& SubShapesOfResult) ;
  
  Standard_EXPORT static   void LoadAndOrientGeneratedShapes (BRepBuilderAPI_MakeShape& MakeShape, const TopoDS_Shape& ShapeIn, const TopAbs_ShapeEnum GeneratedFrom, TNaming_Builder& Buider, const TopTools_DataMapOfShapeShape& SubShapesOfResult) ;
  
  Standard_EXPORT static   void LoadDeletedShapes (BRepBuilderAPI_MakeShape& MakeShape, const TopoDS_Shape& ShapeIn, const TopAbs_ShapeEnum KindOfDeletedShape, TNaming_Builder& Buider) ;
  
  Standard_EXPORT static   void LoadResult (const TDF_Label& theLabel, BRepAlgoAPI_BooleanOperation& MS) ;
  
  Standard_EXPORT static   TopoDS_Shape CurrentShape (const Standard_CString ShapeEntry, const Handle(TDF_Data)& Data) ;
  
  Standard_EXPORT static   void GetShape (const Standard_CString ShapeEntry, const Handle(TDF_Data)& Data, TopTools_ListOfShape& Shapes) ;
  
  //! Status = 0  Not  found,
  //! Status = 1  One  shape,
  //! Status = 2  More than one shape.
  Standard_EXPORT static   TCollection_AsciiString GetEntry (const TopoDS_Shape& Shape, const Handle(TDF_Data)& Data, Standard_Integer& Status) ;
  
  //! Loads the Shape to DF
  Standard_EXPORT static   void LoadImportedShape (const TDF_Label& theResultLabel, const TopoDS_Shape& theShape) ;
  
  //! Reloads sub-shapes of the Shape to DF
  Standard_EXPORT static   void LoadPrime (const TDF_Label& theResultLabel, const TopoDS_Shape& theShape) ;
  
  Standard_EXPORT static   void AllCommands (Draw_Interpretor& DI) ;
  
  //! commands relatives to NamedShape
  Standard_EXPORT static   void BasicCommands (Draw_Interpretor& DI) ;
  
  Standard_EXPORT static   void ToolsCommands (Draw_Interpretor& DI) ;
  
  //! commands relatives to Naming
  Standard_EXPORT static   void SelectionCommands (Draw_Interpretor& DI) ;
  
  //! commands for  testing Naming
  Standard_EXPORT static   void ModelingCommands (Draw_Interpretor& DI) ;




protected:





private:




friend class DNaming_BoxDriver;
friend class DNaming_CylinderDriver;
friend class DNaming_SphereDriver;
friend class DNaming_SelectionDriver;
friend class DNaming_BooleanOperationDriver;
friend class DNaming_FilletDriver;
friend class DNaming_TransformationDriver;
friend class DNaming_PrismDriver;
friend class DNaming_RevolutionDriver;
friend class DNaming_PointDriver;
friend class DNaming_Line3DDriver;
friend class DNaming_DataMapOfShapeOfName;
friend class DNaming_DataMapNodeOfDataMapOfShapeOfName;
friend class DNaming_DataMapIteratorOfDataMapOfShapeOfName;

};







#endif // _DNaming_HeaderFile
