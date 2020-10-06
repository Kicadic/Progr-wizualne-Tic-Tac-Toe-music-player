//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "musicinstrukcja.h"
#include "Tut.h"
#include "TicTutorial.h"
#include "SoundGameTut.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
  PlayerTutorial->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
TicTacTutorial->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
SoundTut->ShowModal();
}
//---------------------------------------------------------------------------

