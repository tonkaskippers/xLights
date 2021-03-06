#include "ScheduleDialog.h"
#include "Schedule.h"

//(*InternalHeaders(ScheduleDialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(ScheduleDialog)
const long ScheduleDialog::ID_CHECKBOX11 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT15 = wxNewId();
const long ScheduleDialog::ID_TEXTCTRL3 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT1 = wxNewId();
const long ScheduleDialog::ID_DATEPICKERCTRL1 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT2 = wxNewId();
const long ScheduleDialog::ID_DATEPICKERCTRL2 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX1 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT3 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT4 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT5 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT6 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT7 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT8 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT9 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT10 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX8 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX7 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX6 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX5 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX4 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX3 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX2 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT12 = wxNewId();
const long ScheduleDialog::ID_TEXTCTRL2 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT11 = wxNewId();
const long ScheduleDialog::ID_TEXTCTRL1 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX9 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT13 = wxNewId();
const long ScheduleDialog::ID_SPINCTRL1 = wxNewId();
const long ScheduleDialog::ID_CHECKBOX10 = wxNewId();
const long ScheduleDialog::ID_STATICTEXT14 = wxNewId();
const long ScheduleDialog::ID_SPINCTRL2 = wxNewId();
const long ScheduleDialog::ID_BUTTON1 = wxNewId();
const long ScheduleDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ScheduleDialog,wxDialog)
	//(*EventTable(ScheduleDialog)
	//*)
END_EVENT_TABLE()

