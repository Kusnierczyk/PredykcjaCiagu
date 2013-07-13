#pragma once
#include "NeuralNetworkComponents\Neuron.h"
#include "NeuralNetworkComponents\NeuralNetwork.h"
#include "NeuralNetworkComponents\BackPropagation.h"
#include "..\Data\TxtFileReader.h"
#include "..\Interfaces\IReadable.h"
#include "..\Logic\DataConverter.h"
#include <vector>
#include <iostream>

/** Klasa menad�erska s�u��ca do obs�ugi sieci neuronowej */
class NetworkManager
{
private:
	/** Zmienna wska�nikowa wskazuj�ca obiekt NeuralNetwork*/
	NeuralNetwork* network;

	/** Wka�nijk na obiekt, typu interfejsu IPropagable */
	IPropagable* propagation;

	/** Obiekt Interfejsu IRedable, reprezentujacy klase TXTFileReader */
	IReadable* reader;

	/** Wska�nik na obiekt klasy odpowiadaj�cy za konwertowanie danych do przedzialu <0,1) */ 
	DataConverter* converter;

	/** Zmienne odpowiadaj�ce za liczb� neuron�w w kolejnych watstwach sieci */
	static const int FIRST_NETWORK = 2, SECOND_NETWORK = 5, THIRD_NETWORK = 1;

	/** Zmienna odpowiedzialna za liczbe warst sieci neuronowej */
	static const int NETWORK_LAYERS = 3; 

	/** Zmienne tymczasowe na warto�ci z pliku (z klasy TXTFileReader) */
	double temp1, temp2, temp3;

	/** Zmienna przechowuj�ca wielko�� tablicy, danych wprowadzonych przez u�ytkownika */ 
	int dataSize;

	/** Tablica danych wprowadzonych przez uzytkownika */ 
	std::vector<int> data;

	/** Skonwertowana tablica danych */ 
	std::vector<double> convertedData;

	/** Zmienna przechowuj�ca ostateczny wynik z dzia�ania sieci */
	double finalyNetworkResult;

public:
	/** Konstruktor bezargu mentowy klasy Networkmanager */
	NetworkManager(void);

	/** Wirtualny destruktor klasy NetworkManager */
	virtual ~NetworkManager(void);

	/** Metoda s�u��ca do stworzenia sieci neuronowej
	@return network -> stworzona sie� neuronowa */
	NeuralNetwork* CreateNetwork();

	/** Metoda s�u��ca do usuni�cia sieci neuronowej */
	void DestroyNetwork();

	/** Metoda ucz�ca sie� neuronow� */
	void TeachNetwork();

	/** Metoda licz�ca odpowied� sieci 
	@retun result -> wynik oblicze� sieci, przekazywany do nadrz�dnych metod*/
	double Calculate();

	/** Metoda uruchamiaj�ca sie� i zwracaj�ca wynik 
	@return Wynik -> wynik oblicze� sieci */
	double RunNetwork();

	/** Getter do finalNetworkResult */ 
	double GetFinalResult()
	{
		return finalyNetworkResult;
	}
};

