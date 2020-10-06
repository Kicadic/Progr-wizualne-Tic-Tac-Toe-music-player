object Wygrywa: TWygrywa
  Left = 874
  Top = 248
  Width = 351
  Height = 229
  Caption = 'Koniec gry!'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 40
    Width = 228
    Height = 36
    Caption = 'Wygrywa gracz:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Game_over: TImage
    Left = 256
    Top = 40
    Width = 50
    Height = 50
  end
  object Ok: TBitBtn
    Left = 56
    Top = 112
    Width = 193
    Height = 57
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = OkClick
    Kind = bkOK
  end
end
