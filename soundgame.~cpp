//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include"mmsystem.h"
#include "soundgame.h"
#include "windows.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TGame *Game;
int licznik;
int liczba[100];
int runda=0;
bool start=false;
 int a;
 bool easy=false;
 bool medium=false;
 bool hard=false;

 void zablokowanie()
 {
Game->Panel1->Enabled = false;
Game->Panel2->Enabled = false;
Game->Panel3->Enabled = false;
Game->Panel4->Enabled = false;
 }

 void losowanie()
 {
  randomize();
for(a=0;a<100;a++)
   {
        liczba[a]=random(4)+1;
   }

 }

 void poziom()
 {

 

            if(easy == true && licznik == 3)
             {

            Game->Edit2->Text="Doskonale!";
              start=false;
             runda++;
            Game->Edit1->Text=runda;
           zablokowanie();
             }


           if(medium == true && licznik == 5)
             {

            Game->Edit2->Text="Doskonale!";
              start=false;
             runda++;
             Game->Edit1->Text=runda;
             zablokowanie();
             }


           if(hard == true && licznik == 7)
             {
             
            Game->Edit2->Text="Doskonale!";
              start=false;
             runda++;
             Game->Edit1->Text=runda;
             zablokowanie();
             }
         


 }
//---------------------------------------------------------------------------
__fastcall TGame::TGame(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel2Click(TObject *Sender)
{
 if(start == true )
{
 Edit2->Text="";
sndPlaySound("sound/bell22.wav",SND_ASYNC);  //dzwiek
 licznik++;                            //licznik klikniec

if(liczba[licznik-1]!=2)
{

 Edit2->Text=("Koniec gry! Twój wynik:" +IntToStr(runda)); //Game over
 runda=0;
 Edit1->Text=runda;          //reset punktow

zablokowanie();
Start->Enabled=false;


 }
 poziom();
}

}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel3Click(TObject *Sender)
{
 if(start == true)
{
Edit2->Text="";
sndPlaySound("sound/bell33.wav",SND_ASYNC);
 licznik++;

if(liczba[licznik-1]!=3)
{

  Edit2->Text=("Koniec gry! Twój wynik:" +IntToStr(runda));
 runda=0;
 Edit1->Text=runda;

zablokowanie();
Start->Enabled=false;


  }
  poziom();
 }

}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel4Click(TObject *Sender)
{
 if(start == true)
{
Edit2->Text="";
sndPlaySound("sound/bell44.wav",SND_ASYNC);
 licznik++;

if(liczba[licznik-1]!=4)
{

  Edit2->Text=("Koniec gry! Twój wynik:" +IntToStr(runda));
 runda=0;
 Edit1->Text=runda;
zablokowanie();
Start->Enabled=false;
 }
 poziom();
 }


}
//---------------------------------------------------------------------------

void __fastcall TGame::PowrotClick(TObject *Sender)
{
Game->Close();
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel1Click(TObject *Sender)
{
        
 if(start == true)
{
Edit2->Text="";
sndPlaySound("sound/bell11.wav",SND_ASYNC);
 licznik++;

if(liczba[licznik-1]!=1)
{

  Edit2->Text=("Koniec gry! Twój wynik:" +IntToStr(runda));
 runda=0;
 Edit1->Text=runda;

zablokowanie();
Start->Enabled=false;

 }
 poziom();
 }

}
//---------------------------------------------------------------------------

void __fastcall TGame::StartClick(TObject *Sender)
{
losowanie();
licznik=0;
start=true;
zablokowanie();


if(easy == true)
{        Edit2->Text="";
        Medium->Enabled=false;
        Hard->Enabled=false;
        for(a = 0;a<3;a++)
        {

        switch(liczba[a])
         {
        case 1:
         {

         Game->Panel1->Color = clGreen;
         sndPlaySound("sound/bell11.wav",SND_ASYNC);
         Application->ProcessMessages();
          Sleep(1000);
         Game->Panel1->Color=clLime;
           }
        break;
        case 2:
        {

        Game->Panel2->Color=clNavy;
        sndPlaySound("sound/bell22.wav",SND_ASYNC);
        Application->ProcessMessages();
         Sleep(1000);
        Game->Panel2->Color=clBlue;
        }
        break;
         case 3:
        {
          Game->Panel3->Color=clPurple;
         sndPlaySound("sound/bell33.wav",SND_ASYNC);
         Application->ProcessMessages();
         Sleep(1000);
         Game->Panel3->Color=clFuchsia;
        }
        break;
         case 4:
        {
         Game->Panel4->Color=clMaroon;
         sndPlaySound("sound/bell44.wav",SND_ASYNC);
         Application->ProcessMessages();
         Sleep(1000);
         Game->Panel4->Color=clRed;
        }
        break;
        }

        Application->ProcessMessages();
        Sleep(1000);
}
}
if(medium == true)
{
        Edit2->Text="";
        Easy->Enabled=false;
        Hard->Enabled=false;
        for(a = 0;a<5;a++)
        {

        switch(liczba[a])
         {
        case 1:
         {

         Game->Panel1->Color = clGreen;
         sndPlaySound("sound/bell11.wav",SND_ASYNC);
         Application->ProcessMessages();
          Sleep(1000);
         Game->Panel1->Color=clLime;
           }
        break;
        case 2:
        {

        Game->Panel2->Color=clNavy;
        sndPlaySound("sound/bell22.wav",SND_ASYNC);
        Application->ProcessMessages();
         Sleep(1000);
        Game->Panel2->Color=clBlue;
        }
        break;
         case 3:
        {
          Game->Panel3->Color=clPurple;
         sndPlaySound("sound/bell33.wav",SND_ASYNC);
         Application->ProcessMessages();
         Sleep(1000);
         Game->Panel3->Color=clFuchsia;
        }
        break;
         case 4:
        {
         Game->Panel4->Color=clMaroon;
         sndPlaySound("sound/bell44.wav",SND_ASYNC);
         Application->ProcessMessages();
         Sleep(1000);
         Game->Panel4->Color=clRed;
        }
        break;
        }

        Application->ProcessMessages();
        Sleep(1000);
}
}
 if(hard == true)
{
        Edit2->Text="";
        Easy->Enabled=false;
        Medium->Enabled=false;
        for(a = 0;a<7;a++)
        {

        switch(liczba[a])
         {
        case 1:
         {

         Game->Panel1->Color = clGreen;
         sndPlaySound("sound/bell11.wav",SND_ASYNC);
         Application->ProcessMessages();
          Sleep(1000);
         Game->Panel1->Color=clLime;
           }
        break;
        case 2:
        {

        Game->Panel2->Color=clNavy;
        sndPlaySound("sound/bell22.wav",SND_ASYNC);
        Application->ProcessMessages();
         Sleep(1000);
        Game->Panel2->Color=clBlue;
        }
        break;
         case 3:
        {
          Game->Panel3->Color=clPurple;
         sndPlaySound("sound/bell33.wav",SND_ASYNC);
         Application->ProcessMessages();
         Sleep(1000);
         Game->Panel3->Color=clFuchsia;
        }
        break;
         case 4:
        {
         Game->Panel4->Color=clMaroon;
         sndPlaySound("sound/bell44.wav",SND_ASYNC);
         Application->ProcessMessages();
         Sleep(1000);
         Game->Panel4->Color=clRed;
        }
        break;
        }

        Application->ProcessMessages();
        Sleep(1000);
}

}

Game->Panel1->Enabled = true;
Game->Panel2->Enabled = true;
Game->Panel3->Enabled = true;
Game->Panel4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TGame::FormCreate(TObject *Sender)
{
Edit2->Text="Aby,zagrac wybierz poziom";
zablokowanie();

}
//---------------------------------------------------------------------------



void __fastcall TGame::EasyClick(TObject *Sender)
{
Edit2->Text="Easy";
easy=true;
medium=false;
hard=false;

}
//---------------------------------------------------------------------------

void __fastcall TGame::MediumClick(TObject *Sender)
{
Edit2->Text="Medium";
easy=false;
medium=true;
hard=false;

}
//---------------------------------------------------------------------------

void __fastcall TGame::HardClick(TObject *Sender)
{
Edit2->Text="Hard";
easy=false;
medium=false;
hard=true;

}
//---------------------------------------------------------------------------


void __fastcall TGame::ResetClick(TObject *Sender)
{
licznik=0;
easy=false;
medium=false;
hard=false;
runda=0;
Start->Enabled = true;
start=false;
Edit2->Text="Aby,zagrac wybierz poziom";
Edit1->Text=runda;
Medium->Enabled=true;
Hard->Enabled=true;
Easy->Enabled=true;
}
//---------------------------------------------------------------------------




void __fastcall TGame::Panel1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
  Game->Panel1->Color = clGreen;
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
 Game->Panel1->Color=clLime;
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel2MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Game->Panel2->Color=clNavy;
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel2MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
  Game->Panel2->Color=clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel3MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
Game->Panel3->Color=clPurple;        
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel3MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Game->Panel3->Color=clFuchsia;        
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel4MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
 Game->Panel4->Color=clMaroon;        
}
//---------------------------------------------------------------------------

void __fastcall TGame::Panel4MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Game->Panel4->Color=clRed;        
}
//---------------------------------------------------------------------------

