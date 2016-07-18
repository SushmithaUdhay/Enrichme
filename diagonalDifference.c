#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j,a[200][200],sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            cin>>a[i][j];
           
        }
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i==j)
                sum1=sum1+a[i][j];
        }
    }
            for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
                if((i+j)==(n-1))
                sum2=sum2+a[i][j];
        }
        
    }
    cout<<abs(sum1-sum2);
    return 0;
}
