#include <stdio.h>
#include <cs50.h>

void draw(int h);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int height)
{
    if (height == 0)
    {
        return;
    }

    draw(height - 1); 

    for (int i = 1; i <= height; i++) 
    {
        printf("#");
    }
    printf("\n");
}
