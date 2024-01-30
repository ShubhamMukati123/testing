#include<stdio.h>
#include<stdlib.H>

    struct shubh
    {
        int e_id;
        char name[20];
        int salary;

    }e;

    void main()
{
    
        e.e_id = 101;
        e.name = "shubh";
        e.salary = 10000;

        printf("id is :%d ",e.e_id);
        puts(e.name);
        printf(" salary is:%d",e.salary);
    


}
