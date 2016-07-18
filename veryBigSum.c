#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long int i,n,a[200],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
      
    }
    for(i=0;i<n;i++)
        {
        sum=sum+a[i];
    }
cout<<sum;
    return 0;
}
