#include<stdio.h>
void main(){
    int i,j,n,m;
    int process[10]={212,417,112,426};
    int memory[10]={100,500,200,300,600};
    printf("Enter the no of processes : ");
    scanf("%d",&n);
    printf("Enter the size of process: ");
    scanf("%d",&m);
    printf("Process\t\t ProcessMemory\n");
    for(i=0;i<n;i++){
        printf("P%d\t\t%d\n",i,process[i]);
    }
    printf("Memory\t\t MemoryVal\n");
    for(j=0;j<m;j++){
        printf("M%d\t\t%d\n",j,memory[j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(process[i]<memory[j]){
                memory[j]=memory[j]-process[i];
                printf("Remaining memory after allocationg P%d to M%d: %d\n",i,j,memory[j]);
                break;
            }
        }
    }
}