#include "Student.h"

int main(void) {

	ofstream fout("output.bin", ios::binary);
	if (fout.fail()) {
		cout << "Can't open file!";
		return 0;
	}
	ifstream fin("output.bin", ios::binary);
	if (fin.fail()) {
		cout << "Can't open file!";
		return 0;
	}
	Student a;
	// excute write binary file
	WriteFile(fout, a);
	// read binary file and display on creen console
	ReadFile(fin, a);
	return 0;
}