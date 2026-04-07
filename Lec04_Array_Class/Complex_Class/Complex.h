#pragma once
#include <cstdio>

class Complex {
	double real;
	double imag;
public:
	void set(double r, double i) {
		real = r;
		imag = i;
	}
	void read(const char* msg = "복소수 = ") {
		//"복소수="는 디폴트 값으로 함수 사용시 msg 입력 안하면 저 부분이 사용됨.
		printf(" %s ", msg);
		scanf_s("%lf \t %lf", &real, &imag);
		//scanf는 값을 직접 넣어야하므로 변수의 주소에 입력함
	}
	void print(const char* msg = " 복소수 = ") {
		printf(" %s %4.2f + %4.2fi\n", msg, real, imag);
	}
	void add(Complex x, Complex y) {
		real = x.real + y.real;
		imag = x.imag + y.imag;
	}
};