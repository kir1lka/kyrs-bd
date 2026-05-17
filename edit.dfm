object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1047#1072#1087#1086#1083#1085#1080#1090#1077' '#1087#1086#1083#1103
  ClientHeight = 287
  ClientWidth = 461
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poDesktopCenter
  TextHeight = 15
  object Label1: TLabel
    Left = 263
    Top = 33
    Width = 51
    Height = 15
    Caption = #1060#1072#1084#1080#1083#1080#1103
  end
  object Label2: TLabel
    Left = 263
    Top = 62
    Width = 24
    Height = 15
    Caption = #1048#1084#1103
  end
  object Label3: TLabel
    Left = 263
    Top = 91
    Width = 51
    Height = 15
    Caption = #1054#1090#1095#1077#1089#1090#1074#1086
  end
  object Label4: TLabel
    Left = 263
    Top = 150
    Width = 90
    Height = 15
    Caption = 'Id '#1076#1077#1087#1086#1088#1090#1072#1084#1077#1085#1090#1072
  end
  object Label5: TLabel
    Left = 263
    Top = 179
    Width = 74
    Height = 15
    Caption = 'Id '#1076#1086#1083#1078#1085#1086#1089#1090#1080
  end
  object Label6: TLabel
    Left = 263
    Top = 208
    Width = 62
    Height = 15
    Caption = 'Id '#1072#1076#1077#1088#1077#1089#1089#1072
  end
  object Label7: TLabel
    Left = 263
    Top = 120
    Width = 83
    Height = 15
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
  end
  object EditLastName: TEdit
    Left = 56
    Top = 30
    Width = 186
    Height = 23
    TabOrder = 0
    Text = 'EditLastName'
  end
  object EditMiddleName: TEdit
    Left = 56
    Top = 88
    Width = 186
    Height = 23
    TabOrder = 1
    Text = 'EditMiddleName'
  end
  object EditPositionId: TEdit
    Left = 56
    Top = 176
    Width = 186
    Height = 23
    TabOrder = 2
    Text = 'EditDepartmentId'
  end
  object EditFirstName: TEdit
    Left = 56
    Top = 59
    Width = 186
    Height = 23
    TabOrder = 3
    Text = 'EditFirstName'
  end
  object EditDepartmentId: TEdit
    Left = 56
    Top = 147
    Width = 186
    Height = 23
    TabOrder = 4
    Text = 'EditDepartmentId'
  end
  object DateTimePickerBirthDate: TDateTimePicker
    Left = 56
    Top = 117
    Width = 186
    Height = 23
    Date = 46159.000000000000000000
    Time = 0.991283252311404800
    TabOrder = 5
  end
  object EditAddressId: TEdit
    Left = 56
    Top = 205
    Width = 186
    Height = 23
    TabOrder = 6
    Text = 'EditAddressId'
  end
  object ButtonSave: TButton
    Left = 56
    Top = 240
    Width = 145
    Height = 25
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
    TabOrder = 7
    OnClick = ButtonSaveClick
  end
  object ButtonCancel: TButton
    Left = 256
    Top = 240
    Width = 145
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1080#1090#1100
    TabOrder = 8
    OnClick = ButtonCancelClick
  end
end
