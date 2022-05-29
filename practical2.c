#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll_no;
    int maths_marks;
    int science_marks;
    int eng_marks;
};

int main()
{
    struct student s[10];

    int avg = 0;
    int avg_mx = 0;
    char topper[100];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the name of %d student\n ", i + 1);
        scanf("%s", &s[i].name);

        printf("Enter the roll number of %d student\n ", i + 1);
        scanf("%d", &s[i].roll_no);

        printf("Enter the maths marks of %d student \n", i + 1);
        scanf("%d", &s[i].maths_marks);

        printf("Enter the science marks of %d student \n", i + 1);
        scanf("%d", &s[i].science_marks);

        printf("Enter the english marks of %d student \n", i + 1);
        scanf("%d", &s[i].eng_marks);

        avg = (s[i].eng_marks + s[i].maths_marks + s[i].science_marks) / 3;
        if (avg_mx < avg)
        {
            avg_mx = avg;
            strcpy(topper, s[i].name);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The name of %d student is %s\n", i, s[i].name);

        printf("The roll number of %d student  is %d\n", i, s[i].roll_no);

        printf("The maths marks of %d student is %d\n ", i, s[i].maths_marks);

        printf("The science marks of %d student is %d\n ", i, s[i].science_marks);

        printf("The english marks of %d student is %d\n ", i, s[i].eng_marks);

    }

    printf("The student with the highest marks is %s\n", topper);

    return 0;
}