//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "gamesabout.h"
#include "games.h"
#include "musicplayer.h"
#include "kolkoikrzyzyk.h"
#include "soundgame.h"
#include "Tut.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AboutClick(TObject *Sender)
{
  About11->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wyj1Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
MPlayer->Show();
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Button3Click(TObject *Sender)
{
Game->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
TicTacToe->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Musicplayer1Click(TObject *Sender)
{
MPlayer->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::kkoikrzyyk1Click(TObject *Sender)
{
TicTacToe->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::GameClick(TObject *Sender)
{
Game->ShowModal();
}
//---------------------------------------------------------------------------





void __fastcall TForm1::TutorialClick(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::SoundGameClick(TObject *Sender)
{
    Game->ShowModal();    
}
//---------------------------------------------------------------------------

