// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_SequenceOfIWLineOfTheIWalking_HeaderFile
#define _Contap_SequenceOfIWLineOfTheIWalking_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Handle_Contap_TheIWLineOfTheIWalking.hxx>
#include <Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Contap_TheIWLineOfTheIWalking;
class Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking;



class Contap_SequenceOfIWLineOfTheIWalking  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    Contap_SequenceOfIWLineOfTheIWalking();
  
  Standard_EXPORT Contap_SequenceOfIWLineOfTheIWalking(const Contap_SequenceOfIWLineOfTheIWalking& Other);
  
  Standard_EXPORT   void Clear() ;
~Contap_SequenceOfIWLineOfTheIWalking()
{
  Clear();
}
  
  Standard_EXPORT  const  Contap_SequenceOfIWLineOfTheIWalking& Assign (const Contap_SequenceOfIWLineOfTheIWalking& Other) ;
 const  Contap_SequenceOfIWLineOfTheIWalking& operator = (const Contap_SequenceOfIWLineOfTheIWalking& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Handle(Contap_TheIWLineOfTheIWalking)& T) ;
  
      void Append (Contap_SequenceOfIWLineOfTheIWalking& S) ;
  
  Standard_EXPORT   void Prepend (const Handle(Contap_TheIWLineOfTheIWalking)& T) ;
  
      void Prepend (Contap_SequenceOfIWLineOfTheIWalking& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Handle(Contap_TheIWLineOfTheIWalking)& T) ;
  
      void InsertBefore (const Standard_Integer Index, Contap_SequenceOfIWLineOfTheIWalking& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Handle(Contap_TheIWLineOfTheIWalking)& T) ;
  
      void InsertAfter (const Standard_Integer Index, Contap_SequenceOfIWLineOfTheIWalking& S) ;
  
  Standard_EXPORT  const  Handle(Contap_TheIWLineOfTheIWalking)& First()  const;
  
  Standard_EXPORT  const  Handle(Contap_TheIWLineOfTheIWalking)& Last()  const;
  
      void Split (const Standard_Integer Index, Contap_SequenceOfIWLineOfTheIWalking& Sub) ;
  
  Standard_EXPORT  const  Handle(Contap_TheIWLineOfTheIWalking)& Value (const Standard_Integer Index)  const;
 const  Handle(Contap_TheIWLineOfTheIWalking)& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(Contap_TheIWLineOfTheIWalking)& I) ;
  
  Standard_EXPORT   Handle(Contap_TheIWLineOfTheIWalking)& ChangeValue (const Standard_Integer Index) ;
  Handle(Contap_TheIWLineOfTheIWalking)& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Handle(Contap_TheIWLineOfTheIWalking)
#define SeqItem_hxx <Contap_TheIWLineOfTheIWalking.hxx>
#define TCollection_SequenceNode Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define TCollection_SequenceNode_hxx <Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking.hxx>
#define Handle_TCollection_SequenceNode Handle_Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking
#define TCollection_SequenceNode_Type_() Contap_SequenceNodeOfSequenceOfIWLineOfTheIWalking_Type_()
#define TCollection_Sequence Contap_SequenceOfIWLineOfTheIWalking
#define TCollection_Sequence_hxx <Contap_SequenceOfIWLineOfTheIWalking.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _Contap_SequenceOfIWLineOfTheIWalking_HeaderFile
