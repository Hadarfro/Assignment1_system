#include <stdio.h>
#include "NumClass.h"

int isPalindrome(int num) {
     int orgNum = num;   // Store the original number
    int reverNum = 0;   // Initialize the reversed number

    while (num > 0) {
        reverNum = reverNum * 10 + num % 10;
        num = num / 10;
    }

    return (reverNum == orgNum);  // Return 1 if palindrome, 0 otherwise
}


int isArmstrong(int num) {
int originalNum;
int remainder;
int n = 0;
int result = 0;
    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result = result + power(remainder, n);
        originalNum = originalNum / 10;
    }

    if (result == num){
        return 1; 
    }
    else{
        return 0; 
    }
}
