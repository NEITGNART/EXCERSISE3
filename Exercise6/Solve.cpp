#include "Solve.h"

void ReadFile(ifstream& cin1, ifstream& cin2, vector<string>& str1, vector<string>& str2) {
	string s1;
	while (cin1.good()) {
		getline(cin1, s1);
		str1.push_back(s1);
	}
	string s2;
	while (cin2.good()) {
		getline(cin2, s2);
		str2.push_back(s2);
	}
}
void Solving(ofstream& fout, vector<string> str1, vector<string> str2) {

	long n = str1.size();
	long m = str2.size();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			int sum1(0); int sum2(0); int cnt2(0); string tmp = "";
			for (int k1 = 0; k1 < (int)str1[i].size(); k1++) {
				if (str1[i][k1] == ':') break;
				sum1 += str1[i][k1] - '\0';
			}
			for (int k2 = 0; k2 < (int)str2[j].size(); ++k2) {
				cnt2++;
				if (str2[j][k2] == ':') break;
				sum2 += str2[j][k2] - '\0';	
			}
			if (sum1 == sum2) {
				fout << str1[i] + ":" + str2[j].substr(cnt2, (int)str2[j].size() ) << endl;
			}
		}
	}
}