#pragma once
#include "Neuron.h"
#include <vector>

/** Klasa  odpowiadaj�ca za sie� neuronow� */
class NeuralNetwork
{
private: 
	/** Prywatne zmienne odpowiadaj�ce wielko�ci sieci i flaga do obs�ugi w/w sieci */ 
	int network1, network2, network3, flag;

public:

	/** Konstruktor tr�j-argumentowy klasy NeuralNetwork (przekazywane s�, wielko�ci poszczeg�lnych warstw siecii) */
	NeuralNetwork(int, int, int);

	/** Wirtualny destruktor klasy, NeuralNetwork */
	virtual ~NeuralNetwork();

	/** Struktura danych przechowuj�ca kolejne warstwy sieci neuronowej */
	struct NeuronContainer
	{
		std::vector<Neuron*> neurons;
		NeuronContainer* next;
	};

	/** Wska�nik na pierwsz� warstw� sieci */
	NeuronContainer* head;

	/** Wska�nik na ostatni� warstw� sieci */
	NeuronContainer* tail;

	/** Metoda odpowiedzialna, za stworzenie siecii neuronowej */
	NeuronContainer* CreateNetwork();

};
