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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int sum=-1000;
    for(int nRow = 1; nRow <5; nRow++)
        {
        for(int nCol=1; nCol <5; nCol++)
            {
            int temp  = arr[nRow-1][nCol-1]+arr[nRow-1][nCol]+arr[nRow-1][nCol+1] + arr[nRow][nCol] + arr[nRow+1][nCol-1]+arr[nRow+1][nCol]+arr[nRow+1][nCol+1];
            if(temp > sum)
                {
                sum = temp;
            }
            
        }
    }
    cout << sum;
    return 0;
}
