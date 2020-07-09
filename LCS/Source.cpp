#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef long long ll;
const int INF = 0x3f3f3f3f;
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; ++i)

int F[1000][1000];

int main(void) {
	string str1, str2;
	cin >> str1 >> str2;
	memset(F, 0, sizeof(F));
	REP(i, 1, str1.size()) {
		REP(j, 1, str2.size()) {
			if (str1[i] == str2[j]) F[i][j] = F[i - 1][j - 1] + 1;
			else F[i][j] = max(F[i - 1][j], F[i][j - 1]);
		}
	}
	cout << F[str1.size()][str2.size()];
	return 0;
}