#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;

	vector<int> v;
	for(int i=0; i<12; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	
	sort(v.begin(),v.end(), greater());

	int sum=0,i=0;
	while(sum<n){
		sum+=v[i];
		i++;
		if(i>12){
			cout<<-1<<endl;
			return 0;
		}
	}
	cout<<i<<endl;


	return 0;
}