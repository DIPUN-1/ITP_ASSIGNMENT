#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";


    cin >> num;

    if (num < 0) {

        cout << "Negative numbers cannot be perfect squares." << endl;

        return 0;
    }

    bool isPerfectSquare = false;

    for (int i = 0; i * i <= num; i++) {
        if (i * i == num) {
            isPerfectSquare = true;
            break;
        }
    }

    if (isPerfectSquare)
        cout << num << " is a perfect square." << endl;

    else
    
        cout << num << " is not a perfect square." << endl;

    return 0;
}
