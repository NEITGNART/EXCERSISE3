#pragma once
#ifndef Solve_h
#define Solve_h

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>

using namespace std;

void ReadFile(ifstream& cin1, ifstream& cin2, vector<string>& str1, vector<string>& str2);
void Solving(ofstream& fout, vector<string> str1, vector<string> str2);
#endif