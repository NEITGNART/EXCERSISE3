#include "Solve.h"

int main(void) {

	ifstream fin("input.txt");
	if (fin.fail()) {
		cout << "Occured error when open file!";
		return 0;
	}
	else {
		string str;
		ReadFile(fin, str);
		int* res = Solve(str);
		print(res);
	}
	
	
	return 0;
}