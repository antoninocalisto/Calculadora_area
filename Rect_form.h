//---------------------------------------------------------------------------

#ifndef Rect_formH
#define Rect_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TCalculator_rect_form : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TBevel *Bevel1;
    TBevel *Bevel2;
    TBevel *Bevel3;
    TBevel *Bevel4;
    TButton *Calculator_Button1_base;
    TButton *Calculator_TButton_altura;
    TButton *Calculator_Button_calc_area;
    TButton *Calculator_Button_calc_perimetro;
    TMemo *Calculator_Button_memo_resultado;
    TStaticText *StaticText1;
    TButton *Calculator_Rect_form_button_value_base;
    TButton *Calculator_Rect_form_button_value_altura;
private:	// User declarations
public:		// User declarations
    __fastcall TCalculator_rect_form(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCalculator_rect_form *Calculator_rect_form;
//---------------------------------------------------------------------------
#endif
