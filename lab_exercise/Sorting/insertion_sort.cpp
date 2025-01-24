#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;

        while(j>=0 && key <a[j])
        {
            a[j+1] =a[j];
            j--;
        }
        a[j+1] =key;
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

    cout<<"Array elements are : ";
    print_arr(a,n);
    cout<<endl;
    
    cout<<"Sorted array: ";
    insertion_sort(a,n);
    print_arr(a,n);

    return 0;
}