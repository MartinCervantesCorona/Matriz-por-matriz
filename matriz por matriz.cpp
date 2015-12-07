#include <stdio.h>
int matA[3][3],i,j,a,matB[3][3],b,matC[3][3],k;
int main ()
{
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("Digita el numero en la posicion %d,%d\n",i,j);
			scanf("%d",&a);
			matA[i][j]=a;
		}
	}
	
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("Digita el numero en la posicion %d,%d\n",i,j);
			scanf("%d",&b);
			matB[i][j]=b;
		}
	}
	printf("La matriz A es:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("%d,",matA[i][j]);
		}
		printf("\n");
	}
	printf("La matriz B es:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)	
		{
			printf("%d,",matB[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<=3;i++)
	{ 
      for(j=0;j<=3;j++)
	  {
          matC[i][j]=0;
          for(k=0;k<3;k++)
		  {
              matC[i][j]=(matA[i][j]*matB[i][j]);
          }
      }
   }
   printf("La matriz resultante es\n");
   for(i=0;i<3;i++)
   { 
      for(j=0;j<3;j++)
	  {
          printf("%d,",matC[i][j]);
      }
      printf("\n");
  }
}
