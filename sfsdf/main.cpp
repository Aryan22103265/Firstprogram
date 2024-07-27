#include <iostream>

using namespace std;

int averageprint(int arr[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int result = sum/n;
    return result;
}

int main()
{
    int n;
    cout<<"Enter number of integers : ";
    cin>>n;

    int* arr = new int[n];

    for(int i=0;i<n;i++){
        cout<<"Enter value : ";
        cin>>arr[i];
    }
    cout<<averageprint(arr,n);
    return 0;
}
