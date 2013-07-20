#pragma once
#include "Controller.h"

/** Nadrz�dna klasa uruchomieniowo / menad�erska */
class Runner
{
private:

	/** Prywatny wskaznik do obiektu klasy Controller */
	Controller* controller;

public:

	/** Bezargumentowy konstruktor klasy Runner */
	Runner(void);

	/** Destruktor klasy Runner */
	~Runner(void);

	/** Metoda uruchamiajaca program */
	void RunProgram();
};

