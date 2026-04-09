#pragma once
#include <cstdio>
#include <iostream>
using namespace std;

class Car {
protected:
	int speed;
	char name[40];
public:
	int gear;
	Car() {}
	~Car() {}
	Car(int s, const char* n, int g) {
		speed = s;
		gear = g;
		strcpy_s(name, n);
	}
	
	void changeGear(int g = 4) {
		gear = g;
		cout << name << " -> Gear Change!" << endl;
	}
	
	void speedUp() {
		speed += 5;
		cout << name << " -> Speed up!" << endl;
	}

	void display() {
		printf("[%s] : Gear = %d, Speed = %dkm/h\n", name, gear, speed);
	}

	void whereAmI() {
		printf("object Address = %x\n", this);
	}
};

class SportsCar : public Car {
private:
	bool bTurbo;
public:
	SportsCar(int s, const char* n, int g, bool b) 
		:Car(s, n, g), bTurbo(b) {}
	void setTurbo(bool bTur) {
		bTurbo = bTur;
		if (bTurbo == 1) {
			cout << name << " -> Turbo on!" << endl;
		}
		else {
			cout << name << " -> Turbo off" << endl;
		}
	}
	void speedUp() {
		if (bTurbo)
			speed += 20;
		else Car::speedUp();
	}
};