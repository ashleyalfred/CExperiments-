#include <stdio.h>
#include <cs50.h>

int find_largest(int nums[], int len);  // define the function
int find_average(int number[], int length);

//Find the largest among three numbers
int main(void)
{
    const int n = 3;
    int str[n];
    for (int i = 0; i < n; i++)
    {
       str[i] = get_int("Please enter a number: \n");
    }

    int large = find_largest(str, n); //calling the function and passing 2 values to the function (str and n)
    printf("%d is the largest number \n", large);

    const int other_len = 5;
    int other[] = { 1, 2, 3, 4, 5 };
    printf("%d is the other largest number\n", find_largest(other, other_len));
    
    int one_more[] = { 2, 4, 6, 8, 10 };
    printf ("%d is the final largest number \n", find_largest(one_more, 5));

    int average = find_average(str, n); //calling the function and passing 2 values to the function (str and n)
    printf("%d is the average \n", average);

}

int find_largest(int nums[], int len) // impliment the function
{
    int largest = nums[0];
    for (int i = 1; i < len; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    return largest;
}

int find_average(int number[], int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total = total + number[i];
    }
    int average = total/length; 
 
    return average;
    
}
