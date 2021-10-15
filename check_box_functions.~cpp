//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "check_box_functions.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "rect.h"
#include "triangle.h"
#include <iostream.h>
#include "Unit1.h"
TCalc_form_check_box_functions_list *Calc_form_check_box_functions_list;
//---------------------------------------------------------------------------
__fastcall TCalc_form_check_box_functions_list::TCalc_form_check_box_functions_list(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCalc_form_check_box_functions_list::cb_area_rectClick(
      TObject *Sender)
{
    if(cb_area_rect->Checked==True)
    {
        cb_area_trian->Enabled=False;
        cb_peri_rect->Enabled=False;
        cb_peri_trian->Enabled=False;
        int Resultado_area_rect=0;

        Retangle Rectan;

        try
        {

            int Altura = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_altura->Text.c_str());
            int Base = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_base->Text.c_str());

            Resultado_area_rect =  Rectan.Area(Base,Altura);

        }catch (Exception &exception)
        {
            cout << "Deu erro";
        }

        Calculator_form_List_functions_memo_exibir_area->Text = IntToStr(Resultado_area_rect);
        Calculator_form_List_functions_memo_exibir_perimetro->Text = "---" ;
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;


    }else{
      cb_area_trian->Enabled=True;
      cb_peri_rect->Enabled=True;
      cb_peri_trian->Enabled=True;
      cb_area_rect->Enabled=True;
      Calculator_form_List_functions_memo_exibir_area->Text = "";
      Calculator_form_List_functions_memo_exibir_perimetro->Text = "" ;
      Calculator_form_List_functions_memo_exibir_area->Enabled = False;
      Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;
    }
    
}
//---------------------------------------------------------------------------
void __fastcall TCalc_form_check_box_functions_list::cb_peri_rectClick(
      TObject *Sender)
{
    if(cb_peri_rect->Checked==True)
    {
        cb_area_rect->Enabled=False;
        //cb_peri_rect->Enabled=False;
        cb_peri_trian->Enabled=False;
        cb_area_trian->Enabled=False;

        int Resultado_perimetro_rect=0;

        Retangle Rectan;

        try
        {
            int Altura = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_altura->Text.c_str());
            int Base = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_base->Text.c_str());

            Resultado_perimetro_rect = Rectan.Perimetro(Base,Altura);
            
        }catch (Exception &exception)
        {
            cout << "Deu erro";
        }

        Calculator_form_List_functions_memo_exibir_area->Text = "---"  ;
        Calculator_form_List_functions_memo_exibir_perimetro->Text = IntToStr(Resultado_perimetro_rect);
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;

    }else{
      cb_area_trian->Enabled=True;
      cb_peri_rect->Enabled=True;
      cb_peri_trian->Enabled=True;
      cb_area_rect->Enabled=True;
      Calculator_form_List_functions_memo_exibir_area->Text = "";
      Calculator_form_List_functions_memo_exibir_perimetro->Text = "" ;
      Calculator_form_List_functions_memo_exibir_area->Enabled = False;
      Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;
    }    
}
//---------------------------------------------------------------------------
void __fastcall TCalc_form_check_box_functions_list::cb_area_trianClick(
      TObject *Sender)
{
    if(cb_area_trian->Checked==True)
    {
        //cb_area_trian->Enabled=False;
        cb_peri_rect->Enabled=False;
        cb_peri_trian->Enabled=False;
        cb_area_rect->Enabled=False;

        int Resultado_area_triangle=0;

        Trianglee Trianglee;

        try
        {
            int Altura = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_altura->Text.c_str());
            int Base = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_base->Text.c_str());

            Resultado_area_triangle =  Trianglee.Area(Base,Altura);

        }catch (Exception &exception)
        {
            cout << "Deu erro";
        }

        Calculator_form_List_functions_memo_exibir_area->Text = IntToStr(Resultado_area_triangle);
        Calculator_form_List_functions_memo_exibir_perimetro->Text = "---" ;
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;


    }else{
      cb_area_trian->Enabled=True;
      cb_peri_rect->Enabled=True;
      cb_peri_trian->Enabled=True;
      cb_area_rect->Enabled=True;
      Calculator_form_List_functions_memo_exibir_area->Text = "";
      Calculator_form_List_functions_memo_exibir_perimetro->Text = "" ;
      Calculator_form_List_functions_memo_exibir_area->Enabled = False;
      Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;
    }    
}
//---------------------------------------------------------------------------
void __fastcall TCalc_form_check_box_functions_list::cb_peri_trianClick(
      TObject *Sender)
{
    if(cb_peri_trian->Checked==True)
    {
        cb_area_trian->Enabled=False;
        cb_peri_rect->Enabled=False;
        //cb_peri_trian->Enabled=False;
        cb_area_rect->Enabled=False;
        
        int Resultado_perimetro_triangle=0;

        Trianglee Trianglee;

        try
        {

            int Altura = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_altura->Text.c_str());
            int Base = std::atoi(Calculator_Form_call_functions_calculates->Calculator_TEdit_base->Text.c_str());

            Resultado_perimetro_triangle = Trianglee.Perimetro(Base,Altura);

        }catch (Exception &exception)
        {
            cout << "Deu erro";
        }

        Calculator_form_List_functions_memo_exibir_area->Text = "---";
        Calculator_form_List_functions_memo_exibir_perimetro->Text = IntToStr(Resultado_perimetro_triangle);
        Calculator_form_List_functions_memo_exibir_area->Enabled = False;
        Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;


    }else{
      cb_area_trian->Enabled=True;
      cb_peri_rect->Enabled=True;
      cb_peri_trian->Enabled=True;
      cb_area_rect->Enabled=True;
      Calculator_form_List_functions_memo_exibir_area->Text = "";
      Calculator_form_List_functions_memo_exibir_perimetro->Text = "" ;
      Calculator_form_List_functions_memo_exibir_area->Enabled = False;
      Calculator_form_List_functions_memo_exibir_perimetro->Enabled = False;
    }    
}
//---------------------------------------------------------------------------
void __fastcall TCalc_form_check_box_functions_list::FormCreate(
      TObject *Sender)
{
    Calculator_form_List_functions_memo_exibir_area->Text = "";
    Calculator_form_List_functions_memo_exibir_perimetro->Text = "";    
}
//---------------------------------------------------------------------------
