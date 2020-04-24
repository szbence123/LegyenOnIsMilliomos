#include "Kerdes.h"
#include <iostream>
#include <string>


Kerdes::Kerdes(std::string nehezseg, std::string kerdes, std::string a, std::string b, std::string c, std::string d, std::string valasz, std::string kategoria)
{
	Kerdes::nehezseg = nehezseg;
	Kerdes::kerdes = kerdes;
	Kerdes::a = a;
	Kerdes::b = b;
	Kerdes::c = c;
	Kerdes::d = d;
	Kerdes::valasz = valasz;
	Kerdes::kategoria = kategoria;
}

std::string Kerdes::getNehezseg() {
	return Kerdes::nehezseg;
}

std::string Kerdes::getKerdes() {
	return Kerdes::kerdes;
}
std::string Kerdes::getA() {
	return Kerdes::a;
}
std::string Kerdes::getB() {
	return Kerdes::b;
}
std::string Kerdes::getC() {
	return Kerdes::c;
}
std::string Kerdes::getD() {
	return Kerdes::d;
}
std::string Kerdes::getValasz() {
	return Kerdes::valasz;
}
std::string Kerdes::getKategoria() {
	return Kerdes::kategoria;
}
Kerdes::~Kerdes()
{
}
