#pragma once
#include <vector>

/** Interfejs umo�liwiaj�cy zapis do pliku */
class IWritable
{
public:
	public:

	/** Konstruktor interfejsu */
	IWritable(void);

	/** Wirtualny destruktor interfejsu  */
	virtual ~IWritable(void);

	/** Metoda czysto wirtualna za pomoca ktorej bedzie mozliwy zapis do pliku
	@param std::string path �cie�ka do pliku
	@param std::vector<double> dataToFile Dane, kt�re nale�y zapisa�
	@return true, gdy plik zostal poprawnie odczytany.
	W przeciwnym wypadku wartoscia zwracana jest false
	*/
	virtual bool WriteFile(std::string path, std::vector<double> dataToFile) = 0;

};

