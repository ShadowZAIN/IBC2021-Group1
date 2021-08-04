#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int N_cities = 5;

bool all_unique(const vector<int>& array) {
    for (int i = 0; i < array.size() - 1; i++) {
        for (int j = i + 1; j < array.size(); j++) {
            if (array[i] == array[j]) { return false; }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    if (all_unique(array)) { cout << "Unique"; }
    else { cout << "Not unique"; };
}