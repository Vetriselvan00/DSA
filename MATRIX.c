#include <stdio.h>
#include <stdlib.h>
int** allocatememory(int rows, int cols)
{
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}
void freememory(int **matrix, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
}
void input(int **matrix, int rows, int cols)
{
    printf("ENTER THE ELEMENTS OF THE MATRIX:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

}
void displayMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void addition(int **mat_1, int **mat_2, int **ans, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ans[i][j] = mat_1[i][j] + mat_2[i][j];
        }
    }
}
void subtraction(int **mat_1, int **mat_2, int **ans, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ans[i][j] = mat_1[i][j] - mat_2[i][j];
        }
    }
}
void multiplication(int **mat_1, int **mat_2, int **ans, int r1, int c1, int c2)
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                ans[i][j] += mat_1[i][k] * mat_2[k][j];
            }
        }
    }
}
void transpose(int **matrix, int **ans, int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            ans[i][j] = matrix[j][i];
        }
    }
}
int main()
{
    int option, r1, c1, r2, c2;
    int **mat_1, **mat_2, **ans;
    while (1)
    {
        printf("*\n");
        printf("*MATRIX CALCULATION MENU: *\n");
        printf("*1. ADDITION              *\n");
        printf("*2. SUBTRACTION           *\n");
        printf("*3. MULTIPLICATION        *\n");
        printf("*4. TRANSPOSE             *\n");
        printf("*5. END                   *\n");
        printf("*\n");
        printf("ENTER YOUR OPTION :       \n");
        scanf("%d", &option);
        if (option == 5)
        {
            printf("PROGRAM ENDS......\n");
            break;
        }
        printf("ENTER NO. OF ROWS AND COLUMNS FOR FIRST MATRIX: ");
        scanf("%d %d", &r1, &c1);
        mat_1 = allocatememory(r1, c1);
        input(mat_1, r1, c1);
        if (option != 4)
        {
            printf("ENTER NO. OF ROWS AND COLUMNS FOR SECOND MATRIX: ");
            scanf("%d %d", &r2, &c2);

            mat_2 = allocatememory(r2, c2);
            input(mat_2, r2, c2);
        }
        switch (option)
        {
            case 1:
                if (r1 != r2 || c1 != c2)
                {
                    printf("DIMENSTIONS MUST BE SAME\n");
                } else
                {
                    ans = allocatememory(r1, c1);
                    addition(mat_1, mat_2, ans, r1, c1);
                    printf("ANSWER FOR ADDITION:\n");
                    displayMatrix(ans, r1, c1);
                    freememory(ans, r1);
                }
                break;
            case 2:
                if (r1 != r2 || c1 != c2)
                {
                    printf("DIMENSTIONS MUST BE SAME \n");
                } else
                {
                    ans = allocatememory(r1, c1);
                    subtraction(mat_1, mat_2, ans, r1, c1);
                    printf("ANSWER FOR SUBTRACTION:\n");
                    displayMatrix(ans, r1, c1);
                    freememory(ans, r1);
                }
                break;
            case 3:
                if (c1 != r2)
                {
                    printf("COLUMNS OF FIRST MATRIX MUST BE EQUAL TO ROWS OF SECOND MATRIX\n");
                } else
                {
                    ans = allocatememory(r1, c2);
                    multiplication(mat_1, mat_2, ans, r1, c1, c2);
                    printf("ANSWER FOR MULTIPILCATION:\n");
                    displayMatrix(ans, r1, c2);
                    freememory(ans, r1);
                }
                break;
            case 4:
                ans = allocatememory(c1, r1);
                transpose(mat_1, ans, r1, c1);
                printf("TRANSPOSE OF THE MATRIX:\n");
                displayMatrix(ans, c1, r1);
                freememory(ans, c1);
                break;
            default:
                printf("INVALID , PLEASE TRY AGAIN\n");
                break;
        }
        freememory(mat_1, r1);
        if (option != 4) {
            freememory(mat_2, r2);
        }
    }
    return 0;
}
