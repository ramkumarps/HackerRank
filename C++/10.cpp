#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int temp=n;
    int count=0;
    vector<int> vCount;
    while(temp)
        {
        int rem = temp%2;
        if(!rem)
            {
                vCount.push_back(count);
                count=0;
        }
        else
            {
            count = count+1;
        }
        temp = temp/2;
    }
    vCount.push_back(count);
    vector<int>::iterator vIter;
    int maxcount=0;
    for(vIter = vCount.begin();vIter!=vCount.end();vIter++)
        {
        if(*vIter > maxcount)
            maxcount = *vIter;
    }
    
    cout<<maxcount;
    return 0;
}
