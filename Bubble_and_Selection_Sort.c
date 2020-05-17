#include <stdio.h>

void print_arr(int a[], int len);
void arr_swap(int array[], int pos1, int pos2);
void bubble_sort(int array[], int length);
void selection_sort(int array[], int length);

int main(void)
{
    int arr[] = { 6, 12, 35, 11, 42 };
    selection_sort(arr, 5);
    print_arr(arr, 5);
}

void print_arr(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf ("%2d ", a[i]);
    }
    printf("\n");
}

void arr_swap(int array[], int pos1, int pos2)
{
    int temp = array[pos1];
    array[pos1] = array[pos2];
    array[pos2] = temp;
}

void bubble_sort(int array[], int length)
{
    int did_swap;
    do 
    {
        did_swap = 0;
        for (int i = 0; i < length - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                arr_swap(array, i, i + 1);
                did_swap = 1;
            }
        }
    }
    while (did_swap == 1);
}

void selection_sort(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {   
        int smallest_index = i;
        for (int j = i + 1; j < length; j++ )
        {
            if (array[j] < array[smallest_index])
            {
                smallest_index = j;
            }
        }
        arr_swap(array, i, smallest_index);
    }
}
