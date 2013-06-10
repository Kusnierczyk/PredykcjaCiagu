#pragma once
#include "NeuralNetworkComponents\Neuron.h"
#include "NeuralNetworkComponents\NeuralNetwork.h"
#include "NeuralNetworkComponents\IPropagable.h"
#include "NeuralNetworkComponents\BackPropagation.h"

/** Klasa menad�erska s�u��ca do obs�ugi sieci neuronowej */
class NetworkManager
{
private:
	/** Zmienna wska�nikowa interfejsu, wskazuj�ca obiekt klasy BackPropagation */
	IPropagable* propagation;
	/** Zmienna wska�nikowa wskazuj�ca obiekt NeuralNetwork*/
	NeuralNetwork* network;

public:
	/** Konstruktor bezargu mentowy klasy Networkmanager */
	NetworkManager(void);

	/** Destruktor klasy NetworkManager */
	~NetworkManager(void);

/** Metoda s�u��ca do stworzenia sieci neuronowej
	@return network -> stworzona sie� neuronowa */
	NeuralNetwork* CreateNetwork();

/** Metoda s�u��ca do usuni�cia sieci neuronowej */
	void DestroyNetwork();

/** Metoda ucz�ca sie� neuronow� */
	NeuralNetwork* TeachNetwork();

/** Metoda uruchamiaj�ca sie� i zwracaj�ca wynik 
	@return wynik -> wynik oblicze� sieci*/
	double RunNetwork();

};

