#include "PlayListItemAllOffPanel.h"
#include "PlayListItemAllOff.h"
#include "../xScheduleMain.h"
#include "../ScheduleManager.h"

//(*InternalHeaders(PlayListItemAllOffPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(PlayListItemAllOffPanel)
const long PlayListItemAllOffPanel::ID_STATICTEXT1 = wxNewId();
const long PlayListItemAllOffPanel::ID_TEXTCTRL1 = wxNewId();
const long PlayListItemAllOffPanel::ID_STATICTEXT3 = wxNewId();
const long PlayListItemAllOffPanel::ID_SPINCTRL1 = wxNewId();
const long PlayListItemAllOffPanel::ID_CHECKBOX1 = wxNewId();
const long PlayListItemAllOffPanel::ID_STATICTEXT6 = wxNewId();
const long PlayListItemAllOffPanel::ID_SPINCTRL3 = wxNewId();
const long PlayListItemAllOffPanel::ID_STATICTEXT7 = wxNewId();
const long PlayListItemAllOffPanel::ID_SPINCTRL4 = wxNewId();
const long PlayListItemAllOffPanel::ID_STATICTEXT4 = wxNewId();
const long PlayListItemAllOffPanel::ID_CHOICE1 = wxNewId();
const long PlayListItemAllOffPanel::ID_STATICTEXT5 = wxNewId();
const long PlayListItemAllOffPanel::ID_SPINCTRL2 = wxNewId();
const long PlayListItemAllOffPanel::ID_STATICTEXT2 = wxNewId();
const long PlayListItemAllOffPanel::ID_TEXTCTRL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(PlayListItemAllOffPanel,wxPanel)
	//(*EventTable(PlayListItemAllOffPanel)
	//*)
END_EVENT_TABLE()

