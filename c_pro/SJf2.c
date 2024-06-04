#include<stdio.h>
void main()
{
 int i,j,n,temp,process[10],exe[10],st[10],et[10],wt[10];
 float awt=0.0;
 float sum=0.0;
 printf("Enter the number of process");
 scanf("%d",&n);
 printf("Enter the execution time for the process");
 for(i=0;i<n;i++){
 scanf("%d",&exe[i]);
 process[i]=i+1;
 }
 printf("process\t execution time\n");
 for(i=0;i<n;i++){
 printf("p%d\t\t\t",process[i]);
 printf("%d\n",exe[i]);
 }
 for (i = 0; i < n - 1; i++) { 
 for (j = 0; j < n - i - 1; j++) { 
 if (exe[j] > exe[j + 1]) { 
 temp = exe[j]; 
 exe[j] = exe[j + 1]; 
 exe[j + 1] = temp; 
 } 
 } 
 temp=process[j];
 process[j]=process[j+1];
 process[j+1]=temp;
 }
 printf("\nAfter sorting:\n");
 printf("process\t execution time\n");
 for(i=0;i<n;i++){
 printf("p%d\t\t",process[i]);
 printf("%d\n",exe[i]);
 }
 st[0]=0;
 et[0]=st[0]+exe[0];
 for(i=1;i<=n;i++){
 st[i]=et[i-1];
 et[i]=st[i]+exe[i];
 }
 for(i=0;i<n;i++){
 wt[i]=st[i];
 sum = sum+wt[i];
 }
 printf("\nstart time\t execution time\t waiting time\n");
 for(i=0;i<n;i++){
 printf("%d\t\t\t", st[i]);
 printf("%d\t\t", et[i]);
 printf("%d\n", wt[i]);
 }
 awt=sum/n;
 printf("Average of waiting time:%.2f\n",awt);
}