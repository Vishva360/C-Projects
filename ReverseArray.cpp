#include<iostream>
using namespace std;

void reverse(int arr[],const int SIZE);
int main()
{
    const int SIZE = 4;
    int arr[SIZE] = {1,2,3,4};
    cout << "Enter the elements of the array: " << endl;


    reverse(arr,SIZE);


  

    return 0;
}
void reverse(int arr[], const int SIZE)
{
  cout << "Before" << endl;
    for(int i = 0; i < SIZE; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\nAfter " << endl;
    for (int j = (SIZE - 1); j > -1 ; j--)
    {
        cout << arr[j] << " ";

    }
}
