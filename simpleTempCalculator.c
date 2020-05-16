#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt the user for the temperature in fahrenheit (Temp).   
    
    int F = get_int ("Enter Temperature in Fahrenheit: \n"); 
    
    int C = (F - 32) * 5 / 9;
    {
          printf ("%i Degrees Celsius\n", C);
     
    }
    
}
