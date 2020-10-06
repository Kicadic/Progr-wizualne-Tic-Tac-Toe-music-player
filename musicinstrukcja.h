//---------------------------------------------------------------------------

#ifndef musicinstrukcjaH
#define musicinstrukcjaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
//---------------------------------------------------------------------------
class TPlayerTutorial : public TForm
{
__published:	// IDE-managed Components
        TLabel *Label1;
        TImage *Image1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TLabel *Label8;
        TLabel *Label9;
        TLabel *Label10;
        TLabel *Label11;
        TLabel *Label12;
private:	// User declarations
public:		// User declarations
        __fastcall TPlayerTutorial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPlayerTutorial *PlayerTutorial;
//---------------------------------------------------------------------------
#endif
