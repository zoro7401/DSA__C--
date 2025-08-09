#include<iostream>
using namespace std;
int main(){
    int n=9;
    bool isprime = true;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime==true){
        cout<<"prime no.";
    }else{
        cout<<"not prime";
    }
    return 0;
}