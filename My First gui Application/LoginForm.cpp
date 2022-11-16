#include "LoginForm.h"



using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void LoginForm(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    MyFirstguiApplication::LoginForm form;

    Application::Run(% form);

}

