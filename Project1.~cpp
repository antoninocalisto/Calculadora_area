//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Calculator_Form_call_functions_calculates);
USEFORM("Rect_form.cpp", Calculator_rect_form);
USEFORM("form_list_functions.cpp", Calc_form_functions_list);
USEFORM("home.cpp", Form3);
USEFORM("check_box_functions.cpp", Calc_form_check_box_functions_list);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
         Application->Initialize();
         Application->CreateForm(__classid(TCalculator_Form_call_functions_calculates), &Calculator_Form_call_functions_calculates);
         Application->CreateForm(__classid(TCalc_form_functions_list), &Calc_form_functions_list);
         Application->CreateForm(__classid(TCalculator_rect_form), &Calculator_rect_form);
         Application->CreateForm(__classid(TForm3), &Form3);
         Application->CreateForm(__classid(TCalc_form_check_box_functions_list), &Calc_form_check_box_functions_list);
         Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
