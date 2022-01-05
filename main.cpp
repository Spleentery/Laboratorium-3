#include <iostream>
#include <string>
using namespace std;
bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}
int main() {
    cout << "Enter TEXT: ";
    string text;
    cin >> text;

    try{
           if(isNumber(text) == true){
            cout << "result is integer " << stoi(text)<< endl;
        }
        else{
            throw "result is not int";
        }
    }
    catch(const char*) {
        cerr << "We caught an const char* exception.\nThe TEXT is NOT an integer :(\n" << text << endl;
    }
    return 0;
}
