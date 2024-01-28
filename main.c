  #include <stdio.h>
  #include "NumClass.h"
  #include "advancedClassificationLoop.c"
#include "advancedClassificationRecursion.c"
  #include "basicClassification.c"  
   

int main(){
    
    int num1;
    int num2;


    scanf("%d %d", &num1 , &num2);

printf("The Armstrong numbers are:");
     for (int i = num1; i <= num2; ++i) {
        if (isArmstrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

//palindrome numbers between num1 and num2
    printf("The Palindromes are:");
    for (int i = num1; i <= num2; ++i) {
        if (isPalindrome(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    // Prime numbers between num1 and num2
    printf("The Prime numbers are:");

    for (int i = num1; i <= num2; ++i) {
        if (isPrime(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");

    // Strong numbers between num1 and num2
    printf("The Strong numbers are:");
    for (int i = num1; i <= num2; ++i) {
        if (isStrong(i)) {
            printf(" %d", i);
        }
    }
    printf("\n");
    
    
    

    

   
return 0;

}
