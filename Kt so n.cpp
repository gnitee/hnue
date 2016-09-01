#include<stdio.h>
#include<conio.h>
#include<math.h>

int SNT(int n)
{
	int kt = 1;
	for(int i=2; i<sqrt(n); i++)
	{
		if(n%i == 0)
			kt = 0;
	}
	if(kt == 0)
		printf("%d khong phai la SNT", n);
	else
		printf("%d la SNT", n);
}

int soDoiXung(int n)
 {
 	int kt = 1;
 	int k, i=-1, dem = 0;
 	int a[10];
 	while(n > 0)
 	{
 		i++;
 		k = n%10;
 		a[i]=k;
 		n = n/10;	
	}
	dem=i;
	i=0;
	while(dem>0)
	{
		if(a[dem]!=a[i])
			kt = 0;
		i++;
		dem--;
	}
	
	if(kt == 0)
		printf("Day khong phai so doi xung");
	else
		printf("Day la so doi xung");
 }

int soChinhPhuong(int n)
{
	int kt=1;
	int k;
	if(sqrt(n)*10%10)
}

int main()
{
	int n;
	printf("Nhap n= ");
	scanf("%d", &n);
	SNT(n);
	printf("\n");
	soDoiXung(n);
	getch();
}
