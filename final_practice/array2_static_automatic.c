#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// arrays 2

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{

    printf("First call to each funtion:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("Second call to each function:\n"),
        staticArrayInit();
    automaticArrayInit();

    system("\n\npause\t");

    return 0;
}

void staticArrayInit(void)
{

    static int array1[3];

    printf("\nValues on entering staticArrayInit:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("array1[%d] = %d", i, array1[i]);
    }

    printf("\nValues on exiting staticArrayInit:\n");
    for (int i = 0; i < 3; i++)

    {
        printf("array1[%d]=%d", i, array1[i] += 5);
    }
}

void automaticArrayInit(void)
{
    int array2[3] = {1,
                     2,
                     3};

    printf("\nValues on entering automaticArrayInit:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("array2[%d]=%d", i, array2[i]);
    }

    printf("\nValues on exiting automaticArrayInit:\n ");
    for (int i = 0; i < 3; i++)

    {
        printf("array2[%d]=%d\n", i, array2[i] += 5);
    }
}
