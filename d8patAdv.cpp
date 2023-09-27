#include<iostream>
using namespace std;
int main(){
    int n=5;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    
    // }
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"   ";
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<"  ";
            
    //     }
    //     cout<<endl;
    // }
    // for(int i=1;i<=n;i++){
        
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"  ";
    //     }
    //     char let='A';
    //     for(int j=1;j<=i;j++,let++){
    //         cout<<let<<" ";
    //     }
    //     cout<<endl;
    // }

    // homework (27/10/2023)
     for(int i=1;i<=5;i++){
         for(int j=1;j<=n-i;j++){
             cout<<"   ";
         }
         for(int j=i;j>=1;j--){
             cout<<j<<"  ";
         }
         cout<<endl;
     }
    
    
}
     
