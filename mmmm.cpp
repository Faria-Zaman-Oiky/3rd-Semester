
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;
void merge(vector<string>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<string> leftArr(n1);
    vector<string> rightArr(n2);
    for (int i = 0; i < n1; i++) {
        leftArr[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++) {
        rightArr[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }


    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<string>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);


        merge(arr, left, mid, right);
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


    mergeSort(names, 0, n - 1);

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
