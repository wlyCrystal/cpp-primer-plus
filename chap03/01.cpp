#include <iostream>
using namespace std;

int main(){
    const int SCALER = 12;
    int inch_height;
    cout << "Enter your height in integer inches: ___\b\b\b";
    cin >> inch_height;
    cout << "Your height is " << inch_height/SCALER << " feet " << inch_height%SCALER << " inch." << endl;
    return 0;
}