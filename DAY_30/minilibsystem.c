#include<stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n=0,i,id,choice;

    do
    {
        printf("\n1.Add Book\n2.Search Book\n3.Display Books\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Book ID: ");
                scanf("%d",&b[n].id);
                printf("Book Name: ");
                scanf("%s",b[n].name);
                printf("Author: ");
                scanf("%s",b[n].author);
                n++;
                break;

            case 2:
                printf("Enter Book ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        printf("%d %s %s\n",b[i].id,b[i].name,b[i].author);
                        break;
                    }
                }

                if(i==n)
                    printf("Book Not Found");

                break;

            case 3:
                for(i=0;i<n;i++)
                    printf("%d %s %s\n",b[i].id,b[i].name,b[i].author);
                break;
        }

    }while(choice!=4);

    return 0;
}