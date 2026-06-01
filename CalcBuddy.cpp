#include <iostream>
using namespace std;
int main(){
    
    //variables
    float num;
    char op;
    char choice;
    float result;

     //input by user
        cout<<"Enter number 1: "<<endl;;
        cin >>result;

    while (true) {

         //operation input
        cout << "Enter operation: "<<endl;
        cin >> op;

        //input by user
        cout<<"Enter number 2: "<<endl;
        cin >>num;

        //operation management
        if (op == '+'){
            result+=num;
        }
        else if(op == '-') {
            result -= num;
        }
        else if(op == '/') {
            if(num == 0){
                cout<<"Not defined (cannot divide by zero)"<<endl;
                continue;
             }
            result /= num;
        }
        else if(op == '*') {
            result *= num;
        }
        else{
            cout<<"Invalid operator,choose from +,-,/,*";
            continue;
        }

        
        //result extraction
        cout << "Type 'r' for result and 'c' to continue"<<endl;
        cin >> choice;
        if (choice != 'c' && choice != 'r'){
            cout<<"Invalid input";
            continue;
        }
        if (choice == 'r') {
            cout<<"Your answer is: "<<result<<endl;
            cout<<" Thank you for using CalcBuddy"<<endl;
            break;
        }
        
    }

    return 0;
}