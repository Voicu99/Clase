#pragma once
#include <string>
#include <iostream>

//dif intre o structura si o clasa in c++
//structura are by default public iar clasa private 

class ContBancar
{
    //o clasa este private by default
	std::string nume_utilizator;
	std::string prenume_utilizator;
	float sold;

public:
	void printInfoCont();
	void initCont();
	bool depunereSuma(float suma);
	bool retragereSuma(float suma);
	bool retragereSuma(int suma);

	bool depunereSuma(int suma);







};

