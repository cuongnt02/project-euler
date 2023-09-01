/*
 * Cuong T. Nguyen
 * Semester 1 Thu, Aug 10, 2023
 * Solution for Project Euler archive problem - Code 1
 * Credit: projecteuler.net 
 * */
#include<iostream>

int main(int argc, char* argv[]) {
    constexpr int MAX = 1000;
    int sum = 0;

    for (int i = 0; i < MAX; i++) {
        if (i % 3 == 0 || i % 5 == 0) sum += i;
    }

    std::cout << "The sum of all multiples of 3 and 5 below 1000: " << sum;

    return 0;
}
