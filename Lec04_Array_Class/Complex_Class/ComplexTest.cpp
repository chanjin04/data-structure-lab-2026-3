#include "Complex.h"

void main() {
	Complex a, b, c;
	a.read("A =");
	b.read("B =");
	//a.set(5, 5);
	//b.set(5, 5);
	c.set(2.5, 10.2);
	//이렇게 해도 값이 들어가지만 아래 add함수에 의해 값이 바뀜
	c.add(a, b);
	a.print("A = ");
	b.print("B = ");
	c.print("A + B = ");
}