#include<stdio.h>
int main()
{
	int N,a;
	scanf("%d",&N);
	a=N%5;
	switch(a)
	{
		case 1:
		case 2:
		case 3:
		    printf("Fishing in day %d",N);
		    break;
		case 0:
		case 4:
			printf("Drying in day %d",N);
			break;
	}
	return 0;
}
