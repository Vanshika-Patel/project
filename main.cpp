#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,i;
    int arr[n];
    int runsum[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        runsum[i]=sum;
    }
    for(i=0;i<n;i++)
    {
        cout<<runsum[i]<<endl;
    }
    return 0;
}
