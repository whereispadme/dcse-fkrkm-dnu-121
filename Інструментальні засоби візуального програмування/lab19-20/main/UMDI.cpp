//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "UMDI.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMDI *FMDI;
//---------------------------------------------------------------------------
__fastcall TFMDI::TFMDI(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFMDI::Action1Execute(TObject *Sender)
{

  TFDoc *NewF=new TFDoc(Application);
  NewF->Caption="Кущевський"+IntToStr(FMDI->MDIChildCount);
  NewF->Show();
}


//---------------------------------------------------------------------------
void __fastcall TFMDI::WindowCascadeExecute(TObject *Sender)
{
Cascade();
}
//---------------------------------------------------------------------------
void __fastcall TFMDI::WindowTileHorizontalExecute(TObject *Sender)
{
	TileMode=tbHorizontal; Tile();
}
//---------------------------------------------------------------------------
void __fastcall TFMDI::WindowTileVerticalExecute(TObject *Sender)
{
   TileMode=tbVertical; Tile();
}
//---------------------------------------------------------------------------
