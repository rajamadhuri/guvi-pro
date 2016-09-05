#include<stdio.h>
#include<conio.h>
	void main {
	int no,i,j=0,a[100],b[100],c,rem,temp;
	printf("enter the value of array");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	scanf("%d",&a[i]);
	for(i=0;i<no;i++)
	{
	c=0;
	while(a[i])
	{
	rem=a[i]%2;
	a[i]=a[i]/2;
	c++;
	}
	b[j++]=c;
	}
	for(i=0;i<no;i++)
	{
	for(j=0;j<no;j++)
	{
	if(b[i]>b[j])
	{
	temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	else if(b[i]==b[j])
	{
	if(a[i]>a[j])
	{
	int temp=b[i];
	b[i]=b[j];
	b[j]=temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}	
	}
	}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	getch();
	}

