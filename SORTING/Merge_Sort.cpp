#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, vector<int>& left, vector<int>& right) {
    int i = 0, j = 0, k = 0;

    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < left.size()) {
        arr[k++] = left[i++];
    }

    while (j < right.size()) {
        arr[k++] = right[j++];
    }
}

void mergeSort(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;

    int mid = n / 2;

    vector<int> left(arr.begin(), arr.begin() + mid);
    vector<int> right(arr.begin() + mid, arr.end());

    mergeSort(left);
    mergeSort(right);

    merge(arr, left, right);
}

int main() {
    vector<int> arr = {5, 1, 3, 0, 4, 9, 6};

    cout << "Before sorting:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    mergeSort(arr);

    cout << "After sorting:\n";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}