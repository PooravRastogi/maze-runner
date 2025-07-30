#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int sum = 0;
    float average;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    average = static_cast<float>(sum) / n;
    cout << "Average: " << average << endl;

    return 0;
}
