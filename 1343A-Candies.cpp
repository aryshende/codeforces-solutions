#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        long long k=2,flag=0;
        while(flag==0){
            long long temp = ((pow(2,k)) - 1);
            if(n%temp==0){
                cout<< (n/temp) << endl;
                flag=1;
            }
            k++;
        }
    }

    return 0;
}