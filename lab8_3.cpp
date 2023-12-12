#include <iostream>
using namespace std;
int agenumber,heightnumber,bounty;
int main(){
    cout << "Enter your age: ";
    cin >> agenumber;
    if(agenumber <= 25){
        cout << "Enter your height: ";
        cin >> heightnumber;
        if(heightnumber < 100){
            cout << "Your character = Chopper"; 
        }
        else if(heightnumber < 180){
            cout << "Your character = Usopp"; 
        }
        else{
            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty > 1100000000){
                cout << "Your character = Zoro";
            }
            else{
                cout << "Your character = Sanji";
            }
        }
    }
    else if(agenumber <= 60){
        cout << "Enter your bounty: ";
        cin >> bounty;
        if(bounty > 500000000){
            cout << "Your character = Jinbe";
        }
        else{
            cout << "Your character = Franky";
        }
    }
    else{
        cout << "Your character = Brook";
    }
}










}

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
