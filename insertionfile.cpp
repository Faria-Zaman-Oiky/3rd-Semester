
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
void insertionSort(vector<int>& numbers) {
    int n = numbers.size();
    for (int i = 1; i < n; ++i) {
        int key = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j = j - 1;
        }
        numbers[j + 1] = key;
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


    insertionSort(numbers);


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

    return 0;
}
