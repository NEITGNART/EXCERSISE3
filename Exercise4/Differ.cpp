#include "Differ.h"

void ReadTwoFile(ifstream& fin1, ifstream& fin2, vector<string> &str1, vector<string> &str2) {
	string s1;
	while (fin1.good()) {
		while ( getline(fin1, s1) ) {
			str1.push_back(s1);
		}
	}
	string s2;
	while (fin2.good()) {
		while (getline(fin2, s2)) {
			str2.push_back(s2);
		}
	}
}
void CompareString(vector <string> str1, vector<string> str2) {
	long len1 = str1.size();
	long len2 = str2.size();
	
	int i(0), j(0);

	while (i < len1 && j < len2) {
		if (str1[i] != str2[j]) {
			cout << "<" << str1[i] << endl;
			cout << ">" << str2[j] << endl;
		}
		++i; ++j;
	}
	while (i < len1) {
		cout << "<" << str1[i] << endl;
		++i;
	}
	while (j < len2) {
		cout << ">" << str2[j] << endl;
		++j;
	}
}