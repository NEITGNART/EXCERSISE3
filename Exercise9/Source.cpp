#include <iostream>

using namespace std;


float* Pi(int* pi) {
	float tmp = *pi;
	float* Pii = &tmp;
	return Pii;
}

void OddOrEven(int* pi) {
	int tmp = *pi;
	if ((tmp & 1) == 0) cout << "Even";
	else cout << "Odd";
}

void printC() {
	cout << "Catfish" << endl;
}
void printCh() {
	cout << "chrisname" << endl;
}
void printD() {
	cout << "devonrevenge" << endl;
}
int main(void) {
	//1
	char* ex;
	//2
	/*char* ex1;
	ex1 = ex;*/
	//3
	char** ex3;
	ex3 = new char* [10];
	for (int i = 0; i < 10; ++i) {
		ex3[i] = new char;
	}
	//4 
	char* ex4 = new char[30];

	//5
	char** ex5;
	ex5 = new char* [10];
	for (int i = 0; i < 10; ++i) {
		ex5[i] = new char[500];
	}
	//6
	int n = 5;
	const int* pn = &n;
	//7
	 //cannot be used initialize const int 
	/*const int m = 5;
	int* pm = &m;*/
	cout << "Odd or even: ";
	int* i = new int(100);
	OddOrEven(i);
	cout << endl;
	while (true) {
		char ch;
		cout << "Enter 1 to display : Catfish" << endl;
		cout << "Enter 2 to display : chrisname" << endl;
		cout << "Enter 3 to display : devonrevenge" << endl;
		cin >> ch;
		if (ch == '1') printC();
		else if (ch == '2') printCh();
		else printD();

		if (ch == '1' || ch == '2' || ch == '3') break;
	}

	return 0;
}