#include<math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    scanf_s("%d", &n);

    // Khai báo mảng với kích thước n (sử dụng malloc)
    int* a = (int*)malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Khong du bo nho!\n");
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }

    int chan = 0, le = 0, tongchan = 0, tongle = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            ++chan;
            tongchan += a[i];
        }
        else
        {
            ++le;
            tongle += a[i];
        }
    }
    printf("%d\n%d\n%d\n%d\n", chan, le, tongchan, tongle);


    return 0;
}


