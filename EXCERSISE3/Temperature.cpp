#include "Temperature.h"

void ReadFile(ifstream& fin, int n, vector<vector<double>>& grid) {
	fin >> n;
	grid.resize(n);
	for (int i = 0; i < n; ++i) {
		grid[i].resize(24);
	}
	while (fin.good()) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < 24; ++j) {
				fin >> grid[i][j];
			}
		}
	}

}
void StatisticsAndSaveFile(ofstream& fout, vector<vector<double>> grid) {
	int row = grid.size();
	int col = 24;
	if (row == 0) return;

	for (int i = 0; i < row; ++i) {
		double minTemperature = grid[0][0];
		double maxTemperature = grid[0][0];
		double averageTemperature = 0;
		for (int j = 0; j < col; ++j) {
			if (minTemperature > grid[i][j]) minTemperature = grid[i][j];
			if (maxTemperature < grid[i][j]) maxTemperature = grid[i][j];
			averageTemperature += grid[i][j];
		}
		fout    << averageTemperature / col << " "
			    << maxTemperature << " "
		        <<minTemperature << endl;
	}

}