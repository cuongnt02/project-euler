/*
 * Cuong T. Nguyen
 * Semester 1 Thu, Aug 10, 2023
 * Solution for Project Euler archive problem - Code 4
 * Credit: projecteuler.net 
 * */

#include<iostream>

bool isPalindrome(int n) {
    int rev = 0;
    int num = n;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return n == rev;
}

int main() {
    constexpr int MIN = 100;
    constexpr int MAX = 1000;
    int product = 0;
    int max = 0;

    for (int i = MIN; i < MAX; i++) {
        for (int j = MIN; j < MAX; j++) {
            product = i * j;
            if (isPalindrome(product)) {
                std::cout << "The product of " << i << " and " << j << " made the palindrome " << product << '\n';
                max = product > max ? product : max;
            }
        }
    }

    
    std::cout << "The largest palindrome made from the product of 3 digit numbers is: " << max;
}
