//  Implementation of bubble sort

#include  <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i =0 ; i  < n; i++){
        cout << arr[i] << "\t";
    }
    cout << endl;
}

void swap(int arr[], int i1, int i2){

    int temp  = arr[i1];
    arr[i1] = arr[i2];
    arr[i2] = temp;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i< n ; i++){
        for(int j =0 ; j < n - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
            }
        }
    }
}



int main(){

    int arrSize;
    cout << "How many numbers you'd like to sort? : ";
    cin >>  arrSize;
    cout << "array size " << arrSize;
    cout <<  endl ;

    int numbers[arrSize];
    for(int i  = 0; i < arrSize; i++ ){
        cout << "Enter the " << i + 1 << " number : " ;
        cin >>  numbers[i];
    }

    cout << "-----THE UNSORTED ARRAY-----" <<endl;
    printArr(numbers, arrSize);

    bubbleSort(numbers,arrSize);

    cout << "-----THE SORTED ARRAY-----" <<endl;
    printArr(numbers, arrSize);


    return 0;
}
