//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "kolkoikrzyzyk.h"
#include "wygrywa_tictactoe.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TWygrywa *Wygrywa;
extern char ktory_gracz;

//---------------------------------------------------------------------------
__fastcall TWygrywa::TWygrywa(TComponent* Owner)
        : TForm(Owner)
{
        if(ktory_gracz=='x')
        {
         Gover->Picture->LoadFromFile("img/minikrzyzyk.bmp");
        }
        else if(ktory_gracz=='o')
        {
        Gover->Picture->LoadFromFile("img/minikolko.bmp");
        }

}
//---------------------------------------------------------------------------
void __fastcall TWygrywa::OkClick(TObject *Sender)
{
Wygrywa->Close();
}
//---------------------------------------------------------------------------
