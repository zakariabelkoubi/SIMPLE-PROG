#include <stdio.h>
#include <stdlib.h>
int ageFunc(int j , int g){
    return g-j;
}
struct student{
char name[15],lastname[15];
int day,month,year;
};
int main()
{
    int i,x;
printf("enter the number of student\n");
scanf("%d" ,&x);
   struct student *stud=malloc(x*sizeof(int));
   for (i=0;i<x;i++){
   printf("\nENTER THE NAME OF STUDENT %d:\n" , i+1);
   scanf("%s" ,&stud[i].name);
   printf("ENTER THE LAST NAME OF STUDENT :\n");
   scanf("%s" ,&stud[i].lastname);
   printf("DATE OF BIRTH\n");
   printf("ENTER THE YEAR:\n");
   scanf(" %d" , &stud[i].year);
   while (stud[i].year>2022 || stud[i].year<1980){
    printf("ERROR!:YOU CAN'T ENTER A VALUE ABOVE THAN 2022\n");
    printf("ENTER THE YEAR:\n");
   scanf(" %d" , &stud[i].year);
    }
   printf("ENTER THE MONTH:\n");
   scanf(" %d" , &stud[i].month);
   while (stud[i].month>12 || stud[i].month==0){
    printf("ERROR!:THE MONTH START FROM 1 TO 12 PLEASE TRY AGAiN\n");
    printf("ENTER THE MONTH:\n");
   scanf(" %d" , &stud[i].month);
    }
   printf("ENTER THE DAY:\n");
   scanf(" %d" , &stud[i].day);
   while (stud[i].day>31 || stud[i].day==0){
    printf("ERROR!:THE DAY START FROM 1 TO 31 PLEASE TRY AGAiN\n");
    printf("ENTER THE MONTH:\n");
   scanf(" %d" , &stud[i].day);
    }
   }
   //---//---//---//---//---//---//---//---//---//
   for (i=0;i<x;i++){
   printf("THE NAME OF SUTDENT %d IS: %s\n" ,i+1, stud[i].name);
   printf("THE LAST NAMME IS: %s \n" ,stud[i].lastname);
   printf("DATE OF BERTH  IS: %d / %d / %d\n" , stud[i].year,stud[i].month,stud[i].day);
   int cyear=2022,age[i],s;
    age[i]=ageFunc(stud[i].year,cyear);
   printf("THE AGE OF THIS STUDENT IS: %d\n\n" , age[i]);
   }

return 0;
}


