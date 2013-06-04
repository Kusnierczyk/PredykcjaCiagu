#include "Controller.h"


Controller::Controller(void)
{
	this->gui = new GUI;
	this->consoleMenuListener = new ConsoleMenuListener;
}


Controller::~Controller(void)
{
	delete this->gui;
}

void Controller::Run()
{
	gui->PrintApplicationMenu();
	consoleMenuListener->ListenForKey(gui->GetNumberOfMenuOptions());
}
