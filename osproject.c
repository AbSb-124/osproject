#include<stdio.h>
#inlcude<conio.h>
#include<string.h>
void main()
{
	char p[10][5],temp[5];
	int i,j,pt[10],wt[10],totwt=0,g[10],temp1,n;
	float avgwt;
	printf("Enter number of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter student %d name:",i+1);
	scanf("%s",&p[i]);
	printf("enter process time for each student:");
	scanf("%d",&pt[i]);
	printf("enter number of gifts of each student:");
	scanf("%d",&g[i]);
	}
	for(i=0;i<n-1;i++)
	{
          for(j=i+1;j<n;j++)
	  { 
		  if(g[i]<g[j])
			  
		  {
	           temp1=g[i];
		    g[i]=g[j];
	            
		  }

	
