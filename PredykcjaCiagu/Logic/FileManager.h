#pragma once
#include "..\Interfaces\IReadable.h"
#include "..\Interfaces\IWritable.h"
#include "..\Data\TxtFileReader.h"

/** Klasa odpowiada za zarz�dzanie klasami odczytuj�cymi / zapisuj�cymi pliki */
class FileManager
{
public:

	/** Prywatny wska�nik typu IReadable, pod kt�ry bdzie mo�na "podpi��" 
	klasy implementujace ten interfejs */
	IReadable* ireader;

	/** Prywatny wska�nik typu IWritable, pod kt�ry bdzie mo�na "podpi��" 
	klasy implementujace ten interfejs */
	IWritable* iwriter;

public:
	
	/** Konstruktor klasy FileManager */
	FileManager(void);
	
	/** Wirtualny destruktor klasy FileManager */
	virtual ~FileManager(void);
};

