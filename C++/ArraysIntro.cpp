#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int arr[],int start,int end)
{
    while(start<end)
    {
       int temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
    }
}
void printFunc(int arr[], int size)
{
    for(int i=0;i<size;i++)
    cout << arr[i] <<" ";
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverseArr(arr, 0, n-1);
    printFunc(arr, n);
    
    return 0;
}
