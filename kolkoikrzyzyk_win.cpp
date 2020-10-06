//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "kolkoikrzyzyk_win.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWygrywa *Wygrywa;
//---------------------------------------------------------------------------
__fastcall TWygrywa::TWygrywa(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWygrywa::OkClick(TObject *Sender)
{
Wygrywa->Close();
}
//---------------------------------------------------------------------------
