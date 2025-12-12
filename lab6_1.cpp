#include<iostream>
using namespace std;

int main(){
    int S;
    int Even=0;
    int Odd=0;
    cout << "Enter an integer: ";
    cin >> S;
    while (S!=0){
        if (S%2==0){
            Even++;
        } else {
            Odd++;
        }
    cout<< "Enter an integer: ";
    cin >> S;
    }

    cout << "#Even numbers = "<< Even << "\n";
    cout << "#Odd numbers = "<< Odd << "\n";
    return 0;
}