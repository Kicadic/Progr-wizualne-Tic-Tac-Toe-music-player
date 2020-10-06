//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("games.cpp", Form1);
USEFORM("gamesabout.cpp", About11);
USEFORM("musicplayer.cpp", MPlayer);
USEFORM("kolkoikrzyzyk.cpp", TicTacToe);
USEFORM("soundgame.cpp", Game);
USEFORM("wygrywa_tictactoe.cpp", Wygrywa);
USEFORM("Tut.cpp", Form2);
USEFORM("musicinstrukcja.cpp", PlayerTutorial);
USEFORM("TicTutorial.cpp", TicTacTutorial);
USEFORM("SoundGameTut.cpp", SoundTut);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TAbout11), &About11);
                 Application->CreateForm(__classid(TMPlayer), &MPlayer);
                 Application->CreateForm(__classid(TTicTacToe), &TicTacToe);
                 Application->CreateForm(__classid(TGame), &Game);
                 Application->CreateForm(__classid(TWygrywa), &Wygrywa);
                 Application->CreateForm(__classid(TForm2), &Form2);
                 Application->CreateForm(__classid(TPlayerTutorial), &PlayerTutorial);
                 Application->CreateForm(__classid(TTicTacTutorial), &TicTacTutorial);
                 Application->CreateForm(__classid(TSoundTut), &SoundTut);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
