#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
      {
        for(k=n-i;k!=0;k--)
            {
            cout<<" ";
            
        }
        k--;
        for(j=0;j<i;j++)
            {
            cout<<"#";
            
        }
        cout<<"\n";
    }  
      
    return 0;
}
