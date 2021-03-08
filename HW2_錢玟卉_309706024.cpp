//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HW2_�����c_309706024.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#define SWAP(x,y,t) (t=x,x=y,y=t)
char list[9] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'};
int n;
int p;
int k;
int tttt = 0;
int count;
int flag;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

void hanoi(int n, char A, char B, char C)
{
	String a = A;
	String b = B;
	String c = C;
	if (n == 1) {
	   Form1->Memo3->Lines->Add("Move sheet from "+a+" to "+c);
	   tttt++;
	}
	else{
		hanoi(n-1,A,C,B);
		hanoi(1,A,B,C);
        hanoi(n-1,B,A,C);
	}
}

void perm(char *list, int k, int p, int flag)

	{   int i, tmp;
		if (k == p-1)
		{
			if(flag == 2){
			Form1 -> Memo2 -> Lines -> Add("     ==>(k,n)=("+IntToStr(k)+","+IntToStr(p)+")! k=n-1 print! ");
			}
		   String test = list;     // Convert char * list to String testt
		   test = test.SubString(1, p);   // The first n characters of testt
		   // testt.SubString(1, n) ==> the n-char starting from testt[1]
		   if(flag == 2){
			Form1 -> Memo2 -> Lines -> Add("we have"+test+"  ["+IntToStr(count)+"]");
			}
		   Form1 -> Memo1 -> Lines -> Add(test+"  ["+IntToStr(count++)+"]");

		}

		else
		{   for (i=k; i<p; i++)
		   {
				SWAP(list[k], list[i], tmp);
                if(flag == 2){
				String test1 = list;     // Convert char * list to String testt
				test1 = test1.SubString(1, p);
				Form1 -> Memo2 -> Lines -> Add("     (k,n)=("+IntToStr(k)+","+IntToStr(p)+") ");
				Form1 -> Memo2 -> Lines -> Add("        >i="+IntToStr(i));
				Form1->Memo2->Lines->Add("           swap[k,i]=["+IntToStr(k)+","+IntToStr(i)+"] list[]="+test1);
				}

				perm(list, k+1, p, flag);

				SWAP(list[k], list[i], tmp);
				if(flag == 2){
                String test1 = list;     // Convert char * list to String testt
				test1 = test1.SubString(1, p);
				Form1 -> Memo2 -> Lines -> Add("     (k,n)=("+IntToStr(k)+","+IntToStr(p)+") ");
				Form1 -> Memo2 -> Lines -> Add("        >i="+IntToStr(i));
				Form1->Memo2->Lines->Add("           swap[k,i]=["+IntToStr(k)+","+IntToStr(i)+"] list[]="+test1);
				}

		   }
		}
	}


//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
 n = StrToInt(Edit3->Text);

 hanoi(n,'A','B','C');
 Form1->Memo3->Lines->Add(IntToStr(tttt)+"steps in total for"+IntToStr(n)+" disks");
 tttt = 0;
 n=0;
 Form1 -> Memo3 -> Lines -> Add("--------------------------------------------------");
 }
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
k = StrToInt(Edit1->Text);
String K = Edit1->Text;
p = StrToInt(Edit2->Text);
String P = Edit2->Text;
flag = 1;
	if(CheckBox -> Checked){
	Form1->Memo2->Lines->Add("      Go==>(k,n)=("+K+","+P+")");
	flag = 2;
	}
perm( list, k, p ,flag);
	if(CheckBox -> Checked){
	Form1 -> Memo2 -> Lines -> Add("--------------------------------------------------");
	}
Form1 -> Memo1 -> Lines -> Add("--------------------------------------------------");
}
//---------------------------------------------------------------------------
