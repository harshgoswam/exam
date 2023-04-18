#include <stdio.h>

 main()
 
   {
     int i,j,arr1[50][50],sum=0,n;
	 
       printf(" matrix :\n");
	 
	 printf("matrix : ");
     scanf("%d", &n); 
	 printf("first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
			   if (i==j) sum= sum+arr1[i][j];
            }
        }  
	 
	 printf(" matrix is :");
	 for(i=0;i<n;i++)
	 {
	   for(j=0;j<n ;j++)
	     printf("% 4d",arr1[i][j]);
	   
	 }
 
       printf("Addition of :%d",sum);
    }

