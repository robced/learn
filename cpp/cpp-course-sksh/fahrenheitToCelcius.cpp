#include "iostream"
using namespace std;

int main() {

    int fahrenheitInput = 0;

    cout<<"Enter Fahrenheit: ";
    cin>>fahrenheitInput;

    int celsiusOutput = (int)((5.0/9)*(fahrenheitInput-32));

    cout<<"Celsius: "<<celsiusOutput<<endl;
    return 0;
}