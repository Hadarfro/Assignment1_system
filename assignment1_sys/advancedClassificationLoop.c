#include <stdio.h>

#define int orgNum= num;  //the original number from the input
#define int reverNum= 0;  //the starter for the reversed number

int isPalindrome(int num){
    
    while(num > 0){  // in the loop we reverse the num
        reverNum= reverNum*10 + num % 10;
        num= num / 10;
    }

    if(reverNum == orgNum)return 1;

    return 0;
}

int isArmstrong(int num){
int sum = 0;
int tmpNum = num;
int count = 0;

while (tmpNumber>0)
{
    tmpNumber = tmpNumber/10;
    count++;
}
while (tmpNumber>0)
{
    int dig = tmpNum % 10;
    int powerDig = dig;
    for (int i = 1; i < count; i++)
    {
        powerDig = powerDig*dig;
    }
    sum = sum + powerDig;
    tmpNum = tmpNum/10;
}
if(sum == num){
    return 1;
}

    return 0;
}