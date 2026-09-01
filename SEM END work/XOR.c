#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

// Structure to hold book information
struct Book {
    int id;
    char name[50];
    char author[50];
    char category[30];
    int copies;
};

// Global array to store books and a counter
struct Book library[MAX];
int count = 0;

// Function prototypes
void addBook();
void viewBooks();
void searchBook();
void issueBook();
void returnBook();
void deleteBook();
void updateBook();

int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf("  LIBRARY MANAGEMENT SYSTEM  \n");
        printf("==============================\n");
        printf("1. Add New Book\n");
        printf("2. View All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Update Book\n");
        printf("8. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input! Please enter a number.\n");
            // Clear the input buffer to prevent infinite loop
            while(getchar() != '\n'); 
            choice = 0; 
            continue;
        }

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: deleteBook(); break;
            case 7: updateBook(); break;
            case 8: printf("\nExiting... Thank you!\n"); break;
            default: printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void addBook() {
    if (count >= MAX) {
        printf("\nLibrary is full! Cannot add more books.\n");
        return;
    }

    struct Book b;
    printf("\nEnter Book ID: ");
    if (scanf("%d", &b.id) != 1) {
        printf("Invalid ID input. Returning to menu.\n");
        while(getchar() != '\n'); 
        return;
    }
    getchar(); // Clear newline character left by scanf

    printf("Enter Book Name: ");
    fgets(b.name, sizeof(b.name), stdin);
    b.name[strcspn(b.name, "\n")] = 0; 

    printf("Enter Author Name: ");
    fgets(b.author, sizeof(b.author), stdin);
    b.author[strcspn(b.author, "\n")] = 0; 

    printf("Enter Category: ");
    fgets(b.category, sizeof(b.category), stdin);
    b.category[strcspn(b.category, "\n")] = 0; 

    printf("Enter Number of Copies: ");
    if (scanf("%d", &b.copies) != 1) {
        printf("Invalid copies input. Returning to menu.\n");
        while(getchar() != '\n'); 
        return;
    }

    library[count++] = b;
    printf("\nBook added successfully! Total books: %d\n", count);
}

void viewBooks() {
    if (count == 0) {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n--- All Books in Library (%d) ---\n", count);
    printf("%-5s %-30s %-20s %-15s %-7s\n", "ID", "Name", "Author", "Category", "Copies");
    printf("--------------------------------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-5d %-30s %-20s %-15s %-7d\n",
                library[i].id, library[i].name, library[i].author,
                library[i].category, library[i].copies);
    }
    printf("--------------------------------------------------------------------------\n");
}

void searchBook() {
    int id, found = 0;
    printf("\nEnter Book ID to search: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid ID input.\n");
        while(getchar() != '\n');
        return;
    }

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            printf("\nBook Found:\n");
            printf("-----------------------------------\n");
            printf("ID: %d\nName: %s\nAuthor: %s\nCategory: %s\nCopies: %d\n",
                    library[i].id, library[i].name, library[i].author,
                    library[i].category, library[i].copies);
            printf("-----------------------------------\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook with ID %d not found!\n", id);
}

void issueBook() {
    int id, found = 0;
    printf("\nEnter Book ID to issue: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid ID input.\n");
        while(getchar() != '\n');
        return;
    }

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            if (library[i].copies > 0) {
                library[i].copies--;
                printf("\nBook issued successfully! Remaining copies: %d\n", library[i].copies);
            } else {
                printf("\nNo copies of '%s' available for issue!\n", library[i].name);
            }
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook not found!\n");
}

void returnBook() {
    int id, found = 0;
    printf("\nEnter Book ID to return: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid ID input.\n");
        while(getchar() != '\n');
        return;
    }

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            library[i].copies++;
            printf("\nBook returned successfully! Total copies: %d\n", library[i].copies);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook not found!\n");
}

void deleteBook() {
    int id, found = 0;
    printf("\nEnter Book ID to delete: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid ID input.\n");
        while(getchar() != '\n');
        return;
    }

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            // Shift elements to the left
            for (int j = i; j < count - 1; j++)
                library[j] = library[j + 1];
            
            count--;
            printf("\nBook deleted successfully! Total books: %d\n", count);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook not found!\n");
}

void updateBook() {
    int id, found = 0;
    printf("\nEnter Book ID to update: ");
    if (scanf("%d", &id) != 1) {
        printf("Invalid ID input.\n");
        while(getchar() != '\n');
        return;
    }
    getchar(); // Clear newline character

    for (int i = 0; i < count; i++) {
        if (library[i].id == id) {
            printf("\n--- Updating Book ID: %d ---\n", id);
            
            printf("Enter New Book Name (Current: %s): ", library[i].name);
            fgets(library[i].name, sizeof(library[i].name), stdin);
            library[i].name[strcspn(library[i].name, "\n")] = 0;

            printf("Enter New Author Name (Current: %s): ", library[i].author);
            fgets(library[i].author, sizeof(library[i].author), stdin);
            library[i].author[strcspn(library[i].author, "\n")] = 0;

            printf("Enter New Category (Current: %s): ", library[i].category);
            fgets(library[i].category, sizeof(library[i].category), stdin);
            library[i].category[strcspn(library[i].category, "\n")] = 0;

            printf("Enter New Number of Copies (Current: %d): ", library[i].copies);
            if (scanf("%d", &library[i].copies) != 1) {
                printf("Invalid copies input. Update aborted.\n");
                while(getchar() != '\n');
                return;
            }

            printf("\nBook updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nBook not found!\n");
}