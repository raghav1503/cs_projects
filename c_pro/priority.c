#include<stdio.h>
void main()
{
    int i,j,n,temp,process[10],exe[10],st[10],et[10],pt[10],wt[10];
    float awt=0.0;
    float sum=0.0;
    printf("Enter the number of process");
    scanf("%d",&n);
    printf("Enter the execution time for the process");
    for(i=0;i<n;i++){
        scanf("%d",&exe[i]);
        process[i]=i+1;
    }
    printf("Enter the priority time for the process");
    for(i=0;i<n;i++){
        scanf("%d",&pt[i]);
    }
    printf("process\t executiontime\t priority time\n");
    for(i=0;i<n;i++){
        printf("p%d\t\t\t",process[i]);
        printf("%d\t\t\t",exe[i]);
        printf("%d\n",pt[i]);
    }
    for (i = 0; i < n - 1; i++) {  
       for (j = 0; j < n - i - 1; j++) {  
          if (pt[j] > pt[j + 1]) {  
          temp = pt[j];  
          pt[j] = pt[j + 1];  
          pt[j + 1] = temp;  
          temp = exe[i];
          exe[j]=exe[j+1];
          exe[j+1]= temp;
          temp=process[j];
          process[j]=process[j+1];
          process[j+1]=temp;

      }  
    }  
  }
    printf("\nAfter sorting:\n");
    printf("process\t executiontime\t prioritytime\n");
    for(i=0;i<n;i++){
        printf("p%d\t\t\t",process[i]);
        printf("%d\t\t\t",exe[i]);
        printf("%d\n",pt[i]);
        
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
    printf("\nstart time\t end time\t waiting time\n");
    for(i=0;i<n;i++){
        printf("%d\t\t\t\t", st[i]);
        printf("%d\t\t\t", et[i]);
        printf("%d\n", wt[i]);
    }
    awt=sum/n;
    printf("Average of waiting time:%.2f\n",awt);
    return 0;
}