#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
    char E_O[5], M_L[5];
    int num=n%10;
    if(num%2==0)
       E_O[5]="even";
    else
       E_O[5]="odd";
    if (num>5)
       M_L[5]="more";
    else if (num<5)
       M_L[5]="less";
    printf("number %d last digit is %s, the last digit is %d, and it is %s than 5",n, E_O , num, M_L);
	return (0);
}