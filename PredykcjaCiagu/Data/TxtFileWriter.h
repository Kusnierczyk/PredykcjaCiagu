#pragma once
#include <vector>
#include <fstream>
#include <string>
#include "..\Interfaces\IWritable.h"

/** Klasa s�u�aca do zapisywania wynik�w w pliku tekstowym */
class TxtFileWriter: public IWritable
{

private: 	
	/** Zmienna plikowa */
	std::fstream file;

public:
	/** Konstruktor bezargumentowy */
	TxtFileWriter(void);

	/** Destruktor bezargumentowy */ 
	virtual ~TxtFileWriter(void);

	/** Implementacja metody z interfejsu IWritable 
	@param std::string fileName �cie�ka wraz z nazw� pliku
	@param std::vector<double> dataToFile Dane, kt�re nale�y zapisa�
	@return true, jezeli powiedzie si� operacja otwracia i zapisu do pliku.
	W przeciwnym wypadku warto�ci� zwracan� jest false
	*/
	virtual bool WriteFile(std::string fileName, std::vector<double> dataToFile);
};

