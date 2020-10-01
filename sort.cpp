#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Sorting.h"
using namespace std;
int main()
{
    //srand(time(0));
    Sort so;
    cout << "Enter the size of array: ";
    int size,again;
    cin >> size;
    int arr[size];
    cout << "Enter the array: ";
    for(int i=0;i<size;i++)
        cin >> arr[i];

   /* for(int i=0;i<size;i++)
    {
        arr[i]= rand()&100+1;
    }
    so.display(arr,size);
    */
    cout << "Choose an option: " << endl;
    do
    {
        cout << "1. Insertion Sort" << endl;
        cout << "2. Bubble Sort" << endl;
        cout << "3. Selection Sort" << endl;
        cout << "4. Merge Sort" << endl;
        cout << "5. Quick Sort" << endl;
        int opt;
        cin >> opt;
        switch(opt)
        {
            case 1: cout << "-----INSERTION SORT-----" << endl;
                    cout << "Time Complexity: O(n^2)" << endl;
                    cout << "Space complexity: O(1)" << endl;
                    so.insertionSort(arr,size);
                    so.display(arr,size);
                    break;
             case 2: cout << "-----BUBBLE SORT-----" << endl;
                    cout << "Time Complexity: O(n^2)" << endl;
                    cout << "Space complexity: O(1)" << endl;
                    so.bubbleSort(arr,size);
                    so.display(arr,size);
                    break;
             case 3: cout << "-----SELECTION SORT-----" << endl;
                    cout << "Time Complexity: O(n^2)" << endl;
                    cout << "Space complexity: O(1)" << endl;
                    so.selectionSort(arr,size);
                    so.display(arr,size);
                    break;
             case 4: cout << "-----MERGE SORT-----" << endl;
                    cout << "Time Complexity: O(n*log n)"   << endl;
                    cout << "Space complexity: O(n)" << endl;
                    so.mergeSort(arr,size);
                    so.display(arr,size);
                    break;
            case 5 : cout << "Quick Sort" << endl;
                    so.quicksort(arr,0,size-1);
                    so.display(arr,size);
                    break;
        }
        cout << "Enter 1 for menu and 0 for exit: ";
        cin >> again;
    }while(again!=0);
    return 0;
}
