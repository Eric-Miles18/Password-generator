#pragma once
#include <wx/wx.h>

class MainFrame : public wxFrame
{
public:
	MainFrame(const wxString& title);
private:
	void Controls();
	void EventContorl();

	void OnButtonClicked(wxCommandEvent& event);

	wxPanel* panel;
	wxStaticText* appTitle;
	wxSpinCtrl* spin;
	wxButton* generateButton;
	wxTextCtrl* outputPassword;
};

