#include <iostream>

int computeSum(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum;
}
int calculateProduct(int numbers[], int length) {
    int product = 1;
    for (int i = 0; i < length; i++) {
        product *= numbers[i];
    }
    return product;
}
int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid array size." << std::endl;
        return 1;
    }

    int numbers[size];

    std::cout << "Enter " << size << " numbers " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

   
    int sum = computeSum(numbers, size);
    std::cout << "Sum of numbers: " << sum << std::endl;


    int product = calculateProduct(numbers, size);
    std::cout << "Product of numbers: " << product << std::endl;

    return 0;
}