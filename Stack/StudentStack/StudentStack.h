#pragma once
#include <cstdio>
#include <string.h>
#include <iostream>
const int MAX_STRING = 20;
const int MAX_STACK_SIZE = 50;
class Student {
	int id;//학번
	char name[MAX_STRING];//이름
	char dept[MAX_STRING];//소속학과
public:
	Student(int i = 0, const char* n = "", const char* d = "") {
		set(i, n, d);
	}
	void set(int i, const char* n, const char* d) {
		id = i;
		strcpy_s(name, n); //문자열 복사함수
		strcpy_s(dept, d); //문자열 복사함수
	}
	void display() {
		printf(" 학번:%-15d 성명:%-10s 학과: %-20s\n", id, name, dept);
		//%-숫자 -> 숫자만큼 자리 확보하고 오른쪽 정렬로 넣기
	}
};
// 오류 처리 함수
inline void error(const char* message) {
	printf("%s\n", message);
	exit(1);
}

class ArrayStack {
	int top;//요소의 개수
	Student data[MAX_STACK_SIZE];
public:
	ArrayStack() { top = -1; }
	~ArrayStack() {} // 스택 소멸자
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }

	void push(Student e) { // 맨 위에 항목 삽입
		if (isFull()) error("스택 포화 에러");
		data[++top] = e;
	}
	Student pop() { // 맨 위의 요소를 삭제하고 반환
		if (isEmpty()) error("스택 공백 에러");
		return data[top--];
	}
	Student peek() { // 삭제하지 않고 요소 반환
		if (isEmpty()) error("스택 공백 에러");
		return data[top];
	}
	void display() { // 스택 내용을 화면에 출력
		printf("[스택 항목의 수 = %2d] ==> \n", top + 1);
		for (int i = 0; i <= top; i++)
			data[i].display();
		printf("\n");
	}
};