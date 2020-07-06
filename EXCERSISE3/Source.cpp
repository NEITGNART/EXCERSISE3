#include "Temperature.h"

int main() {

	ifstream fin("input.txt");
	if (fin.fail()) {
		cout << "Occurred error when open file!";
		return 0;
	}
	ofstream fout("output.txt");
	if (fout.fail()) {
		cout << "Occurred error when open file!";
		return 0;
	}
	int n = 0;
	vector<vector<double>> grid;
	ReadFile(fin, n, grid);
	StatisticsAndSaveFile(fout, grid);


	fin.close();
	fout.close();
	return 0;
}