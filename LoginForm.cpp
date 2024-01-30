#include "LoginForm.h"
#include <Windows.h>
using namespace SecondGUI; // This is your project name

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew LoginForm());
	return 0;

}
