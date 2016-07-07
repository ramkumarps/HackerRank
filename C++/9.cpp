#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num)
    {
    if(num ==1)
        return num;
    else
        return num*factorial(num-1);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
