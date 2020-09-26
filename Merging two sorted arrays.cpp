#include<stdio.h>
int main()
{
	int ar1[5] = {2,3,5,6,9};
	int ar2[6] = {1,3,4,7,8,10};
	int ar3[11];
	int a = sizeof(ar1)/4;
	int b = sizeof(ar2)/4;
	int c = sizeof(ar3)/4;
	int i=0,j=0,k=0;
	while(i<a and j<b)
	{
		if(ar1[i]<ar2[j])
		{
			ar3[k] = ar1[i];
			i+=1; 
		}
		else
		{
			ar3[k] = ar2[j];
			j+=1;
		}
		k+=1;
	}
	if(i>=a)
	{
		while(j<b)
		{
			ar3[k] = ar2[j];
			j+=1;
			k+=1;
		}	
	}
	else
	{
		while(i<a)
		{
			ar3[k] = ar1[i];
			i+=1;
			k+=1;
		}
	}
	printf("\n\n");
	for(i=0;i<c;i++)
	{
		printf("%d\t",ar3[i]);
	}
}
