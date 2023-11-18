#include<stdio.h>
void swap(int *xp,int *yp)
{
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	   for(j=0;j<n-i-1;j++)
	      if(arr[j]>arr[j+1])
	        swap(&arr[j],&arr[j+1]);
}
void printarray(int arr[],int size)
{
	for (int i=0;i<size;i++)
	    printf("%d",arr[i]);
	printf("\n");
}
int main()
{
	int arr[]={23,45,21,34,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("original array:\n");
	printarray(arr,n);
	bubblesort(arr,n);
	printf("sorted array:\n");
	printarray(arr,n);
	return 0;
}