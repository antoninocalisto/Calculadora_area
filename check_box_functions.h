//---------------------------------------------------------------------------

#ifndef check_box_functionsH
#define check_box_functionsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TCalc_form_check_box_functions_list : public TForm
{
__published:	// IDE-managed Components
    TButton *Calculator_form_List_function_Button_limpar;
    TPanel *Panel1;
    TBevel *Bevel1;
    TBevel *Bevel2;
    TBevel *Bevel3;
    TBevel *Bevel4;
    TLabel *Label1;
    TLabel *Label2;
    TStaticText *StaticText1;
    TMemo *Calculator_form_List_functions_memo_exibir_area;
    TMemo *Calculator_form_List_functions_memo_exibir_perimetro;
    TPanel *Panel2;
    TCheckBox *cb_peri_rect;
    TCheckBox *cb_area_rect;
    TCheckBox *cb_area_trian;
    TCheckBox *cb_peri_trian;
    void __fastcall cb_area_rectClick(TObject *Sender);
    void __fastcall cb_peri_rectClick(TObject *Sender);
    void __fastcall cb_area_trianClick(TObject *Sender);
    void __fastcall cb_peri_trianClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TCalc_form_check_box_functions_list(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCalc_form_check_box_functions_list *Calc_form_check_box_functions_list;
//---------------------------------------------------------------------------
#endif
