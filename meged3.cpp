
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }
    while (i < n1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }
    while (j < n2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    srand(time(0));
    ofstream unsortedFile("unsorted_numbers.txt");

    if (!unsortedFile) {
        cerr << "Error opening file to write unsorted numbers!" << endl;
        return 1;
    }

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
        unsortedFile << numbers[i] << endl;
    }

    unsortedFile.close();
    cout << "Unsorted numbers have been written to unsorted_numbers.txt." << endl;

    auto start = chrono::high_resolution_clock::now();

    mergeSort(numbers, 0, n - 1);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;

    ofstream sortedFile("sorted_numbers.txt");

    if (!sortedFile) {
        cerr << "Error opening file to write sorted numbers!" << endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        sortedFile << numbers[i] << endl;
    }

    sortedFile.close();
    cout << "Sorted numbers have been written to sorted_numbers.txt." << endl;
    cout << "Merge sort took " << elapsed.count() << " seconds." << endl;

    return 0;
}
