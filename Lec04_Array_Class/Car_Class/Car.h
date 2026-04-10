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
		cout << "\t" << name << " -> Gear Change!" << endl;
	}
	
	void speedUp() {
		speed += 5;
		cout << "\t" << name << " -> Speed up!" << endl;
	}

	void display() {
		printf("[%s] \nGear = %d, Speed = %dkm/h\n", name, gear, speed);
	}

	void whereAmI() {
		cout << "Address of ["<< name << "] -> " << this << endl;
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
			cout << "\t" << name << " -> Turbo on!" << endl;
		}
		else {
			cout << "\t" << name << " -> Turbo off" << endl;
		}
	}
	void speedUp() {
		if (bTurbo) {
			speed += 20;
			cout << "\t" << name << " -> Speed up!" << endl;
		}
		else Car::speedUp();
	}
	void display() {
		if (bTurbo == 0) {
			printf("[%s] \nGear = %d, Speed = %dkm/h, Turbo = off \n", name, gear, speed);
		}
		else if (bTurbo == 1) {
			printf("[%s] \nGear = %d, Speed = %dkm/h, Turbo = On \n", name, gear, speed);
		}
		else {
			Car::display();
		}
	}
};