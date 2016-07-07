#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealcost;
    scanf("%lf",&mealcost);
    int tipPct,taxPct;
    cin>>tipPct;
    cin>>taxPct;
    double totalcost = mealcost+((mealcost*tipPct)/100)+((mealcost*taxPct)/100);
    double decimal = totalcost-(int)totalcost;
   // cout<<"decimal is"<<decimal;
    if(decimal <=0.5)
        totalcost = (int)totalcost;
    else
        totalcost = (int)(totalcost+1);
    cout<<"The total meal cost is "<<totalcost<< " dollars.";
    return 0;
}
