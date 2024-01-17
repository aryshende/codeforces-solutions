#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
	cin>>ch;
	string s1,s2,s3;
	s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
	cin>>s2;

	for(int i=0;i<s2.length();i++){
		char temp = s1.find(s2[i]);
		if(ch=='L'){
			s3 = s3 + s1[temp+1];
		}else{
			s3 = s3 + s1[temp-1];
		}
	}
	cout << s3 << endl;


    return 0;
}