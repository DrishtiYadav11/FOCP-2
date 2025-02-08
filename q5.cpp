#include <iostream>
using namespace std;

void rotate90(int n, int mat[][10]) {
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--)
            cout << mat[j][i] << " ";
        cout << endl;
    }
}

int main() {
    int n, mat[10][10];
    cout << "Enter size: ";
    cin >> n;
    
    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    cout << "Rotated Matrix:\n";
    rotate90(n,mat);
}