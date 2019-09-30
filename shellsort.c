#include<stdio.h>

void shellsort(int*,int);

int main(){
	int a[]={5,3,2,1,5};
	
	shellsort(a,5);
	int i;
	for(i=0; i<5; i++)
		printf("%d ",a[i]);
		
	return 0;

}

void shellsort(int *arr, int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }
}