PlayListItemAllOffPanel::PlayListItemAllOffPanel(wxWindow* parent, PlayListItemAllOff* alloff, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    _alloff = alloff;

	//(*Initialize(PlayListItemAllOffPanel)
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	FlexGridSizer1->AddGrowableCol(1);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Duration:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_AllOffDuration = new wxTextCtrl(this, ID_TEXTCTRL1, _("0.050"), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	FlexGridSizer1->Add(TextCtrl_AllOffDuration, 1, wxALL|wxEXPAND, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("Value:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_AllSet = new wxSpinCtrl(this, ID_SPINCTRL1, _T("0"), wxDefaultPosition, wxDefaultSize, 0, 0, 255, 0, _T("ID_SPINCTRL1"));
	SpinCtrl_AllSet->SetValue(_T("0"));
	FlexGridSizer1->Add(SpinCtrl_AllSet, 1, wxALL|wxEXPAND, 5);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox_LimitChannels = new wxCheckBox(this, ID_CHECKBOX1, _("Limit Channels"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox_LimitChannels->SetValue(false);
	FlexGridSizer1->Add(CheckBox_LimitChannels, 1, wxALL|wxEXPAND, 5);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Start Channel"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_StartChannel = new wxSpinCtrl(this, ID_SPINCTRL3, _T("1"), wxDefaultPosition, wxDefaultSize, 0, 1, 100, 1, _T("ID_SPINCTRL3"));
	SpinCtrl_StartChannel->SetValue(_T("1"));
	FlexGridSizer1->Add(SpinCtrl_StartChannel, 1, wxALL|wxEXPAND, 5);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Channels"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	FlexGridSizer1->Add(StaticText7, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Channels = new wxSpinCtrl(this, ID_SPINCTRL4, _T("1"), wxDefaultPosition, wxDefaultSize, 0, 0, 100, 1, _T("ID_SPINCTRL4"));
	SpinCtrl_Channels->SetValue(_T("1"));
	FlexGridSizer1->Add(SpinCtrl_Channels, 1, wxALL|wxEXPAND, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Blend Mode:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	Choice_BlendMode = new wxChoice(this, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	FlexGridSizer1->Add(Choice_BlendMode, 1, wxALL|wxEXPAND, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Priority:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer1->Add(StaticText5, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	SpinCtrl_Priority = new wxSpinCtrl(this, ID_SPINCTRL2, _T("5"), wxDefaultPosition, wxDefaultSize, 0, 1, 10, 5, _T("ID_SPINCTRL2"));
	SpinCtrl_Priority->SetValue(_T("5"));
	FlexGridSizer1->Add(SpinCtrl_Priority, 1, wxALL|wxEXPAND, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Delay:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_Delay = new wxTextCtrl(this, ID_TEXTCTRL2, _("0.000"), wxDefaultPosition, wxDefaultSize, wxTE_RIGHT, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	FlexGridSizer1->Add(TextCtrl_Delay, 1, wxALL|wxEXPAND, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&PlayListItemAllOffPanel::OnTextCtrl_AllOffDurationText);
	Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&PlayListItemAllOffPanel::OnCheckBox_LimitChannelsClick);
	//*)

    PopulateBlendModes(Choice_BlendMode);
    Choice_BlendMode->SetSelection(0);

    TextCtrl_AllOffDuration->SetValue(wxString::Format(wxT("%.3f"), (float)alloff->GetDuration() / 1000.0));
    TextCtrl_Delay->SetValue(wxString::Format(wxT("%.3f"), (float)alloff->GetDelay() / 1000.0));
    SpinCtrl_AllSet->SetValue(alloff->GetValue());
    SpinCtrl_Priority->SetValue(alloff->GetPriority());
    Choice_BlendMode->SetSelection(alloff->GetBlendMode());

    long channels = xScheduleFrame::GetScheduleManager()->GetTotalChannels();
    SpinCtrl_StartChannel->SetRange(1, channels);
    SpinCtrl_Channels->SetRange(1, channels);

    SpinCtrl_StartChannel->SetValue(alloff->GetStartChannel());
    int chs = alloff->GetChannels();
    if (chs == 0)
    {
        CheckBox_LimitChannels->SetValue(false);
    }
    else
    {
        CheckBox_LimitChannels->SetValue(true);
        SpinCtrl_Channels->SetValue(alloff->GetChannels());
    }

    ValidateWindow();
}

PlayListItemAllOffPanel::~PlayListItemAllOffPanel()
{
	//(*Destroy(PlayListItemAllOffPanel)
	//*)
    _alloff->SetDuration(wxAtof(TextCtrl_AllOffDuration->GetValue()) * 1000);
    _alloff->SetValue(SpinCtrl_AllSet->GetValue());
    _alloff->SetDelay(wxAtof(TextCtrl_Delay->GetValue()) * 1000);
    _alloff->SetBlendMode(Choice_BlendMode->GetStringSelection().ToStdString());
    _alloff->SetPriority(SpinCtrl_Priority->GetValue());
    if (CheckBox_LimitChannels->GetValue())
    {
        _alloff->SetStartChannel(SpinCtrl_StartChannel->GetValue());
        _alloff->SetChannels(SpinCtrl_Channels->GetValue());
    }
    else
    {
        _alloff->SetStartChannel(1);
        _alloff->SetChannels(0);
    }
}

void PlayListItemAllOffPanel::OnTextCtrl_AllOffDurationText(wxCommandEvent& event)
{
}

void PlayListItemAllOffPanel::ValidateWindow()
{
    if (CheckBox_LimitChannels->GetValue())
    {
        SpinCtrl_StartChannel->Enable();
        SpinCtrl_Channels->Enable();
    }
    else
    {
        SpinCtrl_StartChannel->Enable(false);
        SpinCtrl_Channels->Enable(false);
    }
}
void PlayListItemAllOffPanel::OnCheckBox_LimitChannelsClick(wxCommandEvent& event)
{
    ValidateWindow();
}
