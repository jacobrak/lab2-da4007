#include <iostream>
#include <cmath>
#include <string> // convert string
using namespace std;


bool check_if_prime(int n) {
    // Base condition 0 and 1 are not primes, however lowest number input is 2, still decided to keep it.
    if (n <= 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) 
            return false; 
    }
    return true; 
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Argument expected"; // error message
        return 1;
    }
    int m = stoi(argv[1]); // convert the string
    for (int i=2; i<=m; ++i){
        if(check_if_prime(i)==true)
            cout << i << endl;
    }
    return 0;
}