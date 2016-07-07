#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,i=0;
    cin>>N;

    string sphone,sname,snumber;
    std::map<string,int> sphoneMap;
     stringstream ss;
    
    try
        {
    while(i<=N)
     {
       ++i;
       getline(cin,sphone);
      
       ss<<sphone;
       ss>>sname>>snumber;
       int number = atoi(snumber.c_str());
     
       sphoneMap.insert(std::pair<string,int>(sname,number));
       sphone.erase();
       ss.clear();
    }
    string queryname;
    while(1)
        {
        cin>>queryname;
        if(!queryname.size())
            break;
            if(sphoneMap.find(queryname) == sphoneMap.end())
                cout<<"Not found"<<endl;
            else
                cout<<queryname.c_str()<<"="<<sphoneMap[queryname]<<endl;
        queryname.clear();
        
    }}
    catch(...)
        {
        cout<<"exception caught!";
    }
    return 0;
}
