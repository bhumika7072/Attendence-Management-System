#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char stuName[20] [30];
int presentAttenedence[20]={0};
int absentAttendance[20]={0};
int indexNumber=0;

void addstudent(){
     
     int i,num,add;
     if (indexNumber==0){
        printf("Enter how many student you want to add in attendence register:",i+1);
        fflush(stdin);
        gets(stuName[i]);
        indexNumber++;


     }
}

void main(){
    int choose;
    do
    {
        printf("\n ************Main Menu ***********\n");
        printf("Enter 1 for Add Student\n");
        printf("Enter 2 for Take Attendance\n");
        printf("Enter 3 for check Attendance\n");
        printf("Enter 4 for Remove Student\n");
        printf("Enter 5 for exit\n");
        printf("Please choose any menu:");
        fflush(stdin);
        scanf("%d",&choose);
        switch (choose)
        {
            case 1: 
               addStudent();
               break ;
            case 2:
               takeattendence();
               break;
            case 3:
                checkattendence();
                break ;
            case 4:
                removestduent();
                break;
            case 5:
                exit(0);
                break;
            // default :
            //     enter valid choose;
        }
    } while (choose!=5);
    
    
}
