#pragma once
#ifndef Temperature_h
#define Temperature_h
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

void ReadFile(ifstream& fin, int n, vector<vector<double>>& grid);
void StatisticsAndSaveFile(ofstream& fout, vector<vector<double>> grid);

#endif

