#include <algorithm>
#include "iostream"
#include "string"

using namespace std;

bool palindromeChecker(int);

int main() {
    int palindromeNumber = 0;

    cout << "Palindrome Number Checker." << '\n' << "Number: ";
    cin>>palindromeNumber;
    palindromeChecker(palindromeNumber);

    return 0;
}

bool palindromeChecker(int palindromeNumber) {
    string reversedString = to_string(palindromeNumber);
    reverse(reversedString.begin(), reversedString.end());

    int reversedNumber = stoi(reversedString);

    bool result;

    cout << '\n';
    if (reversedNumber == palindromeNumber ) {
        cout << "Palindrome!";
        result = true;
    } else {
        cout << "Not Palindrome.";
        result = false;
    }
    cout << '\n';
    

    return result;
}