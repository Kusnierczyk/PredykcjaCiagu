#pragma once
#include "..\..\Interfaces\IPropagable.h"

/** Klasa dziedzicz�ca interfejs IPropagable
	s�u��ca do wykonania propagacji wstecznej */ 
class BackPropagation: public IPropagable
{
public:
	/** Konstruktor bezargumentowy klasy BackPropagation */ 
	BackPropagation(void);

	/** Wirtualny destruktor klasy BackPropagation */ 
	virtual ~BackPropagation(void);

	/** Wirtualna metoda z interfejsu IPropagable */
	virtual NeuralNetwork* Propagation(NeuralNetwork* );
};

