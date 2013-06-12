#pragma once
#include "..\Logic\NeuralNetworkComponents\NeuralNetwork.h"

/** Interfejs wykorzystywany do implementacji w klasach propagujacych sie�
	neuronow� i uzyskuj�cych z niej wyniki.
	UWAGA: Elementy sieci, musz� by� typu NeuralNetwork !!! */ 
class IPropagable
{
public:

	IPropagable(void);

	~IPropagable(void);

	virtual NeuralNetwork* BackPropagationMethod(int, int, NeuralNetwork* ) = 0;

	virtual double NetworkResult(int, int, NeuralNetwork* ) = 0;
};

