//Octal to Decimal

#include<bits/stdc++.h>
using namespace std;

int btd(int n){
    int ans=0,x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<btd(n)<<endl;
}
