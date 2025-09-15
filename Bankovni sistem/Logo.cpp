#include "Logo.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Bankovnisistem::Logo form;
    Application::Run(% form);
}

