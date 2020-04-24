#ifndef KERDES_H
#define KERDES_H

#include <string>

public class Kerdes
{
private:
	std::string nehezseg;
	std::string kerdes;
	std::string a;
	std::string b;
	std::string c;
	std::string d;
	std::string valasz;
	std::string kategoria;

	 
public:
	Kerdes(std::string nehezseg, std::string kerdes, std::string a, std::string b, std::string c, std::string d, std::string valasz, std::string kategoria);
	std::string getNehezseg();
	std::string getKerdes();
	std::string getA();
	std::string getB();
	std::string getC();
	std::string getD();
	std::string getValasz();
	std::string getKategoria();
	~Kerdes();
};

#endif