// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_VPointInterIterator_HeaderFile
#define _TopOpeBRep_VPointInterIterator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopOpeBRep_PLineInter.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class TopOpeBRep_LineInter;
class TopOpeBRep_VPointInter;



class TopOpeBRep_VPointInterIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRep_VPointInterIterator();
  
  Standard_EXPORT TopOpeBRep_VPointInterIterator(const TopOpeBRep_LineInter& LI);
  
  Standard_EXPORT   void Init (const TopOpeBRep_LineInter& LI, const Standard_Boolean checkkeep = Standard_False) ;
  
  Standard_EXPORT   void Init() ;
  
  Standard_EXPORT   Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT  const  TopOpeBRep_VPointInter& CurrentVP() ;
  
  Standard_EXPORT   Standard_Integer CurrentVPIndex()  const;
  
  Standard_EXPORT   TopOpeBRep_VPointInter& ChangeCurrentVP() ;
  
  Standard_EXPORT   TopOpeBRep_PLineInter PLineInterDummy()  const;




protected:





private:



  TopOpeBRep_PLineInter myLineInter;
  Standard_Integer myVPointIndex;
  Standard_Integer myVPointNb;
  Standard_Boolean mycheckkeep;


};







#endif // _TopOpeBRep_VPointInterIterator_HeaderFile
