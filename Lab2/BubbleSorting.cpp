#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int main()
{
    int n;
    do {
        cout << "Input array size(positive number): ";
        cin >> n;
    } while (n < 1);
    vector<int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    auto start = chrono::high_resolution_clock::now();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    auto end = chrono::high_resolution_clock::now();
    chrono::nanoseconds duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "Time taken: " << duration.count() << "ns" << endl;
    for (int i : arr) {
        cout << i << " ";
    }
}