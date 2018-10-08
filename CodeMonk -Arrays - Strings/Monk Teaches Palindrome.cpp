#include <bits/stdc++.h>

using namespace std;


string str;
int main()
{
	int t, n, len, i, j;
	cin >> t;
	while (t--) {
		cin>>str;
		i = 0;
		len = str.size();
		j = len-1;
		while (i < j) {
			if (str[i] != str[j]) {
				break;
			}
			i++;
			j--;
		}
		if (i >= j) {
			cout << "YES ";
			if (len%2!=0) {
				cout << "ODD" << endl;
			} else {
				cout << "EVEN" << endl;
			}
		} else {
			cout << "NO" << endl;
		}
		
	}
	
	return 0;
}
