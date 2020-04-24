#include "MainWindow.h"
#include "Kerdes.h"
#include "Jatek.h"
#include <iostream>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LegyenOnIsMilliomos::MainWindow form;
	Application::Run(%form);


	
	

	
	
}