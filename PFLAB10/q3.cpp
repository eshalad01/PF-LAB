#include<stdio.h>
#include<string.h>

struct Book {
    char title[100];
    char author[50];
    char ISBN[20];
    int year;
    int available; 
};
void add(struct Book library[], int *count) {
    printf("\nEnter book details:\n");
    printf("Title: ");
    getchar();  
    scanf(" %[^\n]", library[*count].title);  
    printf("Author: ");
    scanf(" %[^\n]", library[*count].author);
    printf("ISBN: ");
    scanf(" %s", library[*count].ISBN);
    printf("Year of publication: ");
    scanf("%d", &library[*count].year);
    library[*count].available = 1; 
    (*count)++;
    printf("Book added successfully!\n\n");
}
void display(struct Book library[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("\nDetails of Book %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("ISBN: %s\n", library[i].ISBN);
        printf("Year: %d\n", library[i].year);
        printf("Availability: %s\n", library[i].available ? "Available" : "Checked out");
    }
    printf("\n");
}
void search(struct Book library[], int count) {
    char query[100];
    printf("Enter title or author to search: ");
    getchar();
    scanf(" %[^\n]", query);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, query) == 0 || strcmp(library[i].author, query) == 0) {
            printf("\nBook found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("ISBN: %s\n", library[i].ISBN);
            printf("Year: %d\n", library[i].year);
            printf("Availability: %s\n", library[i].available ? "Available" : "Checked out");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("No book found with that title or author.\n\n");
    }
}

int main() {
    struct Book library[100];
    int choice;
    int count = 0; 

    do {
        printf("Library Menu:\n");
        printf("1. Add a new book\n");
        printf("2. Display all books\n");
        printf("3. Search for a book\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add(library, &count);
                break;
            case 2:
                display(library, count);
                break;
            case 3:
                search(library, count);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

