#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX_SIZE 101
#define SWAP(x, y, t) ((t)=(x), (x)=(y), (y)=(t))

//選擇排序
void main(void)
{
    int i, n;
    int list[MAX_SIZE];
    printf("Enter the number of numbers to generate:");
    scanf("%d", &n);
    if( n < 1 || n > MAX_SIZE)
    {
        fprintf(stderr,"Improper value of n\n");
        exit(EXIT_FAILURE);
    }
    srand((unsigned)time(NULL));
    printf("Array:");
    for(i=0; i<n; i++) {//隨機產生值
        list[i] = rand()%1000;
        printf("%d ", list[i]);
    }

    printf("\n");

    selectsort(list,n);
    printf("Sorted array:");
    for(i=0; i<n; i++) //印出已經排序號的數值
    {
        printf("%d ",list[i]);
    }
    printf("\n");-

    system("pause");
    return 0;
}

void selectsort(int list[], int n)
{
    int i, j, min, temp;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j= i+1; j<n; j++)
        {
            if(list[j]<list[min])
                min = j;
        }
        SWAP(list[i],list[min],temp);

    }
}
