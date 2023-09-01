/*
 * Cuong T. Nguyen
 * Semester 1 Thu, Aug 10, 2023
 * Solution for Project Euler archive problem - Code 4
 * Credit: projecteuler.net 
 * */

 /* Solution for the palindrome problem - improved
  * The palindrome have the structure: abccba which will always be because
  * in the problem statement the product is of 3 digits numbers makes it become
  * always 6 digits.
  *
  * We can write the number as: 100000a + 10000b + 1000c + 100c + 10b + a
  * Reduce the expression: 100001a + 10001b + 1001c
  * We can factor the expression for 11 which will become: 11(9091a + 910b + 100c)
  * Now we can find the palindrome faster by using only 1 digit number a,b and c */

#include<iostream>

int largest_pal() {
    int num = 0;
    int pal = 0;
    for (int a = 9; a >= 1; a--) {
        for (int b = 9; b >= 0; b--) {
            for (int c = 9; c >= 0; c--) {
                num = 9091 * a + 910 * b + 100 * c;

                for (int divider = 90; divider >= 10; divider--) {
                    std::cout << "check" << '\n';
                    if (num % divider == 0) {
                        std::cout << "IN!" << '\n';
                        if (num / divider > 999) {
                            std::cout << "num: " << num << '\n';
                            break;
                        }
                        else {
                            pal = num * 11;
                        }
                    }
                    else { break; }
                }
            }
        }
    }
    return pal;
}

int main() {


    int largest = largest_pal();
    
    std::cout << "The largest palindrome made from the product of 3 digit numbers is: " << largest;
}
