#include<stdio.h>
int main()
{
char c;
printf("Whether you have paid your creditors within 180 days of the bill date. Press y for yes and n for No\n");
scanf("%c",&c);
if(c=='y')
printf("You are not liable to reverse Input Tax credit for such Invoices\n");
else
printf("You are liable to reverse Input Tax credit for such invoices\n");
return 0;
}