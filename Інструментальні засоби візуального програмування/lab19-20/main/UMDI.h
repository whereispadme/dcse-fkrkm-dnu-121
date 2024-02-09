//---------------------------------------------------------------------------

#ifndef UMDIH
#define UMDIH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TFMDI : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TActionList *ActionList1;
	TAction *Action1;
	TAction *WindowCascade;
	TAction *WindowTileHorizontal;
	TAction *WindowTileVertical;
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *N4;
	void __fastcall Action1Execute(TObject *Sender);
	void __fastcall WindowCascadeExecute(TObject *Sender);
	void __fastcall WindowTileHorizontalExecute(TObject *Sender);
	void __fastcall WindowTileVerticalExecute(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFMDI(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFMDI *FMDI;
//---------------------------------------------------------------------------
#endif
