//---------------------------------------------------------------------------

#ifndef gamesH
#define gamesH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TLabel *Label1;
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TMenuItem *vbf1;
        TMenuItem *Musicplayer1;
        TMenuItem *kkoikrzyyk1;
        TMenuItem *N1;
        TMenuItem *Wyj1;
        TMenuItem *Pomoc1;
        TMenuItem *About;
        TMenuItem *N2;
        TBevel *Bevel1;
        TMenuItem *Tutorial;
        TMenuItem *SoundGame;
        void __fastcall AboutClick(TObject *Sender);
        void __fastcall Wyj1Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Musicplayer1Click(TObject *Sender);
        void __fastcall kkoikrzyyk1Click(TObject *Sender);
        void __fastcall GameClick(TObject *Sender);
        void __fastcall TutorialClick(TObject *Sender);
        void __fastcall SoundGameClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
