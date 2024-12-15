
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
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

    // Measure the time taken by insertion sort
    auto start = chrono::high_resolution_clock::now();
    insertionSort(numbers);
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = end - start;
    cout << "Insertion sort took " << elapsed.count() << " seconds." << endl;

    return 0;
}
