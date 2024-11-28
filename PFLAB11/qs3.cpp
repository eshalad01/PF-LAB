#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source_file, *target_file;
    char source_filename[100], target_filename[100];
    char c;

    printf("Enter source filename: ");
    scanf("%s", source_filename);

    printf("Enter target filename: ");
    scanf("%s", target_filename);

    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Could not open source file %s\n", source_filename);
        return 1;
    }

    target_file = fopen(target_filename, "w");
    if (target_file == NULL) {
        printf("Could not open target file %s\n", target_filename);
        fclose(source_file);
        return 1;
    }

    while ((c = fgetc(source_file)) != EOF) {
        fputc(toupper(c), target_file);
    }

    fclose(source_file);
    fclose(target_file);

    printf("File copied successfully!\n");

    return 0;
}
