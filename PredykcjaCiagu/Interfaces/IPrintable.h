#pragma once
#include <string>

/** Interfejs umo�liwiaj�cy wy�wietlanie danych na ekranie */
class IPrintable
{
public:
	IPrintable(void);

	/** Wirtualny destruktor interfejsu IPrintable */
	virtual ~IPrintable(void);
	
	/** 
	Metoda czysto wirtualna za pomoc� kt�rej b�d� wy�wietlane dane 
	@param message Dane, kt�re maj� zosta� wy�wietlone
	*/
	virtual void Print(std::string message) = 0;
};

