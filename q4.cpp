#include <iostream>
using namespace std;

void printSpiral(int n) {
    int arr[n][n], val = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (val <= n * n) {
        for (int i = left; i <= right; i++) arr[top][i] = val++; // Left to Right
        top++;
        for (int i = top; i <= bottom; i++) arr[i][right] = val++; // Top to Bottom
        right--;
        for (int i = right; i >= left; i--) arr[bottom][i] = val++; // Right to Left
        bottom--;
        for (int i = bottom; i >= top; i--) arr[i][left] = val++; // Bottom to Top
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size (N): ";
    cin >> n;
    printSpiral(n);
return 0;
}