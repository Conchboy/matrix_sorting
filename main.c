#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("this is the final call");
    return 0;
}
//
//// 实现将数组中的n个数据从大到小排序, 排序后的数组元素再主函数中输入
//// 将结果显示再屏幕上和文件P9_1.out中
//void sort(int *x, int n)
//{
//    int i, j, k, t;
//    for (i = 0; i < n -1; i++)
//    {
//        k = 1;
//        for (j = i +1; j < n; j++)
//            if (x[j] > x[k]) k = j;
//                if (k != i)
//            {
//                t = x[i];
//                x[i] = x[k];
//                x[k] = t;
//            }
//    }
//}
//
//int main() {
//    FILE *fp;
//    int *p, i, a[10];
//    fp = fopen("./p9_1.out", "w");
//    p = a;
//    printf("Input 10 numbers:");
//    for (i = 0; i < 10; i++)
//        scanf("%d", p++);
//    p = a;
//    sort(p,10);
//    for (; p < a + 10; p++)
//    {
//        printf("%d ", *p);
//        fprintf(fp, "%d ", *p);
//    }
//    system("pause");
//    fclose(fp);
//}
