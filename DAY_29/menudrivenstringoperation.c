#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100],s2[100];
    int choice;

    printf("Enter first string : ");
    gets(s1);

    printf("Enter second string : ");
    gets(s2);

    do
    {
        printf("\n1.Length");
        printf("\n2.Copy");
        printf("\n3.Compare");
        printf("\n4.Concatenate");
        printf("\n5.Reverse");
        printf("\n6.Exit");

        printf("\nChoice : ");
        scanf("%d",&choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Length = %lu",strlen(s1));
                break;

            case 2:
                strcpy(s2,s1);
                printf("Copied String = %s",s2);
                break;

            case 3:
                if(strcmp(s1,s2)==0)
                    printf("Equal");
                else
                    printf("Not Equal");
                break;

            case 4:
                strcat(s1,s2);
                printf("%s",s1);
                break;

            case 5:
                strrev(s1);
                printf("%s",s1);
                break;
        }

    }while(choice!=6);

    return 0;
}