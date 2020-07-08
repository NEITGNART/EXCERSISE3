#include <iostream>
#include <cstring>
#include <string>
#include <ctype.h>

using namespace std;

int* Solve(string str) {
	int* res = new int[26];
	for (int i = 0; i < 26; ++i) res[i] = 0;

	for (size_t i = 0; i < str.size(); ++i) {
		if (isalpha(str[i])) {
			str[i] =  tolower(str[i]);
		}
		res[str[i] - 'a']++;
	}
	return res;
}

int main(void) {

	string str = "aaabcasdfasjkdfhaslkdhfkjsahdfkjhlasdlfkjhsdafcc";
	int* res = Solve(str);
	
	for (int i = 0; i < 26; ++i) {
		if (res[i]) {
			cout << char(i + 97) << ":" << res[i] << endl;
		}
	}
	return 0;
}