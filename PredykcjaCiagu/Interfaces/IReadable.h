#pragma once
#include <string>
#include <vector>

/** Interfejs umo�liwiaj�cy odczyt danych z pliku */
class IReadable
{
public:

	/** Konstruktor interfejsu IReadable */
	IReadable(void);

	/** Wirtualny destruktor interfejsu IReadable */
	virtual ~IReadable(void);

	/** Metoda czysto wirtualna za pomoc� kt�rej b�dzie mo�liwy odczyt pliku
	@param std::string path �cie�ka do pliku
	@return true, gdy plik zosta� poprawnie odczytany.
	W przeciwnym wypadku warto�ci� zwracan� jest false
	*/
	virtual bool ReadFile(std::string path) = 0;

	/** Czysto wirtualny getter dla tablicy, w kt�rej znajduje si� wczytany plik
	@return std::vector<int> tablica zawieraj�ca zawarto�� wczytanego pliku
	*/
	virtual std::vector<double> GetData() = 0;

};
