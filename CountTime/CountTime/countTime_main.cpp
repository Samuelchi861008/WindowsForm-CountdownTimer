#include "countTime.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);

	CountTime::MyForm Form;
	Application::Run(%Form);
}
