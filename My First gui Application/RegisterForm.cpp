#include "RegisterForm.h"
#include <fstream>

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void RegisterForm(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    MyFirstguiApplication::RegisterForm form;

    Application::Run(% form);

}