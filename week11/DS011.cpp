#include <iostream>

void inputNumbers(int* arr, int count) {
    for (int i = 0; i < count; ++i) {
        std::cin >> arr[i];
    }
}

int calculateSum(int* arr, int count) {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += arr[i];
    }
    return sum;
}

int findMax(int* arr, int count) {
    int max = arr[0];
    for (int i = 1; i < count; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int count;

    std::cin >> count;

    int* arr = new int[count];

    inputNumbers(arr, count);

    int sum = calculateSum(arr, count);

    int max = findMax(arr, count);

    std::cout << sum << " " <<  max << std::endl;
    

    delete[] arr;

    return 0;
}
