#include<stdio.h>
void print_elements(int a[],int n)
{
int i;
for(i=0;i<n;i++)
 {
   printf("%d\t",a[i]);
 }
}
void bubble_sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
print_elements(a,n);
}
int main()
{
int i,j,temp;
int a[5]={1,5,8,9,26};
int n=sizeof(a)/sizeof(a[0]);
printf("Before sorting elememnts are :\n");
print_elements(a,n);
printf("\n After sortinh array elements are :\n");
bubble_sort(a,n);
return 0;
}