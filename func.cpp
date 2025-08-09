// #include<iostream>
// using namespace std;
// int sumd(int n){ //sum of digits
//     int num =0;
//     while(n>0){
//         int ld= n%10;
//         n/=10;
//         num+=ld;

//     } return num;

// }

// int main(){
// cout<<sumd(55);
// return 0 ;
// }



// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }return f;
// }
// int ncr(int n, int r){
//     int fact_n=fact(n);
//     int fact_r=fact(r);
//     int fact_nr=fact(n-r);
//     return fact_n/(fact_r*fact_nr);

// }
// int main(){
//     int n=8,r=2;
//     cout<<ncr(n,r);
    
    
//     return 0;

//}



// #include<iostream>
// using namespace std;
// int prime(int n){
//     bool isprime = true;
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             isprime = false;
//             break;
//         }
//     }
//      if(isprime==true){
//         cout<<"prime no.";
//     }else{
//         cout<<"not prime";
//     }
//     return isprime;
// }

// int main(){
//     cout<<prime(101)<<endl;

//     return 0;
// }



#include<iostream>
using namespace std;
bool prime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        if(prime(i))
        cout<<i<<' ';
    }

    return 0;
}