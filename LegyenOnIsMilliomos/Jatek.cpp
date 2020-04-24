#include "Jatek.h"
#include "Kerdes.h"
#include "AdatFeldolgozas.h"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

Jatek::Jatek(std::vector<Kerdes> kerdesek)
{
	Jatek::kerdesek = kerdesek;
	Jatek::aktKor = 1;
}

Kerdes Jatek::KerdesGeneralas() {
	srand(time(0));
	/*
		Kérdés generálásnál figyelembe veszi a program a nehézséget, így körnek megfelelõ
		nehézségû véletlenszerûen kiválasztott kérdést ad eredményül.
	*/
	bool nehezsegHelyes = false;
	int veletlenSzam;
	
	while (nehezsegHelyes == false) {
		veletlenSzam = (1 + rand() % Jatek::kerdesek.size()) - 1;
		if (atoi(Jatek::kerdesek[veletlenSzam].getNehezseg().c_str()) == Jatek::aktKor) {
			nehezsegHelyes = true;
		}
	}
	Kerdes kivalasztottKerdes = Jatek::kerdesek[veletlenSzam];
	Jatek::aktKerdes = kivalasztottKerdes;
	Jatek::kerdesek.erase(Jatek::kerdesek.begin() + veletlenSzam);

	return kivalasztottKerdes;	
};
int *Jatek::getPenz() {
	return Jatek::penz;
}
int Jatek::getKorokSzama() {
	return Jatek::KOROK_SZAMA;
}
int Jatek::getKor() {
	return Jatek::aktKor;
}
void Jatek::kovetkezoKor() {
	Jatek::aktKor++;
}
Kerdes Jatek::getAktKerdes() {
	return Jatek::aktKerdes;
}
void Jatek::ujJatek() {
	Jatek::aktKor = 1;
}
void Jatek::garantaltNyeremeny() {
	if (Jatek::aktKor == 6) {
		Jatek::nyeremeny = Jatek::penz[4];
	}
	else if (Jatek::aktKor == 11) {
		Jatek::nyeremeny = Jatek::penz[9];
	}
	else if (Jatek::aktKor == 16) {
		Jatek::nyeremeny = Jatek::penz[14];
	}

}
int Jatek::getNyeremeny(bool megallt) {
	if (megallt && Jatek::aktKor > 1) {
			Jatek::nyeremeny = Jatek::penz[Jatek::aktKor - 2];
	}
	return Jatek::nyeremeny;
}
Jatek::~Jatek()
{
}
