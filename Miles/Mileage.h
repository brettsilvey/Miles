#ifndef MILEAGE_H
#define MILEAGE_H
#include <iostream>
using namespace std;

class Mileage {
private:
	double miles;
public:
	Mileage(double m);
	//getFunctions
	double getMiles() const;
	double getKilometers() const;
	//setFunctions
	void setMiles(double m);
	void setKilometers(double k);
	//This is where we will output
	friend ostream&operator<<(ostream& out, const Mileage&m);
};
#endif //"MILES_H"
