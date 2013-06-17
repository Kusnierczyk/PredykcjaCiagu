#pragma once
#include "Neuron.h"
#include "NeuralNetwork.h"
#include "..\..\Interfaces\IPropagable.h"

/** Klasa dziedzicząca interfejs IPropagable
	służąca do wykonania propagacji wstecznej */ 
class BackPropagation: public IPropagable
{

public:
	/** Konstruktor bezargumentowy klasy BackPropagation */ 
	BackPropagation(void);

	/** Wirtualny destruktor klasy BackPropagation */ 
	virtual ~BackPropagation(void);

	/** Wirtualna metoda z interfejsu IPropagable, pozwalająca na wsteczną propagację sieci neuronowej */
    virtual NeuralNetwork* BackPropagationMethod(double, double, NeuralNetwork* );

	/** Wirtualna metoda z interfejsu IPropagable, pozwalająca na uzyskanie wyników z sieci neuronowej */
	 virtual double NetworkResult(double, double, NeuralNetwork* );

};

