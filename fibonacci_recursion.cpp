#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if(n == 0)return 0;
    if(n == 1)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    int k=fibonacci(n);
    cout<<k;
    return 0;
}
//void input(int arr[],int n)
//{
//    for(int i=0; i<n; i++)
//    {
//        arr[i]=arr[i]+10;
//    }
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    //int arr2[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//
//    input(arr,n);
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}
//void  square_of_element(int *arr,int n);
//void  square_of_element(int *arr,int n)
//{
//    for(int i=0; i<n; i++)
//    {
//       cin>>arr[i];
//    }
// for(int i=0; i<n; i++)
//    {
//       arr[i]*=arr[i];
//    }
//
//}
//int main()
//{
//    int n;
//    cin>>n;
//    int arr[n];
//    square_of_element(arr,n);
//    for(int i=0; i<n; i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    return 0;
//}
