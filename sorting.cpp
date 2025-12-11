#include<iostream>
using namespace std;

void printArray(int arr[], int y)
{
    for(int i=0; i<y; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int arr[], int y)
{
    for(int i=0; i<y-1; i++)
    {
        int minIndex = i;
        for(int j=i+1; j<y; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] =  temp;

    }
}
void InsertionSort(int arr[], int y)
{
    for(int i = 1; i<y; i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void BubbleSort(int arr[], int y)
{
    int pass = 1;

    while(pass < y)
    {
        for(int i=0; i<y; i++)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        pass++;
    }
}

int main()
{
    int y;
    cout<<"Enter the y of array: ";
    cin>>y;
    cout<<endl;

    int arr[y];
    for(int i=0; i<y; i++)
    {
        cout<<"enter value at index "<<i<<": ";
        cin>>arr[i];
    }

    cout<<endl<<"Original Array :-  ";
    printArray(arr, y);
    cout<<endl;

    int choise;
    
    cout<<endl<<"1 for Bubble sort ";
    cout<<endl<<"2 for Insertion sort ";
    cout<<endl<<"3 for Selection sort ";
    
    cout<<endl<<endl<<"Select number( 1 or 2 or 3) for  Sorting Technique : ";
    cin>>choise;
    
    switch (choise)
    {
    case 1:
        SelectionSort(arr, y);
        cout<<endl<<"\tArray is Sorted using Selection sort : ";
        break;    
    case 2:
        InsertionSort(arr, y);
        cout<<endl<<"\tArray is Sorted using Insertion sort : ";
        break;
    case 3:
        BubbleSort(arr, y);
        cout<<endl<<"\tArray is Sorted using Bubble sort : ";
        break;    
    default:
        break;
    }

    printArray(arr,y);


    return 0;
}