#pragma once
#include <sstream>
#include "..\UI\GUI.h"
#include "..\Logic\ConsoleMenuListener.h"
#include "..\Logic\NetworkManager.h"

/** Klasa odpowiada za sterowanie przep�ywem dzia�ania programu */
class Controller
{
private:

	/** Prywatny wska�nik do obiektu klasy GUI */
	GUI* gui;

	/** Prywatny wska�nik do obiektu klasy ConsoleMenuListener */
	ConsoleMenuListener* consoleMenuListener;

	/** Prywatny wska�nik do obiektu klasy NetworkManager */
	NetworkManager* network;

public:
	/** Bezargumentowy konstruktor klasy Controller */
	Controller(void);

	/** Destruktor klasy Controller */
	~Controller(void);

	/** Metoda odpowiada za p�tl� g��wn� programu */
	void Run();
};

