//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "edit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "Unit1.h"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ButtonSaveClick(TObject *Sender)
{
	if (EditLastName->Text.Trim().IsEmpty())
	{
		MessageDlg("Заполните поле «Фамилия»!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditLastName->SetFocus();
		return;
	}
	if (EditFirstName->Text.Trim().IsEmpty())
	{
		MessageDlg("Заполните поле «Имя»!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditFirstName->SetFocus();
		return;
	}
	if (EditMiddleName->Text.Trim().IsEmpty())
	{
		MessageDlg("Заполните поле «Отчество»!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditMiddleName->SetFocus();
		return;
	}
	if (EditDepartmentId->Text.Trim().IsEmpty())
	{
		MessageDlg("Заполните поле «ID Департамента»!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditDepartmentId->SetFocus();
		return;
	}
	if (EditPositionId->Text.Trim().IsEmpty())
	{
		MessageDlg("Заполните поле «ID должности»!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditPositionId->SetFocus();
		return;
	}
	if (EditAddressId->Text.Trim().IsEmpty())
	{
		MessageDlg("Заполните поле «ID адреса»!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditAddressId->SetFocus();
		return;
	}
	try
	{
		StrToInt(EditDepartmentId->Text);
	}
	catch (...)
	{
		MessageDlg("Поле «ID отдела» должно содержать целое число!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditDepartmentId->SetFocus();
		return;
	}
	try
	{
		StrToInt(EditPositionId->Text);
	}
	catch (...)
	{
		MessageDlg("Поле «ID должности» должно содержать целое число!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditPositionId->SetFocus();
		return;
	}
	try
	{
		StrToInt(EditAddressId->Text);
	}
	catch (...)
	{
		MessageDlg("Поле «ID адреса» должно содержать целое число!", mtError, TMsgDlgButtons() << mbOK, 0);
		EditAddressId->SetFocus();
		return;
	}
	try
	{
		if (!EditMode)
			Form1->ADOTableEmpl->Append();
		else
			Form1->ADOTableEmpl->Edit();
		Form1->ADOTableEmpl->FieldByName("last_name")->AsString      = EditLastName->Text;
		Form1->ADOTableEmpl->FieldByName("firtst_name")->AsString    = EditFirstName->Text;
		Form1->ADOTableEmpl->FieldByName("middle_name")->AsString    = EditMiddleName->Text;
		Form1->ADOTableEmpl->FieldByName("birth_date")->AsDateTime   = DateTimePickerBirthDate->Date;
		Form1->ADOTableEmpl->FieldByName("department_id")->AsInteger = StrToInt(EditDepartmentId->Text);
		Form1->ADOTableEmpl->FieldByName("position_id")->AsInteger   = StrToInt(EditPositionId->Text);
		Form1->ADOTableEmpl->FieldByName("address_id")->AsInteger    = StrToInt(EditAddressId->Text);
		Form1->ADOTableEmpl->Post();
		Close();
	}
	catch (Exception &e)
	{
		MessageDlg(e.Message, mtError, TMsgDlgButtons() << mbOK, 0);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::ButtonCancelClick(TObject *Sender)
{
    Close();
}

//---------------------------------------------------------------------------
