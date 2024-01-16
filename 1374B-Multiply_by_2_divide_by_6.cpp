#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n,cnt=0,cnt2=0;
        cin>>n;

        if(n==1){
            cout << cnt << endl;
        }else{
            while(true){
                if(n%6==0){
                    n=n/6;
                    cnt2=0;
                }else{
                    n*=2;
                    cnt2++;
                }
                cnt++;

                if(cnt2==2){
                    cout<<-1<<endl;
                    break;
                }else if(n==1){
                    cout << cnt << endl;
                    break;
                }
            }
        }
    }

    return 0;
}