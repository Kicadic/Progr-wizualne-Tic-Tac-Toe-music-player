//---------------------------------------------------------------------------

#ifndef gamesaboutH
#define gamesaboutH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TAbout11 : public TForm
{
__published:	// IDE-managed Components
        TBitBtn *BitBtn1;
        TLabel *Label1;
        void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAbout11(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAbout11 *About11;
//---------------------------------------------------------------------------
#endif
