#include "Solve.h"

int main(void) {

	ifstream fin1("f1.txt");
	if (fin1.fail()) {
		cout << "Occurred error when open file!";
		return 0;
	}
	ifstream fin2("f2.txt");
	if (fin2.fail()) {
		cout << "Occurred error when open file!";
		return 0;
	}
	ofstream fout("f3.txt");
	if (fout.fail()) {
		cout << "Occurred error when open file!";
		return 0;
	}
	vector<string> str1;
	vector<string> str2;
	ReadFile(fin1, fin2, str1, str2);
	Solving(fout, str1, str2);

	return 0;
}