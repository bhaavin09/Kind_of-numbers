#include <stdio.h>
#include<math.h>
int Armstrong(int n) {
    int temp1=n;
    int digi_count=0;
    while(temp1!=0){
         digi_count ++;
        temp1=temp1/10;
    }
    int temp=n;
    int sum=0;
    while(temp!=0)
    {
        int d=temp%10;
        sum=sum +pow(d,digi_count);
        temp=temp/10;
    }
    if(sum==n)
    return 2;
    else
    return 1;
}
int prime(int n)
{
    int div=0;
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            div=div+1;
        }
    }
    if(div==2){
        return 2;
    }
    else{
        return 1;
    }
}
int palindrome(int n)
{
    int r,sum=0,temp;
    temp = n;
    while(n > 0){
        r = n%10;
        sum = (sum*10) + r;
        n = n/10;
        }
        if(temp==sum)
        {
            return 2;
        }
        else{
            return 1;
        }
}
int krishnamurti(int n)
{
    int temp=n;
    int sum=0;
    while(temp!=0)
    {
        int fact_digi=1;
        int d=temp%10;
        for(int i=1;i<=d;i++){
            fact_digi=fact_digi*i;
        }
        sum=sum+fact_digi;
        temp/=10;
    }
    if(sum==n)
    return 2;
    else
    return 1;
}

int main() {
    int num;
    int user_choice=10;
    while(user_choice!=4){
    printf("Enter 1 for Armstong Number\nEnter 2 for Prime number \nEnter 3 for Palindrome number\nEnter 4 for Krishnamurti number\nEnter 5 to Exit\n");
    scanf("%d",&user_choice);
    switch(user_choice)
    {
    case 1:
    printf("Enter a number: ");
    scanf("%d",&num);
    if (Armstrong(num)==2) {
        printf("%d is an Armstrong number.\n", num);
    } 
    else if(Armstrong(num)==1) {
        printf("%d is not an Armstrong number.\n", num);
    }
   break;
   case 2:
   printf("Enter a number: ");
   scanf("%d",&num);
   if (prime(num)==2){
    printf("It is a prime number\n");
   }
   else if(prime(num)==1){
    printf("it is not a prime number\n");
   }
   break;
   case 3:
   printf("Enter a number: ");
   scanf("%d",&num);
   if(palindrome(num)==2)
   {
    printf("It is a Plaindrome number\n");
   }
   else if(palindrome(num)==1)
   {
    printf("Not a palindrome number\n");
   }
   break;
   case 4:
   printf("Enter a number: ");
    scanf("%d",&num);
    if (krishnamurti(num)==2) {
        printf("%d is a Krishnamurti number.\n", num);
    } 
    else if(krishnamurti(num)==1) {
        printf("%d is not a Krishnamurti number.\n", num);
    }
    break;
    default:
    printf("Exit,Thank you for using us\n");
    }
}
}

