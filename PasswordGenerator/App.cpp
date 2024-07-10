#include "App.h"
#include <wx/wx.h>
#include "MainFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
    MainFrame* mainFrame = new MainFrame("Password Generator");
    mainFrame->SetSize(800, 300);
    mainFrame->Center();
    mainFrame->Show();

    return true;
}
