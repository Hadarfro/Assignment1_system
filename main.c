  #include <stdio.h>
  #include "NumClass.h"
  #include "advancedClassificationLoop.c"
#include "advancedClassificationRecursion.c"
  #include "basicClassification.c"  
   

int main(){
    
    int num1;
    int num2;


    scanf("%d %d", &num1 , &num2);


    // Prime numbers between num1 and num2
    printf("the prime numbers are:");

    for (int i = num1; i <= num2; ++i) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    // Strong numbers between num1 and num2
    printf("the strong numbers are:");
    for (int i = num1; i <= num2; ++i) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    
    //palindrome numbers between num1 and num2
    printf("the Palindrome is:");
    for (int i = num1; i <= num2; ++i) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    

    printf("the Armstrong numbers are:");
     for (int i = num1; i <= num2; ++i) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("the ArmstrongRec numbers are:");
     for (int i = num1; i <= num2; ++i) {
        if (isArmstrongRec(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    
printf("the PalindromeRec is:");
    for (int i = num1; i <= num2; ++i) {
        if (isPalindromeRec(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
return 0;

}
