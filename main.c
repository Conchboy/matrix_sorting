#include <stdio.h>
#include <stdlib.h>

void sort(int *x, int n)
{
    int i, j, k, t;
    for (i = 0; i < n -1; i++)
    {
        k = 1;
        for (j = i +1; j < n; j++)
            if (x[j] > x[k]) k = j;
                if (k != i)
            {
                t = x[i];
                x[i] = x[k];
                x[k] = t;
            }
    }
}

int main() {
    FILE *fp;
    int *p, i, a[10];
    fp = fopen("p9_1.out", "w");
    p = a;
    printf("Input 10 numbers:");
    for (i = 0; i < 10; i++)
        scanf("%d", p++);
    p = a;
    sort(p,10);
    for (; p < a + 10; p++)
    {
        printf("%d \n", *p);
        fprintf(fp, "%d ", *p);
    }
    system("pause");
    fclose(fp);
}
