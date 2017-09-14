#include <stdio.h>

typedef struct
    {
        unsigned int rollNo;
        char name[50];
        char address[100];
        unsigned char age;
        float marks;
    } STUDENT;

displayStruct (STUDENT *stdnt)
{

    printf ("Name:%s\n", stdnt->name);
    printf ("Roll no:%u\n", stdnt->rollNo);
    printf ("Address:%s\n", stdnt->address);
    printf ("Age:%u\n", stdnt->age);
    printf ("Average Marks:%.1f\n", stdnt->marks);
}

void main(void)
{
    STUDENT stdnt = {10, "Neema Tsering", "Jorpati", 19, 93};
    displayStruct (&stdnt);
}
