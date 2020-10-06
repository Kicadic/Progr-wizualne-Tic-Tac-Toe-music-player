//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "musicinstrukcja.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPlayerTutorial *PlayerTutorial;
//---------------------------------------------------------------------------
__fastcall TPlayerTutorial::TPlayerTutorial(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
