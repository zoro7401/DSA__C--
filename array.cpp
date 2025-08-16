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
// #include<iostream>
// using namespace std;
// int main(){
//     int smallest=INT_MAX;
//     int largest=INT_MIN;
//     int i;
//     int sz=4;
//     int array[4]={55,20,-4,69};
//     for( i=0;i<sz;i++){
//         smallest= min(array[i],smallest);
//         largest=max(array[i],largest);
      
//     }for(i=0;i<sz;i++){
//         if(array[i]==largest){
//             cout<<"position"<<i<<endl;
//         }
//     }
    
//     cout<<smallest<<endl;
//     cout<<largest<<endl;
// }


// #include<iostream>
// using namespace std;

// int ls(int array[],int sz,int tar){
//     for(int i=0;i<sz;i++){
//         if(array[i]==tar){
//             return i;
//         }
    
//     }return -1;

// }
// int main(){
//     int array[]={2,4,5,8,20,60};
//     int sz = sizeof(array)/ sizeof(array[0]);
//     int tar = 20;

//      cout<<ls(array,sz,tar);
//      return 0;



// }

#include<iostream>
using namespace std;

void reverse(int array[],int sz){
    int start =0 , end = sz-1;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
int main(){
    int array[]={2,4,5,8,20,60};
    int sz = sizeof(array)/ sizeof(array[0]);
    reverse(array,sz);
    for(int i=0 ; i<sz ; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}