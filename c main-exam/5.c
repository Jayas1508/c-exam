#include <stdio.h>

struct Book 
{
    char title[100];
    char author[100];
    float price;
};

int main() 
{
    int N;

    printf("Enter the no of books: ");
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; i++) 
	{
        printf("Enter details of book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nDetails of all books:\n");
    for (int i = 0; i < N; i++) 
	{
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}
