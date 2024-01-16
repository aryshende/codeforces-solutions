#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        if((n%2020==0) || (n%2021==0)){
            cout << "YES" << endl;
        }else{
            int cnt=0, flag=0, sum=0;
            while(sum<=n){
                sum = sum + 2020;
                cnt++;
                if((n-sum<=cnt)&&(n-sum>=0)){
                    cout<< "YES" << endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}