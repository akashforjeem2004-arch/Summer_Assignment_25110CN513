#include <stdio.h>

int main()
{
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Kolkata 4.Chennai\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nQ2. 5 + 3 = ?\n");
    printf("1.6 2.7 3.8 4.9\n");
    scanf("%d", &ans);

    if(ans == 3)
        score++;

    printf("\nQ3. C Language developed by?\n");
    printf("1.Dennis Ritchie 2.Bjarne Stroustrup 3.James Gosling 4.Guido van Rossum\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}