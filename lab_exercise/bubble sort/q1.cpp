#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    int pass=1;
    while(pass<=n-1)
    {
        for(int j=0;j<n-pass;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        pass++;
    }
}

void print_arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }

    cout<<"Array element are : ";
    print_arr(a,n);
    cout<<endl;
    
    cout<<"Sorted array: ";
    bubble_sort(a,n);
    print_arr(a,n);

    return 0;
}