//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Form1->GymUserGrid->Columns[0]->Header="ID";
	Form1->GymUserGrid->Columns[1]->Header="Member ID";
//    Form1->GymUserGrid->Columns[2]->Header="";

	Form1->GymUserGrid->Columns[0]->Width=40;
	Form1->GymUserGrid->Columns[1]->Width=80;
	Form1->GymUserGrid->Columns[2]->Width=120;
	Form1->GymUserGrid->Columns[3]->Width=120;

	Form1->GymUserGrid->Width=460;

	Form1->MemGrid->Columns[0]->Width=80;
	Form1->MemGrid->Columns[0]->Header="Member ID";
	Form1->MemGrid->Columns[1]->Header="Types";
	 Form1->MemGrid->Columns[1]->Width=120;
	  Form1->MemGrid->Height=100;

//	Form1->MemGrid->Width=100;

Form1->StringGrid3->Columns[0]->Header="ID";
Form1->StringGrid3->Columns[1]->Header="Member ID";
	Form1->StringGrid3->Columns[2]->Width=120;
	Form1->StringGrid3->Columns[3]->Width=120;


//	Form1->Fill->Color='#FF8400FF';
}
//---------------------------------------------------------------------------

