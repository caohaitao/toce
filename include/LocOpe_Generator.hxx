// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_Generator_HeaderFile
#define _LocOpe_Generator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <Handle_LocOpe_GeneratedShape.hxx>
#include <Standard_Boolean.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
class LocOpe_GeneratedShape;
class StdFail_NotDone;
class Standard_NullObject;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TopoDS_Face;



class LocOpe_Generator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
    LocOpe_Generator();
  
  //! Creates the algorithm on the shape <S>.
    LocOpe_Generator(const TopoDS_Shape& S);
  
  //! Initializes the algorithm on the shape <S>.
      void Init (const TopoDS_Shape& S) ;
  
  Standard_EXPORT   void Perform (const Handle(LocOpe_GeneratedShape)& G) ;
  
      Standard_Boolean IsDone()  const;
  
  //! Returns the new shape
     const  TopoDS_Shape& ResultingShape()  const;
  
  //! Returns the initial shape
     const  TopoDS_Shape& Shape()  const;
  
  //! Returns  the  descendant  face  of <F>.    <F> may
  //! belong to the original shape or to the "generated"
  //! shape.  The returned    face may be   a null shape
  //! (when <F> disappears).
  Standard_EXPORT  const  TopTools_ListOfShape& DescendantFace (const TopoDS_Face& F) ;




protected:





private:



  TopoDS_Shape myShape;
  Handle(LocOpe_GeneratedShape) myGen;
  Standard_Boolean myDone;
  TopoDS_Shape myRes;
  TopTools_DataMapOfShapeListOfShape myModShapes;


};


#include <LocOpe_Generator.lxx>





#endif // _LocOpe_Generator_HeaderFile
