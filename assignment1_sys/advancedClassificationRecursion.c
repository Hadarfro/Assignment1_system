#include <stdio.h>

#define int orgNum= num;  //the original number from the input
 #define int reverNum= 0;  //the starter for the reversed number

int isPalindromeRec(int num){
 
 if(num==0){
    if(reverNum==orgNum){
        return 1;
    }

 else{
    reverNum= reverNum*10 + num % 10;
    num= num/ 10;
    return isPalindromeRec(num);
 }
 }
}

int numLength(int num){
    if(num == 0){
        return o;
    }
    return 1 + numLength(num/10);
}

int sumPower(int num,int numPower){
 if(num == 0){
    return 0;
 }
    return pow(num%10,numPower) + sumPower(num/10,numPower);
 }
int pow(int num,int powerNum){
  if (powerNum==1)
  {
     num;
  }
  return num*pow(num,powerNum-1);
}

int isArmstrongRec(int num){
    int sum = 0;
int tmpNum = num;
int count = 0;

count = numLength(num);
sum = sumPower(num,count);
if(sum == num){
    return 1;
}

    return 0;

}