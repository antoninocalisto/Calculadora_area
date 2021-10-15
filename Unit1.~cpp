//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Trianglee.h"
#include "check_box_functions.h"
#include "form_list_functions.h"
#include <iostream.h>
#include <string>
#include "Unit1.h"
#include <sstream>
#include <iomanip>
#include <locale>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TCalculator_Form_call_functions_calculates *Calculator_Form_call_functions_calculates;

//---------------------------------------------------------------------------
__fastcall TCalculator_Form_call_functions_calculates::TCalculator_Form_call_functions_calculates(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TCalculator_Form_call_functions_calculates::Calculator_Button_calc_areaClick(TObject *Sender)
{
    
    int Base = std::atoi(Calculator_TEdit_base->Text.c_str());

    int Altura = std::atoi(Calculator_TEdit_altura->Text.c_str());
    Retangle re;
    int resultado = re.Area(Base,Altura);
    Calculator_Button_memo_resultado->Text = resultado;
    
}
//---------------------------------------------------------------------------

void __fastcall TCalculator_Form_call_functions_calculates::Calculator_Button_calc_perimetroClick(
      TObject *Sender)
{
    int resultado;
     try
        {
           int Altura = std::atoi(Calculator_TEdit_altura->Text.c_str());
           int Base = std::atoi(Calculator_TEdit_base->Text.c_str());
           Retangle re;
           resultado = re.Perimetro(Base,Altura);
        }
        catch (Exception &exception)
        {
         cout << "Deu erro";
        }
    Calculator_Button_memo_resultado->Text = resultado;
}
//---------------------------------------------------------------------------


void __fastcall TCalculator_Form_call_functions_calculates::FormCreate(TObject *Sender)
{
    Calculator_Button_memo_resultado->Text = "";
    
}
//---------------------------------------------------------------------------






void __fastcall TCalculator_Form_call_functions_calculates::Calculator_combobox_calc_areaChange(
      TObject *Sender)
{
    if(Calculator_combobox_calc_area->ItemIndex==0) //retangulo
    {
            int Resultado_area=0, Resultado_perimetro=0;
            string Teste;

            String Resultado_perimetro_text, Resultado_area_text;
            Retangle Rectan;

            try
            {
                int Altura = std::atoi(Calculator_TEdit_altura->Text.c_str());
                int Base = std::atoi(Calculator_TEdit_base->Text.c_str());

                Resultado_perimetro = Rectan.Perimetro(Base,Altura);
                Resultado_area =  Rectan.Area(Base,Altura);
               
            }catch (Exception &exception)
            {
                cout << "Deu erro";
            }
           
    
    Calculator_Button_memo_resultado->Text = "Area do Retângulo= " + IntToStr(Resultado_area);
    Calculator_Button_memo_resultado->Lines->Add("Perimetro do retângulo = " + IntToStr(Resultado_perimetro));
    //ShowMessage(Resultado_perimetro);

    }else if(Calculator_combobox_calc_area->ItemIndex==1) //triangulo
    {
            int Resultado_area=0, Resultado_perimetro=0;
            string Teste;

            String Resultado_perimetro_text, Resultado_area_text;

            try
            {
                int Altura = std::atoi(Calculator_TEdit_altura->Text.c_str());
                int Base = std::atoi(Calculator_TEdit_base->Text.c_str());
                Trianglee Trian;
                Resultado_perimetro = Trian.Perimetro(Base,Altura);
                Resultado_area =  Trian.Area(Base,Altura);
            }catch (Exception &exception)
            {
                cout << "Deu erro";
            }

    
            Calculator_Button_memo_resultado->Text = "Area do triângulo = " + IntToStr(Resultado_area);
            Calculator_Button_memo_resultado->Lines->Add("Perimetro do triângulo = " + IntToStr(Resultado_perimetro));
            //ShowMessage(Resultado_perimetro);

    }
}
//---------------------------------------------------------------------------

void __fastcall TCalculator_Form_call_functions_calculates::Button_list_functionsClick(
      TObject *Sender)
{
    // This button server to show modal, but disable the previous
   Calc_form_functions_list->ShowModal();

   //These function server to show modal, but not disable the previous
   //Calculator_rect_form->Show();

    
}

void __fastcall TCalculator_Form_call_functions_calculates::calc_button_cb_list_functionsClick(
      TObject *Sender)
{
     // This button server to show modal, but disable the previous
   Calc_form_check_box_functions_list->ShowModal();

   //These function server to show modal, but not disable the previous
   //Calculator_rect_form->Show();

        
}
//---------------------------------------------------------------------------

