#include <iostream>
using namespace std;

#include "calculator.h"
#include "adder.h"

void calculator::run() {
	// TODO Auto-generated constructor stub
	cout << "두개의 수를 입력하세요>>";
	int a,b;
	cin >> a >> b;
	adder Adder(a,b);
	cout << Adder.process();
}
