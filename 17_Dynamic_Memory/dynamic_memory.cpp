# include <iostream>


void printArr(int* arr, int size);
int doubleArr(int* arr, int size);
int* doubleArrNew(const int* arr, int size);

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    printArr(arr, SIZE);

    int* double_array = doubleArr(arr, SIZE);
    printArr(double_array, SIZE);

    int* new_array = doubleArrNew(arr, SIZE);
    printArr(new_array, SIZE);

    return 0;
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int* doubleArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
    return arr;
}

int* doubleArrNew(const int* arr, int size) {
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i] * 2;
    }
    return newArr;
}