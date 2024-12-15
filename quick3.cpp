
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pivot element
    int i = low - 1; // Index of smaller element

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0));
    int n;

    cout << "How many numbers do you want to input (max 100,000)? ";
    cin >> n;

    if (n < 1 || n > 100000) {
        cout << "Please enter a number between 1 and 100,000." << endl;
        return 1;
    }

    vector<int> numbers(n);
    cout << "Generating " << n << " random numbers..." << endl;
    for (int i = 0; i < n; ++i) {
        numbers[i] = rand() % 1000000;
    }

    // Measure the time taken by quick sort
    auto start = chrono::high_resolution_clock::now();
    quickSort(numbers, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;
    cout << "Quick sort took " << elapsed.count() << " seconds." << endl;

    return 0;
}
