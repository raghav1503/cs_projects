//setp1 create a int  array of size 10 with random values
#include<stdio.h>
void main()
{
    int i;
    int n;
    int process[10];
    int exe[10];
    int st[10];
    int et[10];
    int wt[10];
    float awt=0.0;
    float sum=0.0;
    printf("Enter the number of process");
    scanf("%d",&n);
    printf("Enter the execution time for the process");
    for(i=0;i<n;i++){
        scanf("%d",&exe[i]);
        process[i]=i+1;
    }
    printf("process\t executiontime\n");
    for(i=0;i<n;i++){
        printf("p%d\t\t\t",process[i]);
        printf("%d\n",exe[i]);   
    }
    //step2  calculate starting time and execution waiting time
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
    printf("\nst\t et\t wt\n");
    for(i=0;i<n;i++){
        printf("%d\t\t\t", st[i]);
        printf("%d\t\t", et[i]);
        printf("%d\n", wt[i]);
    }
    awt=sum/n;
    printf("Average of waiting time:%.f\n",awt);
}