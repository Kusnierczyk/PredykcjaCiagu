#pragma once
#include <fstream>
#include <string>
#include <vector>
#include "..\Interfaces\IReadable.h"

/** Klasa odpowiada za odczyt plik�w tekstowych */
class TxtFileReader : public IReadable
{
private:

	/** Tablica w kt�rej b�dzie zapisana zawarto�� wczytywanego pliku */
	std::vector<double> data;

	/** Zmienna plikowa */
	std::fstream file;

public:

	/** Konstruktor klasy TxtFileReader */
	TxtFileReader(void);
	
	/** Wirtualny destruktor klasy TxtFileReader */
	virtual ~TxtFileReader(void);

	/** Implementacja metody z interfejsu IReadable 
	@param std::string path �cie�ka wraz z nazw� pliku
	@return true, jezeli powiedzie si� operacja otwracia i odczytu pliku.
	W przeciwnym wypadku warto�ci� zwracan� jest false
	*/
	virtual bool ReadFile(std::string path);
	
	/** Implementacja gettera dla pola data z interfejsu IReadable
	@return tablica zawieraj�ca wczytany plik z dysku
	*/
	std::vector<double> GetData()
	{
		return data;
	}
};

