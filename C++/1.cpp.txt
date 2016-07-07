#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

 // Declare second integer, double, and String variables.
    int i2;
    double d2;
    string s2;
    cin>>i2;
    cin>>d2;
    cin.ignore();
    getline(cin,s2);
    cout<<i+i2<<endl;
    printf("%0.1f\n",d+d2);
    s.append(s2.c_str()); 
    printf("%s",s.c_str());
    return 0;
}