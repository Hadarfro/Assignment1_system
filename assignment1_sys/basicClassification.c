#include <stdio.h>

int isPrime(int num){
    if(num<2) return 0;
    for(int i = 0; i*i<=num; i++){
        if(num % i==0 ){
            return 0;
        }
    }
    return 1;
}

int factorial(int num){ 
    if (num == 0 || num == 1)
    {
        return1;
    }
    else{
        return num*factorial(num-1);
    }
    
}

int isStrong(int num){

int tmpNumber = num;
int sum = 0;

while (tmpNumber>0)
{
    int dig = tmpNumber % 10;
    sum = sum + factorial(dig);
    tmpNumber = tmpNumber/10;
}
if (sum==num)
{
  return 1;
}

    return 0;
}