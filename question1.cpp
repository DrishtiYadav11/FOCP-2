#include <iostream>
using namespace std;

int Prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void findFactors(int n) {
    cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int nextPrime(int n) {
    while (true) {
        n++; 
        if (isPrime(n)) return n;
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "Next prime number after " << n << " is " << nextPrime(n) << "." << endl;
    } else {
        cout << n << " is NOT a prime number." << endl;
        findFactors(n);
    }

    return 0;
}