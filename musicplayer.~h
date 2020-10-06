//---------------------------------------------------------------------------

#ifndef musicplayerH
#define musicplayerH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <MPlayer.hpp>
#include <Dialogs.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TMPlayer : public TForm
{
__published:	// IDE-managed Components
        TListBox *ListBox1;
        TLabel *Label1;
        TOpenDialog *OpenDialog1;
        TEdit *Edit1;
        TTrackBar *Volume1;
        TProgressBar *ProgressBar1;
        TTimer *Timer1;
        TSpeedButton *Play1;
        TSpeedButton *Pause1;
        TSpeedButton *Stop1;
        TSpeedButton *Rewind1;
        TSpeedButton *Forward1;
        TSpeedButton *Open1;
        TSpeedButton *Clear1;
        TMediaPlayer *MediaPlayer1;
        TButton *Button1;
    
        void __fastcall Play1Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall Open1Click(TObject *Sender);
        void __fastcall Clear1Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Pause1Click(TObject *Sender);
        void __fastcall Stop1Click(TObject *Sender);
        void __fastcall Rewind1Click(TObject *Sender);
        void __fastcall Forward1Click(TObject *Sender);
        void __fastcall Volume1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:
 
AnsiString FullTime(void); // nowo tworzona funkcja FullTime
TStringList *Lista;
public:		// User declarations
        __fastcall TMPlayer(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMPlayer *MPlayer;
//---------------------------------------------------------------------------
#endif
