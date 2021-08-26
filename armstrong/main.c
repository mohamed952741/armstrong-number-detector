#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//name:mohamed ahmed hussein  ID:7233
int count(int x){
int i;
for(i=0;x;i++){x/=10;}
return i;
}

int main()
{int num,temp,rem;
int result = 0;
printf("enter number");
scanf("%d",&num);
temp=num;
while (temp) {
rem = temp%10;
result+=pow(rem,count(num));
temp/=10;
}
if(result==num){
    printf("the number %d is an Armstrong number",num);
}
else{printf("the number %d is not an Armstrong number",num);}
    return 0;
}
