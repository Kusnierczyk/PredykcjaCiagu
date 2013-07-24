#pragma once
#include <math.h>
#include "Neuron.h"
#include "NeuralNetwork.h"
#include "..\..\Interfaces\IPropagable.h"

using namespace std;

/** Klasa s�u��ca do wykonania wstecznej propagacji */
class BackPropagation: public IPropagable
{

private:

	/** Wsp�czynnik uczenia sieci */ 
	 double eta;

	 /** Maksymalny dopuszczalny b��d */ 
	 double ERROR; 

public:
	/** Wynik ko�cowy */ 
	double endResult;

	/** Konstruktor bezargumentowy klasy BackPropagation */ 
	BackPropagation(void);

	/** Wirtualny destruktor klasy BackPropagation */ 
	virtual ~BackPropagation(void);

	/** Wirtualna metoda z interfejsu IPropagable, pozwalaj�ca na wsteczn� propagacj� sieci neuronowej */
    virtual NeuralNetwork* BackPropagationMethod(double, double, double, NeuralNetwork* );

	/** Wirtualna metoda z interfejsu IPropagable, pozwalaj�ca na uzyskanie wynik�w z sieci neuronowej */
	 virtual double NetworkResult(double, double, NeuralNetwork* );

	 /** Obliczenie b��du z neuronu wyj�ciowego (b��d: (|Warto�� oczekiwana - Warto�� otrzymana|) 
	 @param double networkAnswear Uzyskana odpowied� sieci
	 @param double expectedAnswear Odpowied�, kt�rej oczekujemy
	 */
	 double CalculateOutputNeuronAnswearError(double networkAnswear, double expectedAnswear);

	 /** Geeter do zmiennej endResult 
	 @return double endResult Ko�cowa odpowied� sieci
	 */ 
	 double GetEndResult()
	 {
		 return endResult;
	 }

};

