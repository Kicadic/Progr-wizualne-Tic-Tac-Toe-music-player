object TicTacToe: TTicTacToe
  Left = 264
  Top = 266
  BorderStyle = bsSingle
  Caption = 'K'#243#322'ko i krzy'#380'yk'
  ClientHeight = 383
  ClientWidth = 626
  Color = clActiveBorder
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Pole1: TImage
    Left = 16
    Top = 32
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole1Click
  end
  object Pole2: TImage
    Left = 120
    Top = 32
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole2Click
  end
  object Pole3: TImage
    Left = 224
    Top = 32
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole3Click
  end
  object Pole4: TImage
    Left = 16
    Top = 136
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole4Click
  end
  object Pole5: TImage
    Left = 120
    Top = 136
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole5Click
  end
  object Pole6: TImage
    Left = 224
    Top = 136
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole6Click
  end
  object Pole7: TImage
    Left = 16
    Top = 240
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole7Click
  end
  object Pole8: TImage
    Left = 120
    Top = 240
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole8Click
  end
  object Pole9: TImage
    Left = 224
    Top = 240
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = Pole9Click
  end
  object Label1: TLabel
    Left = 352
    Top = 48
    Width = 182
    Height = 37
    Caption = 'Tura gracza:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Tura: TImage
    Left = 544
    Top = 42
    Width = 50
    Height = 50
  end
  object Button1: TButton
    Left = 376
    Top = 112
    Width = 177
    Height = 97
    Cursor = crHandPoint
    Caption = 'Reset'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
  object Button2: TButton
    Left = 376
    Top = 224
    Width = 177
    Height = 105
    Cursor = crHandPoint
    Caption = 'Powr'#243't'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnClick = Button2Click
  end
end
