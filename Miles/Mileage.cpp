#include "Mileage.h"

Mileage::Mileage(double m)
{
	miles = m;
}

double Mileage::getMiles() const
{
	return miles;
}

double Mileage::getKilometers() const
{
	return miles / 1.6;
}

void Mileage::setMiles(double m)
{
	miles = m;
}

void Mileage::setKilometers(double k)
{
	miles = k * 1.6;
}

ostream & operator<<(ostream & out, const Mileage & m)
{
	// TODO: insert return statement here
	out << m.miles;
	return out;
}
