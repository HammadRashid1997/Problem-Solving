#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " is the factor of " << n << endl;
        }
    }
    return 0;
}
