//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "musicplayer.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMPlayer *MPlayer;
int index;

//---------------------------------------------------------------------------
__fastcall TMPlayer::TMPlayer(TComponent* Owner)
        : TForm(Owner)
{
}
//------------------------------------------------------------------------
void __fastcall TMPlayer::Play1Click(TObject *Sender)
{

if(ListBox1->ItemIndex >= 0)
{
 MediaPlayer1->FileName = Lista->Strings[index];
MediaPlayer1->Open();

Timer1->Enabled = true;
ProgressBar1->Max = MediaPlayer1->Length;

MediaPlayer1->Play();
Edit1->Text = ListBox1->Items->Strings[index] + FullTime();
ListBox1->ItemIndex;
}
else {
Application->MessageBox("Wybierz z listy plik który chcesz odtworzyæ!", "Nie wybrano pliku.", MB_OK|MB_ICONSTOP);
          }
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::FormCreate(TObject *Sender)
{
Lista = new TStringList;
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::FormClose(TObject *Sender, TCloseAction &Action)
{
Lista->Free();
}
//---------------------------------------------------------------------------




void __fastcall TMPlayer::Open1Click(TObject *Sender)
{
if(OpenDialog1->Execute()){
for(int i = 0; i < Lista->Count; i++){
  if(OpenDialog1->FileName == Lista->Strings[i]) return;
          }
  Lista->Add(OpenDialog1->FileName);
  ListBox1->Items->Add(ExtractFileName(OpenDialog1->FileName));
     }        
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::Clear1Click(TObject *Sender)
{
ListBox1->Items->Clear();
Lista->Clear();
}
//---------------------------------------------------------------------------
 AnsiString TMPlayer::FullTime(void)
{
  String MediaLength = "??:??:??";
  MediaPlayer1->TimeFormat = tfMilliseconds;
  int Time = MediaPlayer1->Length / 1000;
  int Hours = Time / 3600;
  int Minutes = (Time - (Hours*3600)) / 60;
  int Seconds = Time - (Hours*3600) - (Minutes*60);

  MediaLength = FormatCurr(" - D³ugoœæ: 0#:", Hours);
  MediaLength += FormatCurr("0#:", Minutes);
  MediaLength += FormatCurr("0#", Seconds);

  return MediaLength;
}
//--------------------------------


void __fastcall TMPlayer::Timer1Timer(TObject *Sender)
{
ProgressBar1->Position = MediaPlayer1->Position;
if(ProgressBar1->Position == MediaPlayer1->Length)
{
Timer1->Enabled = false;
if(ListBox1->ItemIndex < ListBox1->Items->Count - 1)
ListBox1->ItemIndex = ListBox1->ItemIndex + 1;
else
{
ListBox1->ItemIndex = 0;
MediaPlayer1->Close();
MediaPlayer1->FileName = Lista->Strings[index];
MediaPlayer1->Open();

Timer1->Enabled = true;
ProgressBar1->Max = MediaPlayer1->Length;

MediaPlayer1->Play();
Edit1->Text = ListBox1->Items->Strings[index] + FullTime();
ListBox1->ItemIndex;
 }
 }
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::Pause1Click(TObject *Sender)
{
MediaPlayer1->Pause();        
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::Stop1Click(TObject *Sender)
{
Timer1->Enabled = false;
MediaPlayer1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::Rewind1Click(TObject *Sender)
{
if(ListBox1->ItemIndex > 0)
ListBox1->ItemIndex--;
MediaPlayer1->FileName = Lista->Strings[index];
MediaPlayer1->Open();

Timer1->Enabled = true;
ProgressBar1->Max = MediaPlayer1->Length;

MediaPlayer1->Play();
Edit1->Text = ListBox1->Items->Strings[index] + FullTime();
ListBox1->ItemIndex;
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::Forward1Click(TObject *Sender)
{
if(ListBox1->ItemIndex < ListBox1->Items->Count)
ListBox1->ItemIndex++;
MediaPlayer1->FileName = Lista->Strings[index];
MediaPlayer1->Open();

Timer1->Enabled = true;
ProgressBar1->Max = MediaPlayer1->Length;

MediaPlayer1->Play();
Edit1->Text = ListBox1->Items->Strings[index] + FullTime();
ListBox1->ItemIndex;
}
//---------------------------------------------------------------------------

void __fastcall TMPlayer::Volume1Change(TObject *Sender)
{
waveOutSetVolume (0, (Volume1->Position * 65536) + Volume1->Position);        
}
//---------------------------------------------------------------------------
void __fastcall TMPlayer::Button1Click(TObject *Sender)
{
Application->Terminate();

}
//---------------------------------------------------------------------------

