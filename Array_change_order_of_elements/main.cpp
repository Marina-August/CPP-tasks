// Changing of the sequence of elements in Array depending on user Input of step shift.

#include <iostream>

using namespace std;

void ChangeArray(int array[], int array_2[], int size, int number){

    for (int i = 0, j = 0; i < size; ++i){
        if (number >= size) {
           number = number%size;
        }
        if ((i+number) < size) {
            j = i + number;
        }else{
            j = i - (size-number);
            if (j > (size-1)){
            }
        }
        array_2 [j] = array[i];
    }
}

int main() {
    const int SIZE = 8;
    int array_1 [SIZE] = {1,2,3,4,5, 6, 7, 8};
    int array_2[SIZE];
    int number;

    cout <<"Enter a number "<<endl;
    cin >>number;

    ChangeArray(array_1, array_2, SIZE,number);

    for (int i = 0; i < SIZE; ++i){
        cout << array_2 [i]<<" ";
    }

    return 0;
}
