#include "Car.h"


int main() {
	SportsCar a(100, "Porche", 5, 0);
	Car b(200, "Avante", 3);
	a.display();
	a.speedUp();
	a.display();
	a.setTurbo(1);
	a.speedUp();
	a.display();
	a.setTurbo(0);
	b.display();
	b.speedUp();
	b.display();
	b.changeGear();
	b.display();
	
	return 0;
}