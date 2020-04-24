#ifndef JATEK_H
#define JATEK_H
#include <vector>
#include "Kerdes.h"

class Jatek
{
private:
	const static int KOROK_SZAMA = 15;
	int penz[KOROK_SZAMA] = { 5000, 10000, 25000, 50000, 100000, 200000, 300000, 500000, 800000, 1500000, 3000000, 5000000, 10000000, 20000000, 40000000};
	int aktKor;
	int nyeremeny = 0;
	Kerdes aktKerdes = Kerdes("-", "-", "-", "-", "-", "-", "-", "-");
	std::vector<Kerdes> kerdesek;
public:
	Jatek(std::vector<Kerdes> kerdesek);
	int *getPenz();
	Kerdes KerdesGeneralas();
	int getKorokSzama();
	void kovetkezoKor();
	int getKor();
	Kerdes getAktKerdes();
	void ujJatek();
	void garantaltNyeremeny();
	int getNyeremeny(bool megallt);
	~Jatek();
};

#endif