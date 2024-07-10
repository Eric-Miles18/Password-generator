#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>
#include "Generator.h"

MainFrame::MainFrame(const wxString& title) : wxFrame(NULL, wxID_ANY, title)
{
	Controls();
	EventContorl();
}

void MainFrame::Controls()
{
	wxFont titleFont(wxFontInfo(wxSize(0, 36)).Bold());
	wxFont mainFont(wxFontInfo(wxSize(0, 24)));

	wxPanel* panel = new wxPanel(this);
	panel->SetFont(mainFont);
	
	appTitle = new wxStaticText(panel, wxID_ANY, "Password Generator", wxPoint(0, 22), wxSize(800, -1), wxALIGN_CENTER_HORIZONTAL);
	appTitle->SetFont(titleFont);

	spin = new wxSpinCtrl(panel, wxID_ANY, wxEmptyString, wxPoint(300, 80), wxSize(60, -1), wxSP_ARROW_KEYS, 8, 32, 8);
	generateButton = new wxButton(panel, wxID_ANY, "Generate", wxPoint(360, 80));

	outputPassword = new wxTextCtrl(panel, wxID_ANY, "The Password will be here", wxPoint(170, 150), wxSize(460, -1));
}

void MainFrame::EventContorl()
{
	generateButton->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
}


void MainFrame::OnButtonClicked(wxCommandEvent& event)
{
	int leng = spin->GetValue();
	std::string generated;

	GeneratePassword(leng, generated);
	outputPassword->SetValue(generated);
}
