/*
 * Cuong T. Nguyen
 * Semester 1 Thu, Aug 10, 2023
 * Solution for Project Euler archive problem - Code 3
 * Credit: projecteuler.net 
 * */

#include<iostream>
#include<cmath>

bool isPrime(int n){
    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            prime = false;
            break;
        }
    }
    return prime;
}

int nextPrime(int prime) {
    return isPrime(++prime) ? prime : nextPrime(prime);
}

int main(int argc, char* argv[]) {
    long long int target = 600851475143;
    int prime = 2;

    do {
        if (target % prime == 0) {
            target /= prime;
        }
        else {
            prime = nextPrime(prime);
        }
    } while (target > 1);
        

    std::cout << "The largest prime factor of : " << target << " is " << prime;
    return 0;
}

