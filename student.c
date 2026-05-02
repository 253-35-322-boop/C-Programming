#include<stdio.h>
struct employee{
    int ID;
    char name[50];
    float salary;
float HouseRentAllowance,MedicalAllowance,Total;
};
int main(){
    int i,n;
    printf("Enter Number of employee:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("---Employee %d---\n",i+1);
        printf("ID:");
        scanf("%d",&e[i].ID);
        printf("Name:");
        scanf("%s",e[i].name);
        printf("Basic salary: ");
        scanf("%f",&e[i].salary);
        e[i].HouseRentAllowance= e[i].salary*0.2;
        e[i].MedicalAllowance=e[i].salary*0.1;
        e[i].Total=e[i].salary+e[i].HouseRentAllowance+e[i].MedicalAllowance;
    }
 for (i=0;i<n;i++){
    printf("ID    :%s\n"e[i].ID);
    printf("Name      :%d\n,e[i].Name");
    prinf("price      :%.2f\n",e[i].price);
     prinf("Quentity      :%.2f\n",e[i].);

 }
return 0;
}