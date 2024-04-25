#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void fibonacciSeries(int n) {
    int first = 0, second = 1, next;
    cout << "Fibonacci sequence up to " << n << " terms: ";
    first = 1;
    second =2;
    next = 5;

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
}

int main() {
    int number;
    //This if from main branch
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}












//this is from feature branch
