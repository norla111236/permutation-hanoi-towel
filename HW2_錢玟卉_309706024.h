//---------------------------------------------------------------------------

#ifndef HW2_?????c_309706024H
#define HW2_?????c_309706024H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPageControl *PageControl1;
	TTabSheet *permutations;
	TTabSheet *permutations_with_tracing;
	TPageControl *PageControl2;
	TTabSheet *permutation_ABC;
	TButton *Button1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit1;
	TEdit *Edit2;
	TTabSheet *Hanoi;
	TTabSheet *Tower_of_hanoi;
	TEdit *Edit3;
	TLabel *Label4;
	TButton *Button2;
	TPanel *Panel2;
	TLabel *Label5;
	TMemo *Memo3;
	TMemo *Memo2;
	TMemo *Memo1;
	TCheckBox *CheckBox;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
