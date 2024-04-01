#include<stdio.h>
#include<math.h>
int main()
{
	int l,w,h,lsa,tsa;
	
	scanf("%d",&l);
	scanf("%d",&w);
	scanf("%d",&h);
	lsa=2*h*(l+w);
	tsa=2*(l*w+w*h+l*h);

	
	printf("%d\n",lsa);
	printf("%d\n",tsa);
	 return 0;
	 }
