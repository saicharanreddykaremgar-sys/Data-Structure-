#include<stdio.h>
int main()
{
	int arr[7],i,key,n=7;
	printf("Enter integer values:\n");
	
  	for(i=0;i<n;i++)
   	    scanf("%d",&arr[i]);
  	    printf("array is: "); 
		     
  	for(i=0;i<n;i++)
	  	printf("%d  ",arr[i]);
	    printf("\nEnter key element:");
	    scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
	    	printf("The value %d found at index %d",key,i);
	    	break;
	    }
    }
    if(arr[i]!=key)
		{
	    	printf("Value not found");
		}
	return 0;
}