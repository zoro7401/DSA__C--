// #include<iostream>
// using namespace std;
// int main(){
//     int sz = 2;
//     int array[sz]={99,55};
//     for(int i=0;i<sz;i++){
//     cin>>array[i];
//     }
//     for(int i=0;i<sz;i++){
//         cout<<array[i]<<endl;
//     }
// }


// smallest and largest no. in array
#include<iostream>
using namespace std;
int main(){
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int i;
    int sz=4;
    int array[4]={55,20,-4,69};
    for( i=0;i<sz;i++){
        smallest= min(array[i],smallest);
        largest=max(array[i],largest);
      
    }for(i=0;i<sz;i++){
        if(array[i]==largest){
            break;
        }
    }cout<<i;
    
    cout<<smallest<<endl;
    cout<<largest<<endl;
}



// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={4,5,8,9,6};
//     int n= sizeof(array)/sizeof(array[0]);
//     int i;
//     int val=9;
//     for( i=0;i<n;i++){
//         if(array[i]==val){
//             break;
//         }
//     }
//     if (i == -1)
//         cout << "Element not Found!\n";
//     else
//         cout << i;
//     return 0;

// }