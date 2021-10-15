//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "List_box_functions_form.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCalculator_form_List_functions_list *Calculator_form_List_functions_list;

//---------------------------------------------------------------------------
__fastcall TCalculator_form_List_functions_list::TCalculator_form_List_functions_list(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TCalculator_form_List_functions_list::Calculator_form_List_function_Button_limparClick(TObject *Sender)
{
     //Calculator_form_List_function_Button_limpar
      Calculator_form_List_functions_memo_exibir_area->Clear();
      Calculator_form_List_functions_memo_exibir_perimetro->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TCalculator_form_List_functions_list::Calculator_List_functions_listClick(
      TObject *Sender)
{
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

