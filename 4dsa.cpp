#include<conio.h>
#include<iostream>
using namespace std;

void show(int arr[],int size);
int main()
{
int *arr, pos, item, size, n;

cout<<"Enter size of array: ";
cin>>size;
arr = new int[size];

cout<<"Enter no. of elements to enter: ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Enter data value " <<i+1 <<": ";
cin>>arr[i];
}
show(arr,n);

cout<<"\n Enter data-value to insert: ";
cin>>item;
cout<<"\n Enter index position where to insert: ";
cin>>pos;

for(int j=n; j>=pos; j--)
{
arr[j+1] = arr[j];
}
arr[pos] = item;
n++;

show(arr,n);
//delete []a;

getch();
return 0;
}

void show(int arr[],int size)
{
cout<<"values in the array: ";
for(int i=0;i<size;i++)//i want to enter 4 element so my iteration will go from 0 to 4
{
cout<<arr[i]<<" ";
}

}