/*
 * Cuong T. Nguyen
 * Semester 1 Thu, Aug 10, 2023
 * Solution for Project Euler archive problem - Code 2
 * Credit: projecteuler.net 
 * */

#include<iostream>

int main(int argc, char* argv[]) {
    int start = 0;
    int next = 1;
    int sum = 0;

    while (start < 4000000) {
        if (start % 2 == 0) {
            sum += start;
        }
        if (next % 2 == 0) {
            sum += next;
        }
        start += next;
        next += start;
    }
    
    std::cout << "The sum of all even-valued terms in the fibonacci sequence below 4 mil is : "
        << sum;
    

    return 0;
}
