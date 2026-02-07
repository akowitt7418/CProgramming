# include <iostream>

// Function Prototype
void rotateRight(const int src[], int dest[], int size, int k);

int main(void) {
    const int size = 7;
    int list[size] = {1, 2, 3, 4, 5, 6, 7};
    int new_list[size];

    // Rotate List
    rotateRight(list, new_list, size, 1);
    
    // Print the list
    for (int i : list) { // Range Based For Loop
        std::cout << i << " ";

    }
    std::cout << std::endl;

        // Print the new list
    for (int i : new_list) { // Range Based For Loop
        std::cout << i << " ";

    }
    std::cout << std::endl;

}

void rotateRight(const int src[], int dest[], int size, int k) {
    int new_first = size - (k % size);

    // Copy from new first till the end
    int i = 0;
    int j = new_first;
    while (j < size) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Copy from beginning till new first
    j = 0;
    while (j < new_first) {
        dest[i] = src[j];
        i++;
        j++;

    }

}