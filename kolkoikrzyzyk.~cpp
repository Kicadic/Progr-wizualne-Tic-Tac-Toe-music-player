//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "wygrywa_tictactoe.h"
#include "games.h"
#include "kolkoikrzyzyk.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTicTacToe *TicTacToe;
  char p1,p2,p3,p4,p5,p6,p7,p8,p9;   //pola w tic tac toe
  char * m;
  char * p;
  char ktory_gracz;

   void sprawdzenie()
 {
   if(
   (p1 == p2 && p2 == p3 && p1!='n') ||
   (p4 == p5 && p5 == p6 && p4!='n') ||        //wygrana poziomo
   (p7 == p8 && p8 == p9 && p7!='n') ||

   (p1 == p4 && p4 == p7 && p1!='n')||
   (p2 == p5 && p5 == p8 && p2!='n') ||       //wygrana pionowo
   (p3 == p6 && p6 == p9 && p3!='n')||

    (p1 == p5 && p5 == p9 && p1!='n')||         //wygrana na skos
    (p3 == p5 && p5 == p7 && p3!='n')
   )
   {
         if(ktory_gracz=='x')
         {
          m="Wygrywa gracz:";

         }
                 else
                 {
                 m="Wygrywa gracz:";

                 }
                
                 Wygrywa->ShowModal();



   }

 }
//---------------------------------------------------------------------------
__fastcall TTicTacToe::TTicTacToe(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTicTacToe::Button2Click(TObject *Sender)
{
  TicTacToe->Close();
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::FormCreate(TObject *Sender)
{
 Pole1->Picture->LoadFromFile("img/pusty.bmp");
 Pole2->Picture->LoadFromFile("img/pusty.bmp");
 Pole3->Picture->LoadFromFile("img/pusty.bmp");
 Pole4->Picture->LoadFromFile("img/pusty.bmp");
 Pole5->Picture->LoadFromFile("img/pusty.bmp");
 Pole6->Picture->LoadFromFile("img/pusty.bmp");
 Pole7->Picture->LoadFromFile("img/pusty.bmp");
 Pole8->Picture->LoadFromFile("img/pusty.bmp");
 Pole9->Picture->LoadFromFile("img/pusty.bmp");
 Tura->Picture->LoadFromFile("img/minikolko.bmp");

 p1='n';
 p2='n';
 p3='n';
 p4='n';
 p5='n';
 p6='n';
 p7='n';
 p8='n';
 p9='n';
 ktory_gracz='o';
 Pole1->Enabled=true;
 Pole2->Enabled=true;
 Pole3->Enabled=true;
 Pole4->Enabled=true;
 Pole5->Enabled=true;
 Pole6->Enabled=true;
 Pole7->Enabled=true;
 Pole8->Enabled=true;
 Pole9->Enabled=true;
}


//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole1Click(TObject *Sender)
{
if(p1=='n')
{
        if(ktory_gracz=='o')
        {
         Pole1->Picture->LoadFromFile("img/kolko.bmp");
         p1='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole1->Picture->LoadFromFile("img/krzyzyk.bmp");
           p1='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole1->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------


void __fastcall TTicTacToe::Pole2Click(TObject *Sender)
{
if(p2=='n')
{
        if(ktory_gracz=='o')
        {
         Pole2->Picture->LoadFromFile("img/kolko.bmp");
         p2='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole2->Picture->LoadFromFile("img/krzyzyk.bmp");
           p2='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole2->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole3Click(TObject *Sender)
{
if(p3=='n')
{
        if(ktory_gracz=='o')
        {
         Pole3->Picture->LoadFromFile("img/kolko.bmp");
         p3='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole3->Picture->LoadFromFile("img/krzyzyk.bmp");
           p3='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole3->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole4Click(TObject *Sender)
{
if(p4=='n')
{
        if(ktory_gracz=='o')
        {
         Pole4->Picture->LoadFromFile("img/kolko.bmp");
         p4='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole4->Picture->LoadFromFile("img/krzyzyk.bmp");
           p4='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole4->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole5Click(TObject *Sender)
{
if(p5=='n')
{
        if(ktory_gracz=='o')
        {
         Pole5->Picture->LoadFromFile("img/kolko.bmp");
         p5='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole5->Picture->LoadFromFile("img/krzyzyk.bmp");
           p5='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole5->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole6Click(TObject *Sender)
{
if(p6=='n')
{
        if(ktory_gracz=='o')
        {
         Pole6->Picture->LoadFromFile("img/kolko.bmp");
         p6='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole6->Picture->LoadFromFile("img/krzyzyk.bmp");
           p6='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole6->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole7Click(TObject *Sender)
{
if(p7=='n')
{
        if(ktory_gracz=='o')
        {
         Pole7->Picture->LoadFromFile("img/kolko.bmp");
         p7='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole7->Picture->LoadFromFile("img/krzyzyk.bmp");
           p7='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole7->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole8Click(TObject *Sender)
{
if(p8=='n')
{
        if(ktory_gracz=='o')
        {
         Pole8->Picture->LoadFromFile("img/kolko.bmp");
         p8='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole8->Picture->LoadFromFile("img/krzyzyk.bmp");
           p8='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole8->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

void __fastcall TTicTacToe::Pole9Click(TObject *Sender)
{
if(p9=='n')
{
        if(ktory_gracz=='o')
        {
         Pole9->Picture->LoadFromFile("img/kolko.bmp");
         p9='o';
         ktory_gracz='x';
         Tura->Picture->LoadFromFile("img/minikrzyzyk.bmp");

        }
        else
        {
           Pole9->Picture->LoadFromFile("img/krzyzyk.bmp");
           p9='x';
           ktory_gracz='o';
           Tura->Picture->LoadFromFile("img/minikolko.bmp");


        }
       Pole9->Enabled=false;
       sprawdzenie();
}
}
//---------------------------------------------------------------------------

