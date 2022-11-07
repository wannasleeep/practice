#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int row, column;
    printf("please input massive row");
    scanf_s("%d", &row);
    printf("please input massive column");
    scanf_s("%d", &column);
    int massive[100][100];
    for (int i = 0; i < row; i++)/* cycle for inputing matrix values */
    {
        for (int j = 0; j < column; j++)
        {
            printf("\nplease input number: ");
            scanf_s("%d", &massive[i][j]);
        }
    }
    int average_s = 0, average_b = 0, bigger_index, smaller_index;
    for (int i = 0; i < column; i++)/*this for serching of average biggest and smallest row*/
    {
        int a = 0;
        for (int j = 0; j < row; j++)
        {
            a = a + massive[i][j];
            if (average_s > a)
            {
                average_s = a;
                smaller_index = i;
            }
            else if (average_s == 0)
            {
                average_s = a;
                smaller_index = i;
            }
            if (average_b < a)
            {
                average_b = a;
                bigger_index = i;
            }
            else if (average_b == 0)
            {
                average_b = a;
                bigger_index = i;
            }
        }
    }
    int a = 0;
    average_s = massive[1][smaller_index];
    for (int i = 0; i < row; i++)/*this for */
    {
        a = massive[smaller_index][i];
        if (average_s < a)
        {
            average_s = a;
        }
    }
    int b = 0;
    average_b = massive[1][bigger_index];
    for (int i = 0; i < row; i++)
    {
        b = massive[bigger_index][i];
        if (average_b > b)
        {
            average_b = b;
        }
    }
    printf("\nbiggest from smallest = %d",a);
    printf("\nsmallest from biggest = %d",b);
    return 0;
}