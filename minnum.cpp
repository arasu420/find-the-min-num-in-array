#include <iostream>
using namespace std;
int main()
{
    int i,n,min;
    int a[1000];
    cout<<"Enter the number : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<min;      
return 0;    
}
