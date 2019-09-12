// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_SequenceOfArc_HeaderFile
#define _MAT_SequenceOfArc_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_MAT_Arc.hxx>
#include <Handle_MAT_SequenceNodeOfSequenceOfArc.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MAT_Arc;
class MAT_SequenceNodeOfSequenceOfArc;



class MAT_SequenceOfArc  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    MAT_SequenceOfArc();
  
  Standard_EXPORT MAT_SequenceOfArc(const MAT_SequenceOfArc& Other);
  
  Standard_EXPORT   void Clear() ;
~MAT_SequenceOfArc()
{
  Clear();
}
  
  Standard_EXPORT  const  MAT_SequenceOfArc& Assign (const MAT_SequenceOfArc& Other) ;
 const  MAT_SequenceOfArc& operator = (const MAT_SequenceOfArc& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(MAT_Arc)& T) ;
  
      void Append (MAT_SequenceOfArc& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(MAT_Arc)& T) ;
  
      void Prepend (MAT_SequenceOfArc& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(MAT_Arc)& T) ;
  
      void InsertBefore (const Standard_Integer Index, MAT_SequenceOfArc& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(MAT_Arc)& T) ;
  
      void InsertAfter (const Standard_Integer Index, MAT_SequenceOfArc& S) ;
  
  Standard_EXPORT  const  Handle(MAT_Arc)& First()  const;
  
  Standard_EXPORT  const  Handle(MAT_Arc)& Last()  const;
  
      void Split (const Standard_Integer Index, MAT_SequenceOfArc& Sub) ;
  
  Standard_EXPORT  const  Handle(MAT_Arc)& Value (const Standard_Integer Index)  const;
 const  Handle(MAT_Arc)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(MAT_Arc)& I) ;
  
  Standard_EXPORT   Handle(MAT_Arc)& ChangeValue (const Standard_Integer Index) ;
  Handle(MAT_Arc)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(MAT_Arc)
#define SeqItem_hxx <MAT_Arc.hxx>
#define TCollection_SequenceNode MAT_SequenceNodeOfSequenceOfArc
#define TCollection_SequenceNode_hxx <MAT_SequenceNodeOfSequenceOfArc.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT_SequenceNodeOfSequenceOfArc
#define TCollection_SequenceNode_Type_() MAT_SequenceNodeOfSequenceOfArc_Type_()
#define TCollection_Sequence MAT_SequenceOfArc
#define TCollection_Sequence_hxx <MAT_SequenceOfArc.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _MAT_SequenceOfArc_HeaderFile
