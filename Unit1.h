//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Dialogs.hpp>

#include <ComObj.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TDBGrid *DBGrid1;
	TADOTable *ADOTableEmpl;
	TDataSource *DataSourceEmpl;
	TPanel *Panel1;
	TButton *ButtonAddEml;
	TButton *ButtonEditEmpl;
	TButton *ButtonDelEmpl;
	TButton *ButtonAcceptEmpl;
	TPanel *Panel2;
	TGroupBox *GroupBox1;
	TDBGrid *DBGrid2;
	TDataSource *DataSourceProjecParticipation;
	TPanel *Panel4;
	TPanel *Panel5;
	TGroupBox *GroupBox2;
	TComboBox *ComboBoxSortField;
	TRadioButton *RadioButtonAsc;
	TRadioButton *RadioButtonDesc;
	TComboBox *ComboBoxFilterField;
	TEdit *EditFilter;
	TLabel *Label1;
	TLabel *Label2;
	TImage *ImageProject;
	TGroupBox *GroupBox3;
	TLabel *LabelName;
	TLabel *LabelDate;
	TMemo *MemoWorkers;
	TADOTable *ADOTableProjecParticipation;
	TADOQuery *ADOQuery1;
	TComboBox *ComboBoxTable;
	TEdit *EditPath;
	TButton *ButtonBrowse;
	TSaveDialog *SaveDialog1;
	TButton *ButtonReport;
	void __fastcall ButtonDelEmplClick(TObject *Sender);
	void __fastcall ButtonAcceptEmplClick(TObject *Sender);
	void __fastcall ButtonAddEmlClick(TObject *Sender);
	void __fastcall ButtonEditEmplClick(TObject *Sender);
	void __fastcall DBGrid2CellClick(TColumn *Column);
	void __fastcall ButtonBrowseClick(TObject *Sender);
	void __fastcall ButtonReportClick(TObject *Sender);


private:	// User declarations
String BasePath;
void __fastcall ExportToExcel(const String &FileName, const String &SheetTitle, const String &SQL);
public:		// User declarations
	void LoadProjectInfo(int projectId);
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
