//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFDoc : public TForm
{
__published:	// IDE-managed Components
	TRichEdit *RichEdit1;
	TPopupMenu *PopupMenu1;
	TMenuItem *N1;



private:
public:		// User declarations
	__fastcall TFDoc(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFDoc *FDoc;
//---------------------------------------------------------------------------
#endif
