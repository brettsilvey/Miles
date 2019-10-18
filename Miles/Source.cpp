#include "Mileage.h"
#include <iostream>
using namespace std;

int main() {
	Mileage a1(40);
	cout << "Given Mileage: " << a1 << endl;
	a1.setMiles(50);
	cout << "New Mileage: " << a1 << endl;
	a1.setKilometers(50);
	cout << "Distance in Kilometers: " << a1 << endl;



}