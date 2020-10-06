object Form1: TForm1
  Left = 708
  Top = 118
  BorderStyle = bsSingle
  Caption = 'Music Player i gry'
  ClientHeight = 405
  ClientWidth = 360
  Color = clAppWorkSpace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 48
    Top = 32
    Width = 284
    Height = 64
    Caption = 
      'Aplikacja posiada 2 gry(K'#243#322'ko i krzy'#380'yk i Sound memory game) ora' +
      'z  odtwarzacz muzyczny. Tutorial krzystania z aplikacji znajdzie' +
      'sz w Pomoc.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    WordWrap = True
  end
  object Bevel1: TBevel
    Left = 72
    Top = 208
    Width = 225
    Height = 9
    Shape = bsTopLine
  end
  object Button1: TButton
    Left = 72
    Top = 128
    Width = 233
    Height = 73
    Cursor = crHandPoint
    Caption = 'Music player'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 72
    Top = 216
    Width = 233
    Height = 73
    Cursor = crHandPoint
    Caption = 'K'#243#322'ko i krzy'#380'yk'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 72
    Top = 296
    Width = 233
    Height = 73
    Cursor = crHandPoint
    Caption = 'Sound memory game'
    TabOrder = 2
    OnClick = Button3Click
  end
  object MainMenu1: TMainMenu
    object vbf1: TMenuItem
      Caption = 'Menu'
      object Musicplayer1: TMenuItem
        Caption = 'Music player'
        OnClick = Musicplayer1Click
      end
      object kkoikrzyyk1: TMenuItem
        Caption = 'K'#243#322'ko i krzy'#380'yk'
        OnClick = kkoikrzyyk1Click
      end
      object SoundGame: TMenuItem
        Caption = 'Sound Memory Game'
        OnClick = SoundGameClick
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Wyj1: TMenuItem
        Caption = 'Wyjscie'
        OnClick = Wyj1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object Tutorial: TMenuItem
        Caption = 'Tutorial'
        OnClick = TutorialClick
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object About: TMenuItem
        Caption = 'About'
        OnClick = AboutClick
      end
    end
  end
end
