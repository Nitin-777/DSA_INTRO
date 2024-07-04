#include <iostream>
#include <cmath> 
using namespace std;

long power(int n, int m) {
    long pro = 1;
    for (int i = 1; i <= m; i++) {
        pro *= n;
    }
    return pro;
}

double SquareRoot(int n, int prec) {
    if (n <= 0) {
        return 0.0; 
    }

    double low = 1, high = n;
    double precision = power(10, -prec); 

    while (high - low > precision) { 
        double mid = (low + high) / 2;
        if (mid * mid < n) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return (low + high) / 2;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;  
    int prec;
    cout << "Enter the precision(number of digits): ";
    cin >> prec;

    cout.precision(prec);
    cout << fixed; 
    cout << "Square root of " << n << " is approximately: " << SquareRoot(n, prec) << endl;

    return 0;
}
