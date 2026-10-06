// Q10. Store book information using array of structures

#include <stdio.h>

struct Book
{
    int id;
    char title[30];
    char author[30];
    float price;
};

int main()
{
    struct Book b[50];
    int n, i, searchID;
    int found = 0;
    int maxIndex = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    if(n <= 0 || n > 50)
    {
        printf("Invalid number of books.");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Title: ");
        scanf("%s", b[i].title);

        printf("Enter Author: ");
        scanf("%s", b[i].author);

        printf("Enter Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n--- All Books ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID = %d", b[i].id);
        printf("\nTitle = %s", b[i].title);
        printf("\nAuthor = %s", b[i].author);
        printf("\nPrice = %.2f\n", b[i].price);

        if(b[i].price > b[maxIndex].price)
        {
            maxIndex = i;
        }
    }

    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == searchID)
        {
            printf("\nBook Found");
            printf("\nID = %d", b[i].id);
            printf("\nTitle = %s", b[i].title);
            printf("\nAuthor = %s", b[i].author);
            printf("\nPrice = %.2f\n", b[i].price);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nBook not found.\n");
    }

    printf("\nMost Expensive Book:");
    printf("\nID = %d", b[maxIndex].id);
    printf("\nTitle = %s", b[maxIndex].title);
    printf("\nAuthor = %s", b[maxIndex].author);
    printf("\nPrice = %.2f", b[maxIndex].price);

    return 0;
}