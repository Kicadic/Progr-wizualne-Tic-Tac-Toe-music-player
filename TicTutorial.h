//---------------------------------------------------------------------------

#ifndef TicTutorialH
#define TicTutorialH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TTicTacTutorial : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TImage *Image1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
private:	// User declarations
public:		// User declarations
        __fastcall TTicTacTutorial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTicTacTutorial *TicTacTutorial;
//---------------------------------------------------------------------------
#endif
