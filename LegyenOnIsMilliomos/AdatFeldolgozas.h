#ifndef ADATFELDOLGOZAS_H
#define ADATFELDOLGOZAS_H

#include <string>
#include <vector>
#include "Kerdes.h"
class AdatFeldolgozas
{
private:
	static std::vector<Kerdes> kerdesek;
public:
	AdatFeldolgozas();
	static void AdatokBetoltese(std::string filePath);
	static void addKerdes( Kerdes kerdes);
	static std::vector<Kerdes> getKerdesek();
	static double tombOsszeg(double arr[]);
	static double kerekites(double szam);
	static int getKerdesekSzama();
};

#endif