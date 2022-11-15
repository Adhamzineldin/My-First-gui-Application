#include "KenamaticsForm.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

   MyFirstguiApplication::KenamaticsForm form;

    Application::Run(% form);

}

