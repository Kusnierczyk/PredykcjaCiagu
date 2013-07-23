#pragma once
#include "..\Logic\NeuralNetworkComponents\NeuralNetwork.h"

/** Interfejs wykorzystywany do implementacji w klasach propaguj�cych sie�
	neuronow� i uzyskuj�cych z niej wyniki.

	UWAGA: Elementy sieci, musz� by� typu NeuralNetwork !!! */ 
class IPropagable
{
public:

	/** Konstruktor bezargumentowy */
	IPropagable(void);

	/** Wirtualny destruktor */
	~IPropagable(void);

	/** Czysto wirtualna metoda do uczenia sieci neuronowej */
	virtual NeuralNetwork* BackPropagationMethod(double, double, double, NeuralNetwork* ) = 0;

	/** Czysto wirtualna metoda, do wykonania ostatnich oblicze�, na siecii */
	virtual double NetworkResult(double, double, NeuralNetwork* ) = 0;

	virtual double GetEndResult() = 0;

};

