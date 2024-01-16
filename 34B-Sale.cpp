#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
 
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<m;i++){
        if(v[i]<0){
            sum = sum + (v[i]*(-1));
        }
    }
    cout << sum << endl;
 
 
    return 0;
}