#include<iostream>
using namespace std;
int main(){

    
    //day 11 while loop,do while loop and switch statement
    //even number program using while loop
    int num;
    cout<<"Enter the number";
    cin>>num;
    int i=1;
    // while(i<=num){
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    //     i++;
    // }
    
    //odd number program using the while loop
    
    // while(i<=num){
    //     if(i % 2 != 0){
    //         cout<<"odd :"<<i<<" ";
    //     }
    //     i++;
    // }
    //factorial of a number
    int fact=1;
    // while(i<=num){
    //     fact=fact*i;
    //     i++;
    // }
    
    // cout<<fact<<" ";
    
    
    //factorial using do while loop
//     do{
//         fact=fact*i;
//         i++;
//     }while(i<=num);
//     cout<<fact<<" ";


// num 1 to n not divisible by 3 and 5 using while loop
// while(i<=num){
//     if(i % 3 != 0  &&  i % 5 != 0){
//         cout<<i<<"  ";
        
//     }i++;
// }

// int month;
// cout<<"Enter a Number to display month ";
// cin>>month;
// switch(month){
//     case 1:
//     cout<<"Jan";
//     break;
//     case 2:
//     cout<<"feb";
//     break;
//     case 3:
//     cout<<"march";
//     break;
//     case 4:
//     cout<<"april";
//     break;
//     case 5:
//     cout<<"may";
//     break;
//     case 6:
//     cout<<"june";
//     break;
//     case 7:
//     cout<<"july";
//     break;
//     case 8:
//     cout<<"Aug";
//     break;
//     case 9:
//     cout<<"Sep";
//     break;
//     case 10:
//     cout<<"Oct";
//     break;
//     case 11:
//     cout<<"nov";
//     break;
//     case 12:
//     cout<<"dec";
//     default:
//     cout<<"invalid input";
    
    
// }
//printing A-Z using while loop
// char let='A';
// while(let<='Z'){
//     cout<<let<<" ";
//     let++;
// }

//prime or not


    if (num <= 1) {
        cout << "Not Prime" << endl;
    } else {
        int i = 2;
        while (i <= num / 2) {
            if (num % i == 0) {
                cout << "Not Prime" << endl;
                return 0; 
            }
            i++;
        }
        cout << "Prime" << endl;
    }

    return 0;
}

 
