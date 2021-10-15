//---------------------------------------------------------------------------

#ifndef List_box_functions_formH
#define List_box_functions_formH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TCalculator_form_List_functions_list : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TBevel *Bevel1;
    TBevel *Bevel2;
    TBevel *Bevel3;
    TBevel *Bevel4;
    TStaticText *StaticText1;
    TListBox *Calculator_List_functions_list;
    TLabel *Label1;
    TLabel *Label2;
    TMemo *Calculator_form_List_functions_memo_exibir_area;
    TMemo *Calculator_form_List_functions_memo_exibir_perimetro;
    TButton *Calculator_form_List_function_Button_limpar;
    void __fastcall Calculator_form_List_function_Button_limparClick(TObject *Sender);
    void __fastcall Calculator_List_functions_listClick(
          TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TCalculator_form_List_functions_list(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCalculator_form_List_functions_list *Calculator_form_List_functions_list;
//---------------------------------------------------------------------------
#endif
