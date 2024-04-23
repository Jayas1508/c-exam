#include <stdio.h>

struct employees {
    char *name;
    char *course;
};

int main() {
    FILE *file;
    struct employees employees[3]; 


    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

  
    printf("Enter details for 3 employees:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nemployees %d\n", i + 1);

        employees[i].name = (char *)malloc(sizeof(char) * 50); 
        if (employees[i].name == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        employees[i].course = (char *)malloc(sizeof(char) * 50); 
        if (employees[i].course == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Name: ");
        scanf("%49s", employees[i].name); 

        printf("Course: ");
        scanf("%49s", employees[i].course); 


        fprintf(file, "employees %d\nName: %s\nCourse: %s\n\n", i + 1, employees[i].name , employees[i].course);
    }

    printf("\nemployees details written to file successfully!\n");

 
    fclose(file);

   
    for (int i = 0; i < 3; i++) 
	{
        free(employees[i].name);
        free(employees[i].course);
    }

    return 0;
}