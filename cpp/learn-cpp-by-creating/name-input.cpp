#include "iostream"
#include "string"

using namespace std;                               // So you don't have to use std:: all the time.

int main() {
    string firstName;

    cout << "What is your name?\n";
    getline(cin, firstName);                     // Stores everything in a string until new line.

    cout << "Nice to meet you " << firstName <<  "." << '\n'
         << "Your name has " << firstName.length() << " letters" <<  "." << '\n'
         << "Your name starts with " << firstName.front() << "." << endl;

    return 0;
}