#include <iostream>
using namespace std;
int primorial(int n);
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = primorial(n);
    cout << "Primorial of " << n << " is: " << result << endl;

    return 0;
}
int primorial(int n)
 {
    if (n < 1) {
        return 1;
    }

    int num = 2;
    int primorial = 1;
    int prime_count = 0;

    while (prime_count < n) {
        bool is_prime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            primorial *= num;
            prime_count++;
        }

        num++;
    }

    return primorial;
}
