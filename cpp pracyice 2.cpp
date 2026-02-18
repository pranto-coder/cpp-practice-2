#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[]={10,20,30,40};
    int arr2[]={50,60,70};
    int arr3[7];
    int count =0;
    for (int i=0;i<4;i++)
    {
        arr3[i]= arr1[i];
        count++;
    }
    for(int j=0;j<3;j++)
    {
        arr3[count]=arr2[j];
        count++;
    }
    for(int k=0;k<7;k++)
    {
        cout<<arr3[k]<<" ";
        count--;
    }
    return 0;
}
