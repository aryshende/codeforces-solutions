#include <bits/stdc++.h>

using namespace std;

// #define int long long

int32_t solve(){
	
	string str;
	cin>>str;

	int flag=0;
	for(int i=0;i<(int)str.length();i++){
		if(str[i]!='1' && str[i]!='4'){
			cout << "NO" << endl;
			return 0;
		}
		
	}
		if (str[0] == '4'){
			cout << "NO" << endl;
			return 0;

		}
		if (str.find("444") != str.npos){
			cout << "NO" << endl;
			return 0;

		}
	cout<< "YES" << endl;
	return 0;
}

int32_t main()
{
	// int t;
	// cin>>t;

	solve();

	return 0;
}

