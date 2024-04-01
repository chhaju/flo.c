#include<stdio.h>
#include<math.h>
int main()

{
	float p,i,n,A;
	scanf("%f",&p);
	scanf("%f",&i);
	scanf("%f",&n);
	A=p*(1+i/100)*pow(n,2);
	printf("%.2f\n",A);
	return 0;
  }
