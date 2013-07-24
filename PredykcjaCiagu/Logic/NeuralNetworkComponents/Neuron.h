#pragma once
#include <ctime>
#include <math.h>
#include <vector>

/** Klasa reprezentuje pojedynczy neuron sieci */
class Neuron
{
private:

	/** Dolne ograniczenie przedzia�u wag */
	const double LOWER_LIMIT_WEIGHTS_RANGE;

	/** Gorne ograniczenie przedzia�u wag */
	const double UPPER_LIMIT_WEIGHTS_RANGE;

	/** Ilo�� wej�� w neuronie */
	int numberOfNeuronInputs;

	/** Wylosowana waga wej�cia dla neuronu */
	double weight;

	/** Warto�� bias (dobierana na pocz�tku losowo) */
	double bias;

	/** Warto�� funkcji wyj�cia z neuronu czyli suma ka�dego z wej�� razy odpowiednia waga przypisana temu wej�ciu */
	double outputFunction;

	/** Tablica zawierajaca wag� ka�dego wej�cia neuronu */
	std::vector<double> weightsOfNeuronInputs;

	/** Gradient klasy neuron */ 
	double gradient;

public:

	/** Konstruktor klasy Neuron 
	@param int numberOfNeuronInputs Ilo�� wej�� pojedynczego neuronu */
	Neuron(int numberOfNeuronInputs);
	
	/** Destruktor klasy Neuron */
	~Neuron(void);
	
	/** Getter dla pola outputFunction 
	@return Warto�� funkcji wyj�cia z neuronu
	*/
	double GetOutputFunction()
	{
		return this->outputFunction;
	}

	/** Getter dla pola weightsOfNeuronInputs 
	@return std::vector<double> weightsOfNeuronInputs Tablica zawierajaca wag� ka�dego wej�cia neuronu
	*/
	std::vector<double> GetWeight()
	{
		return weightsOfNeuronInputs;
	}

	/** Setter dla pola weightsOfNeuronInputs 
	@param std::vector<double> weights Tablica z nowymi wagami
	*/
	void SetWeight(std::vector<double> weights)
	{
		this->weightsOfNeuronInputs.clear();
		this->weightsOfNeuronInputs.swap(weights);
	}

	/** Getter do zmiennej gradient 
	@return double gradient Oblicozny gradient
	*/ 
	double GetGradient()
	{
		return this->gradient;
	}

	/** Setter do zmiennej gradient 
	@param double tGradient Nowa warto�� gradientu
	*/ 
	void SetGradient(double tGradient)
	{
		this->gradient = tGradient;
	}

	/** Getter do zmiennej bias 
	@return double bias Warto�� wsp�czynnika korekcji
	*/
	double GetBias()
	{
		return this->bias;
	}

	/** Setter do zmiennej bias 
	@param double Nowa warto�� wsp�czynnika korekcji
	*/
	void  SetBias(double tBias)
	{
		this->bias = tBias;
	}

	/** Getter do pojedynczej wagi neurona 
	@param int whichInput Okre�la, z kt�rego wej�cia chcemy pobra� wag�
	@return double Warto�� pobranej wagi
	*/
	double GetOneWeight(int whichInput)
	{
		return weightsOfNeuronInputs[whichInput];
	}

	/** Setter do pojedynczej wagi neuronu 
	@param int whichInput Okre�la, kt�re wej�cie chcemy modyfikowa�
	@param double tWeight Nowa warto�� wagi
	*/
	void SetOneWeight(int whichInput, double tWeight)
	{
		weightsOfNeuronInputs[whichInput] = tWeight;
	}
	
	/** Metoda oblicza wagi dla ka�dego z wej�� pojedynczego neuronu 
	@return true gdy uda si� obliczy� wagi dla wszystkich wej�� neuronu.
	W przeciwnym wypadku wartosci� zwracan� jest false
	*/
	bool CalculateNeuronInputsWeights();

	/** Metoda oblicza warto�� funkcji wyj�cia z neuronu 
	@param std::vector<double> neuronInputData Tablica zawieraj�ca dane wej�ciowe
	podawane na kolejne wej�cia pojedynczego neuronu
	*/
	void CalculateNeuronOutputFunction(std::vector<double> neuronInputData);
};




/*
 
	
	double GetWeight()
	{
		return this->weight;
	}

	void SetWeight(double weight)
	{
		this->weight = weight;
	}
	
	*/