ScheduleDialog::ScheduleDialog(wxWindow* parent, Schedule* schedule, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    _schedule = schedule;

	//(*Initialize(ScheduleDialog)
	wxFlexGridSizer* FlexGridSizer3;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, _("Schedule Playlist"), wxDefaultPosition, wxDefaultSize, wxCAPTION|wxRESIZE_BORDER|wxMAXIMIZE_BOX, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Enabled = new wxCheckBox(this, ID_CHECKBOX11, _("Enabled"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX11"));
	CheckBox_Enabled->SetValue(false);
	FlexGridSizer1->Add(CheckBox_Enabled, 1, wxALL|wxEXPAND, 5);
	StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("Name:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	FlexGridSizer1->Add(StaticText15, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_Name = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer1->Add(TextCtrl_Name, 1, wxALL|wxEXPAND, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Start Date:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	DatePickerCtrl_Start = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	FlexGridSizer1->Add(DatePickerCtrl_Start, 1, wxALL|wxEXPAND, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("End Date:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	DatePickerCtrl_End = new wxDatePickerCtrl(this, ID_DATEPICKERCTRL2, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL2"));
	FlexGridSizer1->Add(DatePickerCtrl_End, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_EveryYear = new wxCheckBox(this, ID_CHECKBOX1, _("Every year"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox_EveryYear->SetValue(false);
	FlexGridSizer1->Add(CheckBox_EveryYear, 1, wxALL|wxEXPAND, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Days of Week:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer2 = new wxFlexGridSizer(2, 7, 0, 0);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("M"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Tu"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("W"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer2->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Th"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer2->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("F"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	FlexGridSizer2->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Sa"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	FlexGridSizer2->Add(StaticText9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("Su"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	FlexGridSizer2->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Mon = new wxCheckBox(this, ID_CHECKBOX8, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX8"));
	CheckBox_Mon->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Mon, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Tue = new wxCheckBox(this, ID_CHECKBOX7, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
	CheckBox_Tue->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Tue, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Wed = new wxCheckBox(this, ID_CHECKBOX6, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	CheckBox_Wed->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Wed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Thu = new wxCheckBox(this, ID_CHECKBOX5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	CheckBox_Thu->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Thu, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Fri = new wxCheckBox(this, ID_CHECKBOX4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	CheckBox_Fri->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Fri, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Sat = new wxCheckBox(this, ID_CHECKBOX3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
	CheckBox_Sat->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Sat, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Sun = new wxCheckBox(this, ID_CHECKBOX2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBox_Sun->SetValue(false);
	FlexGridSizer2->Add(CheckBox_Sun, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("On Time:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	FlexGridSizer1->Add(StaticText12, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_OnTime = new wxTextCtrl(this, ID_TEXTCTRL2, _("19:00"), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer1->Add(TextCtrl_OnTime, 1, wxALL|wxEXPAND, 5);
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("Off Time:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	FlexGridSizer1->Add(StaticText11, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_OffTime = new wxTextCtrl(this, ID_TEXTCTRL1, _("22:00"), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer1->Add(TextCtrl_OffTime, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Loop = new wxCheckBox(this, ID_CHECKBOX9, _("Loop"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX9"));
	CheckBox_Loop->SetValue(false);
	FlexGridSizer1->Add(CheckBox_Loop, 1, wxALL|wxEXPAND, 5);
	StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("Max Loops:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	FlexGridSizer1->Add(StaticText13, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_MaxLoops = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrl_MaxLoops->SetValue(_T("0"));
	FlexGridSizer1->Add(SpinCtrl_MaxLoops, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_Shuffle = new wxCheckBox(this, ID_CHECKBOX10, _("Shuffle"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX10"));
	CheckBox_Shuffle->SetValue(false);
	FlexGridSizer1->Add(CheckBox_Shuffle, 1, wxALL|wxEXPAND, 5);
	StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("Priority:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	FlexGridSizer1->Add(StaticText14, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Priority = new wxSpinCtrl(this, ID_SPINCTRL2, _T("5"), wxDefaultPosition, wxDefaultSize, 0, 1, 10, 5, _T("ID_SPINCTRL2"));
	SpinCtrl_Priority->SetValue(_T("5"));
	FlexGridSizer1->Add(SpinCtrl_Priority, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
	Button_Ok = new wxButton(this, ID_BUTTON1, _("Ok"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button_Ok->SetDefault();
	FlexGridSizer3->Add(Button_Ok, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button_Cancel = new wxButton(this, ID_BUTTON2, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer3->Add(Button_Cancel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ScheduleDialog::OnTextCtrl_NameText);
	Connect(ID_DATEPICKERCTRL1,wxEVT_DATE_CHANGED,(wxObjectEventFunction)&ScheduleDialog::OnDatePickerCtrl_StartChanged);
	Connect(ID_DATEPICKERCTRL2,wxEVT_DATE_CHANGED,(wxObjectEventFunction)&ScheduleDialog::OnDatePickerCtrl_EndChanged);
	Connect(ID_CHECKBOX8,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_CHECKBOX7,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_CHECKBOX6,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_CHECKBOX5,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_CHECKBOX4,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_CHECKBOX3,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_CHECKBOX2,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnCheckBox_DOWClick);
	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ScheduleDialog::OnTextCtrl_OnTimeText);
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&ScheduleDialog::OnTextCtrl_OffTimeText);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnButton_OkClick);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ScheduleDialog::OnButton_CancelClick);
	//*)

    TextCtrl_Name->SetValue(schedule->GetName());
    TextCtrl_OnTime->SetValue(schedule->GetStartTimeAsString());
    TextCtrl_OffTime->SetValue(schedule->GetEndTimeAsString());
    SpinCtrl_Priority->SetValue(schedule->GetPriority());
    SpinCtrl_MaxLoops->SetValue(schedule->GetLoops());
    DatePickerCtrl_Start->SetValue(schedule->GetStartDate());
    DatePickerCtrl_End->SetValue(schedule->GetEndDate());
    CheckBox_EveryYear->SetValue(schedule->GetEveryYear());
    CheckBox_Loop->SetValue(schedule->GetLoop());
    CheckBox_Shuffle->SetValue(schedule->GetRandom());
    CheckBox_Mon->SetValue(schedule->IsOnDOW("Mon"));
    CheckBox_Tue->SetValue(schedule->IsOnDOW("Tue"));
    CheckBox_Wed->SetValue(schedule->IsOnDOW("Wed"));
    CheckBox_Thu->SetValue(schedule->IsOnDOW("Thu"));
    CheckBox_Fri->SetValue(schedule->IsOnDOW("Fri"));
    CheckBox_Sat->SetValue(schedule->IsOnDOW("Sat"));
    CheckBox_Sun->SetValue(schedule->IsOnDOW("Sun"));
    CheckBox_Enabled->SetValue(schedule->GetEnabled());

    SetEscapeId(Button_Cancel->GetId());

    ValidateWindow();
}

ScheduleDialog::~ScheduleDialog()
{
	//(*Destroy(ScheduleDialog)
	//*)
    _schedule->SetName(TextCtrl_Name->GetValue().ToStdString());
    _schedule->SetStartTime(TextCtrl_OnTime->GetValue().ToStdString());
    _schedule->SetEndTime(TextCtrl_OffTime->GetValue().ToStdString());
    _schedule->SetPriority(SpinCtrl_Priority->GetValue());
    _schedule->SetLoops(SpinCtrl_MaxLoops->GetValue());
    _schedule->SetStartDate(DatePickerCtrl_Start->GetValue());
    _schedule->SetEndDate(DatePickerCtrl_End->GetValue());
    _schedule->SetEveryYear(CheckBox_EveryYear->GetValue());
    _schedule->SetLoop(CheckBox_Loop->GetValue());
    _schedule->SetRandom(CheckBox_Shuffle->GetValue());
    _schedule->SetDOW(CheckBox_Mon->GetValue(),
        CheckBox_Tue->GetValue(),
        CheckBox_Wed->GetValue(),
        CheckBox_Thu->GetValue(),
        CheckBox_Fri->GetValue(),
        CheckBox_Sat->GetValue(),
        CheckBox_Sun->GetValue());
    _schedule->SetEnabled(CheckBox_Enabled->GetValue());
}

void ScheduleDialog::ValidateWindow()
{
    if (TextCtrl_Name->GetValue() != "" &&
        DatePickerCtrl_Start->GetValue() <= DatePickerCtrl_End->GetValue() &&
        (CheckBox_Mon->GetValue() ||
            CheckBox_Tue->GetValue() ||
            CheckBox_Wed->GetValue() ||
            CheckBox_Thu->GetValue() ||
            CheckBox_Fri->GetValue() ||
            CheckBox_Sat->GetValue() ||
            CheckBox_Sun->GetValue()
            ))
    {
        Button_Ok->Enable(true);
    }
    else
    {
        Button_Ok->Enable(false);
    }
}


void ScheduleDialog::OnDatePickerCtrl_StartChanged(wxDateEvent& event)
{
    ValidateWindow();
}

void ScheduleDialog::OnDatePickerCtrl_EndChanged(wxDateEvent& event)
{
    ValidateWindow();
}

void ScheduleDialog::OnTextCtrl_OnTimeText(wxCommandEvent& event)
{
    ValidateWindow();
}

void ScheduleDialog::OnTextCtrl_OffTimeText(wxCommandEvent& event)
{
    ValidateWindow();
}

void ScheduleDialog::OnButton_OkClick(wxCommandEvent& event)
{
    EndDialog(wxID_OK);
}

void ScheduleDialog::OnButton_CancelClick(wxCommandEvent& event)
{
    EndDialog(wxID_CANCEL);
}

void ScheduleDialog::OnCheckBox_DOWClick(wxCommandEvent& event)
{
    ValidateWindow();
}

void ScheduleDialog::OnTextCtrl_NameText(wxCommandEvent& event)
{
    ValidateWindow();
}
