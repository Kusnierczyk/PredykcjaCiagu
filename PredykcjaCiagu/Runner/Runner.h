#pragma once
#include "Controller.h"

/** Nadrz�dna klasa uruchomieniowo / menad�erska */
class Runner
{
private:

	/** Prywatny wska�nik do obiektu klasy Controller */
	Controller* controller;

public:

	/** Bezargumentowy konstruktor klasy Runner */
	Runner(void);

	/** Destruktor klasy Runner */
	~Runner(void);

	/** Metoda uruchamiaj�ca program */
	void RunProgram();
};

