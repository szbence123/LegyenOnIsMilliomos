#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Kerdes.h"
#include "AdatFeldolgozas.h"

AdatFeldolgozas::AdatFeldolgozas()
{
}

std::vector<std::string> splitString(std::string str, char delimeter)
{
	std::stringstream string_stream(str);
	std::string item;
	std::vector<std::string> splitted;
	while (std::getline(string_stream, item, delimeter))
	{
		splitted.push_back(item);
	}
	return splitted;
}

void  AdatFeldolgozas::AdatokBetoltese(std::string filePath) {
	std::string line;
	std::ifstream kerdesekFile(filePath);
	std::vector<std::string> elv;
	Kerdes *aktKerdes;

	if (kerdesekFile.is_open()) {
		while (std::getline(kerdesekFile, line)) {
			elv = splitString(line, '\t');
			aktKerdes = new Kerdes(elv[0], elv[1], elv[2], elv[3], elv[4], elv[5], elv[6], elv[7]);
			AdatFeldolgozas::addKerdes(*aktKerdes);
		}
		kerdesekFile.close();
	}
}

std::vector<Kerdes> AdatFeldolgozas::getKerdesek() {
	return AdatFeldolgozas::kerdesek;
}

void AdatFeldolgozas::addKerdes(Kerdes kerdes) {
	AdatFeldolgozas::kerdesek.push_back(kerdes);
}
int AdatFeldolgozas::getKerdesekSzama() {
	return AdatFeldolgozas::kerdesek.size();
}
double AdatFeldolgozas::tombOsszeg(double arr[]) {
	double sum = 0.0;
	for (int i = 0; i < 4; i++) {
		sum += (double)arr[i];
	}
	return sum;
}
double AdatFeldolgozas::kerekites(double szam) {
		szam = szam * 100.0;
		if (szam < 0) return (ceil(szam - 0.5)) / 100.0;
		return (floor(szam + 0.5)) / 100.0;
	}
std::vector<Kerdes> AdatFeldolgozas::kerdesek;