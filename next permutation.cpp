#include <iostream>
#include <vector>          // For using vector
#include <algorithm>       // For using next_permutation

using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Find the next permutation
    next_permutation(arr.begin(), arr.end());

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
