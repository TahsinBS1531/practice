#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Function to find the nth prime number
int nthPrime(int n) {
    int count = 0, num = 2;
    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == n)
                return num;
        }
        num++;
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th prime number is: " << nthPrime(n) << endl;
    return 0;
}
