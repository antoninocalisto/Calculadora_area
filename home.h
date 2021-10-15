//---------------------------------------------------------------------------

#ifndef homeH
#define homeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TBevel *Bevel1;
    TBevel *Bevel2;
    TBevel *Bevel3;
    TBevel *Bevel4;
    TEdit *Calculator_TEdit_base;
    TEdit *Calculator_TEdit_altura;
    TButton *Calculator_Button1_base;
    TButton *Calculator_TButton_altura;
    TMemo *Calculator_Button_memo_resultado;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TStaticText *StaticText1;
    TButton *Button_list_functions;
    TComboBox *Calculator_combobox_calc_area;
private:	// User declarations
public:		// User declarations
    __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
