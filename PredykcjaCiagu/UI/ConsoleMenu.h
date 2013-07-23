#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "..\Interfaces\IPrintable.h"

/** Klasa odpowiada za reprezentacje menu glownego programu */
class ConsoleMenu : public IPrintable
{
private:

	/** Tablica zawieraj�ca opcje dost�pne w menu programu */
	std::vector<std::string> menuOptions;

public:

	/** Bezargumentowy konstruktor klasy ConsoleMenu */
	ConsoleMenu(void);

	/** Wirtualny destruktor klasy ConsoleMenu */
	virtual ~ConsoleMenu(void);

	/** Implementacja metody z interfejsu IPrintable 
	@param std::string message Wiadomo��, kt�ra ma zosta� wy�wietlona
	*/
	virtual void Print(std::string message);

	/** Metoda wy�wietla za pomoc� metody print z interfejsu IPrintable menu programu */
	void PrintMenu();

	/** Getter dla pola menuOptions
	@return Rozmiar tablicy menuOptions
	*/
	int GetSizeOfMenuOptions()
	{
		return menuOptions.size();
	}
};

