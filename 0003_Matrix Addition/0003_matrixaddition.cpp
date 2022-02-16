#include <stdio.h>

int main(void)
{
    int m = 0;
    int n = 0;
    int matrix_input1[100][100];
    int matrix_input2[100][100];

    scanf("%d %d", &m, &n);
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix_input1[i][j]);
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix_input2[i][j]);
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", matrix_input1[i][j] + matrix_input2[i][j]);
        }
        printf("\n");
    }

    return (0);
}