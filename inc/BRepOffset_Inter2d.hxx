// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffset_Inter2d_HeaderFile
#define _BRepOffset_Inter2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_BRepAlgo_AsDes_HeaderFile
#include <Handle_BRepAlgo_AsDes.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRepAlgo_AsDes;
class TopoDS_Face;
class TopTools_MapOfShape;
class BRepOffset_Offset;
class TopTools_DataMapOfShapeShape;


//! Computes the intersections betwwen edges on a face <br>
//!          stores result is SD as AsDes from BRepOffset. <br>
class BRepOffset_Inter2d  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Computes the intersections between the edges stored <br>
//!          is AsDes as descendants of <F> . Intersections is computed <br>
//!          between two edges if one of them is bound in NewEdges. <br>
  Standard_EXPORT   static  void Compute(const Handle(BRepAlgo_AsDes)& AsDes,const TopoDS_Face& F,const TopTools_MapOfShape& NewEdges,const Standard_Real Tol) ;
  
  Standard_EXPORT   static  void ConnexIntByInt(const TopoDS_Face& FI,BRepOffset_Offset& OFI,TopTools_DataMapOfShapeShape& MES,const TopTools_DataMapOfShapeShape& Build,const Handle(BRepAlgo_AsDes)& AsDes,const Standard_Real Offset,const Standard_Real Tol) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif