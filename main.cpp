#include <iostream>
using namespace std;

int main() {
    cout << "Enter two numbers: ";
    int num;
    int num2;
    cin >> num;
    cin >> num2;

    try{
        int c = num/num2;
        if(num%num2 ==0 ){
            cout << "result is integer " << c << endl;
        }
        else{
            throw "result is double";
        }
    }
    catch(const char*) {
        cerr << "We caught an const char* exception.\nCan't divide " << num << " by " << num2 << endl;
    }
    return 0;
}
