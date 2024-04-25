<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number;
    //This if from main branch
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
=======












//this is from feature branch
>>>>>>> feature-branch
