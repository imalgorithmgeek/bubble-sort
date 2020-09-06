#include <bits/stdc++.h>

/* bubble sort algorithm */
template <typename T>
void bubble_sort(T* array, size_t array_size) {
    bool is_swapped{true};
    for (size_t i{0};i < array_size - 1 && is_swapped; i++) {
        is_swapped = {false};
        for (size_t j{0};j < array_size - i - 1;j++) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
                is_swapped = {true};
            }
        }
    }
}

/* command line argument: array input */
int main(int argc, char* argv[]) {

    /* get the  array_size */
    ssize_t array_size = {std::stoi(argv[1])};

    /* allocate memory to store array elements */
    auto* array = new ssize_t[array_size];

    /* read the array elements */
    for (size_t i{0}; i < array_size; i+=1) {
        array[i] = {std::stoi(argv[i+2])};
    }

    /* print the array elements */
    std::cout << "\nArray elements:" << std::endl;
    for (size_t i{0}; i < array_size; i++) {
        std::cout << array[i] << " ";
    }

    /* compute the minimum two numbers */
    bubble_sort(array, array_size);

    /* print the sorted array elements */
    std::cout << "\nSorted elements:" << std::endl;
    for (size_t i{0}; i < array_size; i++) {
        std::cout << array[i] << " ";
    }

    /* de-allocate the heap memory */
    delete [] array;

    return 0;
}