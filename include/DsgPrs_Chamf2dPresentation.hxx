// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DsgPrs_Chamf2dPresentation_HeaderFile
#define _DsgPrs_Chamf2dPresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Prs3d_Presentation.hxx>
#include <Prs3d_Drawer.hxx>
#include <DsgPrs_ArrowSide.hxx>
class Prs3d_Presentation;
class gp_Pnt;
class TCollection_ExtendedString;


//! Framework for display of 2D chamfers.
class DsgPrs_Chamf2dPresentation 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Defines the display of elements showing 2D chamfers on shapes.
  //! These include the text aText, the point of attachment,
  //! aPntAttach and the end point aPntEnd.
  //! These arguments are added to the presentation
  //! object aPresentation. Their display attributes are
  //! defined by the attribute manager aDrawer.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Pnt& aPntAttach, const gp_Pnt& aPntEnd, const TCollection_ExtendedString& aText) ;
  
  //! Defines the display of texts, symbols and icons used
  //! to present 2D chamfers.
  //! These include the text aText, the point of attachment,
  //! aPntAttach and the end point aPntEnd.
  //! These arguments are added to the presentation
  //! object aPresentation. Their display attributes are
  //! defined by the attribute manager aDrawer. The arrow
  //! at the point of attachment has a display defined by a
  //! value of the enumeration DsgPrs_Arrowside.
  Standard_EXPORT static   void Add (const Handle(Prs3d_Presentation)& aPresentation, const Handle(Prs3d_Drawer)& aDrawer, const gp_Pnt& aPntAttach, const gp_Pnt& aPntEnd, const TCollection_ExtendedString& aText, const DsgPrs_ArrowSide ArrowSide) ;




protected:





private:





};







#endif // _DsgPrs_Chamf2dPresentation_HeaderFile
