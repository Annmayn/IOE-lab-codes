#include <stdio.h>

typedef struct
    {
        unsigned int rollNo;
        char name[50];
        char address[50];
        char age;
        float marks;
    } data;

data detail(data stdn)
{
    return stdn;
}

main ()
{
    data stdn1 = { 33,"Dean Ambrose", "California", 27, 83};
    data stdn2;
    stdn2 = detail(stdn1);

    printf ("Name:%s\n", stdn2.name);
    printf ("Roll no:%d\n", stdn2.rollNo);
    printf ("Address:%s\n", stdn2.address);
    printf ("Age:%u\n", stdn2.age);
    printf ("Average Marks:%.2f\n", stdn2.marks);
}
