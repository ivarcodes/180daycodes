#include<iostream>
using namespace std;
int main(){
    //sum of N natural numbers 
    // int number,sum=0;
    // cout<<"enter the Number:";
    // cin>>number;
    // for(int i=1;i<=number;i++){
    //     // sum=sum+i;//sum=0+1,sum=1+2,sum=3+3 (if the number is 3)
       
    // }
    //  cout<<(number*(number+1)/2);//faster compared to the above logic
    // // cout<<sum<<endl;
    
    //factorial of the given number
    // int num1,fact=1;
    // cout<<"enter number";
    // cin>>num1;
    // for(int i=1;i<=num1;i++){
    //     fact=fact*i;
    // }
    // cout<<fact;
    
    //prime number
    // int num3;
    // cout<<"Enter a Number";
    // cin>>num3;
    // if(num3<2)
    // {
    //     cout<<"not a prime";
    //     return 0;
    // }
    // else{
    //     for(int i=2;i<num3;i++){
    //         if(num3%i==0){
    //             cout<<"not a prime";
    //             return 0;
    //         }
           
    //     }
    //      cout<<"prime number";
    //      return 0;
    // }
    
    //fibonacci series
    int n, first = 0, second = 1, next;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }

    return 0;
}

    
    
    
    
