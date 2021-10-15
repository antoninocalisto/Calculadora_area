//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "form_list_functions.h"
#include "rect.h"
#include "triangle.h"
#include "Unit1.h"
#include "iostream.h"

#include <string>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCalc_form_functions_list *Calc_form_functions_list;
//---------------------------------------------------------------------------
__fastcall TCalc_form_functions_list::TCalc_form_functions_list(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TCalc_form_functions_list::Calculator_form_List_function_Button_limparClick(
      TObject *Sender)
{
    //Calculator_form_List_function_Button_limpar
      Calculator_form_List_functions_memo_exibir_area->Clear();
      Calculator_form_List_functions_memo_exibir_perimetro->Clear();    
}
//---------------------------------------------------------------------------


void __fastcall TCalc_form_functions_list::FormCreate(TObject *Sender)
{
    Calculator_form_List_functions_memo_exibir_area->Text = "";
    Calculator_form_List_functions_memo_exibir_perimetro->Text = "";

    //Creating vect functions to stored the calculates functions
     char funcoes [4][50] =
     {
        "Calcular área retângulo",
        "Calcular perímetro retângulo",
        "Calcular área triângulo",
        "Calcular perímetro triângulo",
     };
    //Creating vect of the size of the functions list
    int vet [4];

    // Showing of the items of the functions list in the list box
    int i, x = 0;
    for ( i = 0; i < 4; i++ ) {
        Calculator_List_functions_list->Items->Add(funcoes[i]);
    }
            
}
//---------------------------------------------------------------------------

void __fastcall TCalc_form_functions_list::Calculator_List_functions_listClick(
      TObject *Sender)
{
    int Resultado_area_rect=0, Resultado_perimetro_rect=0, Resultado_area_triangle=0, Resultado_perimetro_triangle=0;
    

    String Resultado_perimetro_text, Resultado_area_text;
    Retangle Rectan;
    Trianglee Trianglee;

    try
    {

        int Altura = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_altura->Text.c_str());
        int Base = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_base->Text.c_str());

        Resultado_area_rect =  Rectan.Area(Base,Altura);
        Resultado_perimetro_rect = Rectan.Perimetro(Base,Altura);
        Resultado_area_triangle =  Trianglee.Area(Base,Altura);
        Resultado_perimetro_triangle = Trianglee.Perimetro(Base,Altura);
               
    }catch (Exception &exception)
    {
        cout << "Deu erro";
    }

    if(Calculator_List_functions_list->ItemIndex==0)
    {
        Calculator_form_List_functions_memo_exibir_area->Text = IntToStr(Resultado_area_rect);
        Calculator_form_List_functions_memo_exibir_perimetro->Text = "---" ;
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;

    }else if(Calculator_List_functions_list->ItemIndex==1)
    {
        Calculator_form_List_functions_memo_exibir_area->Text = "---" ;
        Calculator_form_List_functions_memo_exibir_perimetro->Text = IntToStr(Resultado_perimetro_rect);
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;

    }else if(Calculator_List_functions_list->ItemIndex==2)
    {
        Calculator_form_List_functions_memo_exibir_area->Text = IntToStr(Resultado_area_triangle);
        Calculator_form_List_functions_memo_exibir_perimetro->Text = "---" ;
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;
    }else
    {
        Calculator_form_List_functions_memo_exibir_area->Text = "---" ;
        Calculator_form_List_functions_memo_exibir_perimetro->Text = IntToStr(Resultado_perimetro_triangle);
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;
    }

}
//---------------------------------------------------------------------------

