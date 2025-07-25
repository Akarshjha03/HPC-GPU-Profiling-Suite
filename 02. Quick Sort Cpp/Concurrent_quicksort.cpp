#include <iostream>
#include <vector>
#include <thread>
#include <algorithm>

using namespace std;

// Partition function (Lomuto partition scheme)
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Concurrent Quick Sort using threads
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Spawn two threads for left and right partitions
        thread left, right;

        if (pi - low > 1000) {
            left = thread(quickSort, ref(arr), low, pi - 1);
        } else {
            quickSort(arr, low, pi - 1);
        }

        if (high - pi > 1000) {
            right = thread(quickSort, ref(arr), pi + 1, high);
        } else {
            quickSort(arr, pi + 1, high);
        }

        // Join threads if they were created
        if (left.joinable()) left.join();
        if (right.joinable()) right.join();
    }
}

int main() {
    vector<int> arr = {24, 97, 40, 67, 12, 87, 66, 34, 21, 10};

    cout << "Unsorted Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
