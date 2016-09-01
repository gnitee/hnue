#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
	printf("chu so can tim la:\n");
	for(int i=100;i<=999;i++)
	{
		int n=i;
		int tonglp=0;
		int m;
		 while(n!=0)
		  {
		  	m=n%10;
		  	n=n/10;
		  	tonglp=tonglp+pow(m,3);
		  }
		    if(tonglp==i)
		     printf("%d\n",i);
	}
	getch();
	return 0;
}
