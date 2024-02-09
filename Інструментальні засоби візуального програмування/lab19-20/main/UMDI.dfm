object FMDI: TFMDI
  Left = 0
  Top = 0
  Caption = 'FMDI'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIForm
  Menu = MainMenu1
  OldCreateOrder = False
  OnShow = Action1Execute
  PixelsPerInch = 96
  TextHeight = 13
  object ImageList1: TImageList
    Left = 376
    Top = 40
  end
  object ActionList1: TActionList
    Images = ImageList1
    Left = 344
    Top = 152
    object Action1: TAction
      Caption = 'Action1'
      OnExecute = Action1Execute
    end
    object WindowCascade: TAction
      Caption = 'WindowCascade'
      OnExecute = WindowCascadeExecute
    end
    object WindowTileHorizontal: TAction
      Caption = 'WindowTileHorizontal'
      OnExecute = WindowTileHorizontalExecute
    end
    object WindowTileVertical: TAction
      Caption = 'WindowTileVertical'
      OnExecute = WindowTileVerticalExecute
    end
  end
  object MainMenu1: TMainMenu
    Left = 152
    Top = 96
    object N1: TMenuItem
      Caption = #1042#1110#1082#1085#1086
      object N2: TMenuItem
        Caption = #1050#1072#1089#1082#1072#1076
        OnClick = WindowCascadeExecute
      end
      object N3: TMenuItem
        Caption = #1043#1086#1088#1080#1079#1086#1085#1090#1072#1083#1100
        OnClick = WindowTileHorizontalExecute
      end
      object N4: TMenuItem
        Caption = #1042#1077#1088#1090#1080#1082#1072#1083#1100
        OnClick = WindowTileVerticalExecute
      end
    end
  end
end
