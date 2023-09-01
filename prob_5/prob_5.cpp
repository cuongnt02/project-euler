#include<iostream>

bool check_evenly(long long int n) {
    if (n % 14 != 0 || n % 18 != 0 || n % 20 != 0) return false;
    return true;
}

int main() {
    long long int value = 46189;

    while (true) {
        if (check_evenly(value)) break; 
        value++;
    }


    std::cout << "Value: " << value;
    return 0;
}
