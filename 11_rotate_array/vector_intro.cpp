# include <iostream>
# include <vector>

void print(std::vector<int>& v);

int main(void) {
    // Create a vector
    std::vector<int> v; // Empty vector (dynamic array) of integers

    // Create and initialize
    std::vector<int> v2 (1, 2, 3, 4, 5, 6);

    // Provide the size and default value
    std::vector<int> v3(5, 10); //(5 elements, each set to 10)
    print(v3);

    // Copy from antoher vector
    std::vector<int> v4(v2);


    // Get the size
    std::cout << "size v: " << v.size() << std::endl;
    std::cout << "size v2: " << v2.size() << std::endl;

    // First and last elements
    std::cout << "v2 first: " << v2.front() << std::endl;
    std::cout << "v2 last: " << v2.back() << std::endl;

    // Add the elements in the end
    v2.push_back(8);
    print(v2);

    // Remove from the end
    v4.pop_back();
    print(v4);

    // Iterator - object points to a certain location in the vector
    // begin() - points to the first element
    // end() - points to the one past the last element

    std::cout << *v2.begin() << std::endl;
    std::cout << *v2.begin() + 2 << std::endl;

    // Insert (location)


    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(), i++;) {
        std::cout << v[i] << " ";
    }
    std::cout << " ";
}