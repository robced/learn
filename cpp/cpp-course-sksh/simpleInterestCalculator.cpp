#include "iostream"
using namespace std;

int main () {

    cout<<"Calculate the Simple Interest.";

    int p;
    cout<< "Please enter the percentage:" <<endl;
    cin>>p;

    int r;
    cout<< "Please enter the rate:" <<endl;
    cin>>r;

    int t;
    cout<< "Please enter the time:" <<endl;
    cin>>t;

    int Si = (p*r*t)/100;

    cout<< "The Simple Interest is" <<endl;
    cout<<Si;

    return 0;
}