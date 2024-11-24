
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

void quickSort(vector<string>& arr, int low, int high);

int partition(vector<string>& arr, int low, int high) {
    string pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(vector<string>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

string generateRandomName(int length) {
    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string name = "";

    for (int i = 0; i < length; i++) {
        int randomIndex = rand() % characters.size();
        name += characters[randomIndex];
    }

    return name;
}

int main() {
    srand(time(0));

    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    if (n < 1 || n > 1000000) {
        cout << "Invalid number of names. Please enter a number between 1 and 1000000.\n";
        return 1;
    }

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        int nameLength = rand() % 10 + 3;
        names[i] = generateRandomName(nameLength);
    }

    ofstream unsortedFile("unsorted.txt");
    if (unsortedFile.is_open()) {
        for (const auto& name : names) {
            unsortedFile << name << endl;
        }
        unsortedFile.close();
        cout << "Random names saved to 'unsorted.txt'.\n";
    } else {
        cerr << "Failed to open the file for writing.\n";
        return 1;
    }

    quickSort(names, 0, n - 1);
    ofstream outFile("sorted.txt");
    if (outFile.is_open()) {
        for (const auto& name : names) {
            outFile << name << endl;
        }
        outFile.close();
        cout << "Names sorted and saved to 'sorted.txt'.\n";
    } else {
        cerr << "Failed to open the file for writing.\n";
        return 1;
    }

    return 0;
}
