#pragma once
#include <iostream>
#include <cctype>

/** Klasa odpowiada za "nas�uchiwanie" wci�ni�cia przycisku w menu g��wnym programu */
class ConsoleMenuListener
{
private:

	/** Metoda sprawdza czy wybrano poprawn� opcj� z menu 
	@param int key Kod ASCII wci�ni�tego klawisza
	@param int numberOfMenuOptions Ilo�� dost�pnych opcji w menu programu
	@return true, gdy klawisz odpowiada� numerowi jednej z opcji dost�pnej w menu programu. 
	W przeciwnym wypadku wartosci� zwracan� jest false
	*/
	bool ValidateKey(int key, int numberOfMenuOptions);

public:

	/** Bezargumentowy konstruktor klasy ConsoleMenuListener */
	ConsoleMenuListener(void);

	/** Destruktor klasy ConsoleMenuListener */
	~ConsoleMenuListener(void);

	/** Metoda nas�uchuje   
	@param int numberOfMenuOptions Ilo�� dost�pnych opcji w menu programu
	@return Numer opcji, kt�ra zosta�a wybrana przez u�ytkownika 
	*/
	int ListenForKey(int numberOfMenuOptions);
};

