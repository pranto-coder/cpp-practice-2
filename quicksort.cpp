#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int start,int end)
{
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if (arr[i]<pivot){
            count++;
        }
    }
    int pivot_index =start+count;
    swap(arr[pivot_index],arr[start]);
    int i=start;
    int j=end;
    while(i<pivot_index && j<pivot_index)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if (i<pivot_index && j<pivot_index)
        {
            swap(arr[j],arr[i]);
            i++;
            j--;
        }
        return pivot_index;

    }
}
void quicksort(int arr[],int start,int end)
{
    if (start>=end)return;
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);
}

int main()
{
 int arr[]={3,7,10,5,1,6,8,9};
 int n= sizeof(arr)/ sizeof(arr[0]);
 quicksort(arr,0,n-1);
 quicksort(arr,0,n-1);
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";

 }
 cout<<endl;
}
