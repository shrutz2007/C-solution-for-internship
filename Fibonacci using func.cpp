#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int ne;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        ne=t1+t2;
        t1=t2;
        t2=ne;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;

}
