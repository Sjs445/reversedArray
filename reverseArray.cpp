#include<iostream>

using namespace std;

void reverseArray(int arr[], int const size);

int main()
{
  int const size=5;
  int arr[size]={1, 2, 3, 4, 5};

cout<<"Array original..\n";
  for(int i=0; i<size; i++)
  {
    cout<<arr[i]<<"\n";
  }

reverseArray(arr, size);

  return 0;
}

void reverseArray(int arr[], int const size)
{
  cout<<"\nReversed: \n";
  for(int i=size-1; i>=0; i--)
  {
    cout<<arr[i]<<"\n";
  }
}
