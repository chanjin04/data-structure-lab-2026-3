#include "Car.h"


int main() {
	SportsCar a(200, "Porsche", 5, false);
	Car b(100, "Avante", 3);
	a.display();
	a.speedUp();
	a.display();
	a.setTurbo(true);
	a.speedUp();
	a.display();
	b.display();
	b.speedUp();
	b.display();
	b.changeGear();
	b.display();
	a.whereAmI();
	
	return 0;
}