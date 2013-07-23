#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "NeuralNetworkComponents\Neuron.h"
#include "NeuralNetworkComponents\NeuralNetwork.h"
#include "NeuralNetworkComponents\BackPropagation.h"
#include "..\Data\TxtFileReader.h"
#include "..\Data\TxtFileWriter.h"
#include "..\Interfaces\IReadable.h"
#include "..\Interfaces\IWritable.h"

/** Klasa menad�erska s�u��ca do obs�ugi sieci neuronowej */
class NetworkManager
{
private:
	/** Tablica przechowuj�ca sugerowane wyniki */
	std::vector<double> tabWynik;

	/** Zmienna wska�nikowa wskazuj�ca obiekt NeuralNetwork */
	NeuralNetwork* network;

	/** Wska�nik na obiekt, typu interfejsu IPropagable */
	IPropagable* propagation;

	/** Obiekt Interfejsu IReadable, reprezentuj�cy klas� TxtFileReader */
	IReadable* reader;

	/** Obiekt Interfejsu IWritable, reprezentuj�cy klas� TxtFileWriter */
	IWritable* writer;

	/** Zmienne odpowiadaj�ce za liczb� neuron�w w kolejnych watstwach sieci */
	static const int FIRST_NETWORK = 2, SECOND_NETWORK = 5, THIRD_NETWORK = 1;

	/** Zmienna odpowiedzialna za liczb� warstw sieci neuronowej */
	static const int NETWORK_LAYERS = 3; 

	/** Zmienne tymczasowe na warto�ci z pliku (z klasy TxtFileReader) */
	double temp1, temp2, temp3;

	/** Zmienna przechowuj�ca wielko�� tablicy, danych wprowadzonych przez u�ytkownika */ 
	int dataSize;

	/** Tablica danych wprowadzonych przez uzytkownika */ 
	std::vector<double> data;

	/** Skonwertowana tablica danych */ 
	std::vector<double> convertedData;

	/** Zmienna przechowuj�ca ostateczny wynik z dzia�ania sieci */
	double finalyNetworkResult;

public:
	/** Zmienne pomocnicze */ 
	double test, zapamietajBlad, p1;

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
	@retun result -> wynik oblicze� sieci, przekazywany do nadrz�dnych metod */
	double Calculate();

	/** Metoda uruchamiaj�ca sie� i zwracaj�ca wynik 
	@return Wynik -> wynik oblicze� sieci */
	double RunNetwork();

	/** Metoda s�u��ca do eksportu wynik�w do pliku 
	@param std::string fName �cie�ka do pliku
	@param std::vector<double> data Dane, kt�re nale�y zapisa�
	*/
	void SaveToFile(std::string fName, std::vector<double> data);

	/** Getter do finalNetworkResult 
	@return double finalna odpowied� sieci (przewidziany wyraz ci�gu)
	*/ 
	double GetFinalResult()
	{
		return finalyNetworkResult;
	}
};

