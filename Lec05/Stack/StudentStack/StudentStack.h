#pragma once
#include <cstdio>
#include <iostream>
#define MAX_STRING 20
#define MAX_STCAK_SIZE 20
class Student {
	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];
public:
	Student(int i = 0, const char* n = "", const char* d = "") {
		set(i, n, d);
	}
	void set(int i, const char* n, const char* d) {
		id = i;
		strcpy(name, n); //문자열 복사함수
		strcpy(dept, n); //문자열 복사함수
	}
	void display() {
		printf(" 학번:%-15d 성명:%-10s 학과: %-20s\n", id, name, dept);

	}
};

class ArrayStack {
	int top;
	Student data[MAX_STCAK_SIZE];
public:
	void push
};