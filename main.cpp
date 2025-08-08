#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string name;
    int age;
    int currentYear = 2025;
    
    cout<<"Enter your name:";
    getline (cin, name);
    cout<<"Enter your age:";
    cin >> age;
    
    int yearTurn60 = currentYear + (60 - age);
    
    cout << "hello " << name << " you are " << age << " years old!\n";
    cout << "You will turn 60 years old in the year " << yearTurn60 << ".\n";
    return 0;
}
