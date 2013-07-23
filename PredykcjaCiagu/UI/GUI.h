#pragma once
#include <string>
#include "..\UI\ConsoleMenu.h"

/** Klasa odpowiada za interfejs aplikacji */
class GUI
{
private:

	/** Prywatny wska�nik do obiektu klasy ConsoleMenu */
	ConsoleMenu* consoleMenu;

	/** Ilo�� opcji dost�pnych w menu g��wnym programu */
	int numberOfMenuOptions;

public:

	/** Bezargumentowy konstruktor klasy GUI */
	GUI(void);

	/** Wirtualny destruktor klasy GUI */
	virtual ~GUI(void);

	/** Statyczna metoda wywo�uj�ca polecenie systemowe czyszcz�ce konsol� */
	static void ClearScreen();

	/** Statyczna metoda wywo�uj�ca polecenie systemowe wstrzymuj�ce program */
	static void PauseProgram();

	/** Metoda wy�wietla menu g��wne programu */
	void PrintApplicationMenu();

	/** Metoda wy�wietla wiadomo�� na konsoli za pomoc� obiektu ConsoleMenu */
	void PrintMessage(std::string message);

	/** Getter dla pola numberOfMenuOptions
	@return Ilo�� opcji dost�pnych w menu g��wnym programu
	*/
	int GetNumberOfMenuOptions()
	{
		return numberOfMenuOptions;
	}
};

