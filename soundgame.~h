//---------------------------------------------------------------------------

#ifndef soundgameH
#define soundgameH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TGame : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TPanel *Panel2;
        TPanel *Panel3;
        TPanel *Panel4;
        TButton *Start;
        TButton *Powrot;
        TEdit *Edit1;
        TLabel *Label1;
        TEdit *Edit2;
        TButton *Easy;
        TButton *Medium;
        TButton *Hard;
        TButton *Reset;
        TBevel *Bevel1;
        void __fastcall Panel2Click(TObject *Sender);
        void __fastcall Panel3Click(TObject *Sender);
        void __fastcall Panel4Click(TObject *Sender);
        void __fastcall PowrotClick(TObject *Sender);
        void __fastcall Panel1Click(TObject *Sender);
        void __fastcall StartClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall EasyClick(TObject *Sender);
        void __fastcall MediumClick(TObject *Sender);
        void __fastcall HardClick(TObject *Sender);
        void __fastcall ResetClick(TObject *Sender);
        void __fastcall Panel1MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Panel1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Panel2MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Panel2MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Panel3MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Panel3MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall Panel4MouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall Panel4MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TGame(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGame *Game;
//---------------------------------------------------------------------------
#endif
