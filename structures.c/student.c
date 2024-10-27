#include <stdio.h>
#include <string.h>
void check(Student 1, Student 2)
{
    if (S1.department == S2.department)
        printf("Same Department");
    else
        printf("Different departments");

    return;
}
int main()
{
    struct student
    {
        int rollnumber;
        char name[20];
        char Department[50];
        char course[50];
        int YearOfJoining;
    };

    struct student S1, S2;

    

    strcpy(S1.course, "CSE");
    strcpy(S1.name, "ABC");
    strcpy(S1.Department, "IT");
    S1.rollnumber = 12;
    S1.YearOfJoining = 1993;

    strcpy(S2.course, "CSE");
    strcpy(S2.name, "XYZ");
    strcpy(S2.Department, "IT");
    S2.rollnumber = 13;
    S2.YearOfJoining = 1993;

    check(S1, S2);

    return 0;
}