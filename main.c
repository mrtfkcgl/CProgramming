#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE		4096

int main(int argc, char *argv[]) {
    FILE *f;
    char line[MAX_LINE];
    char *str;
    int counter = 0;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <csv_file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((f = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "cannot open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (fgets(line, MAX_LINE, f) != NULL) {
        counter ++;
        if ((str = strchr(line, '\n')) != NULL)
            *str = '\0';
        printf("\n****** %d CAR Info ****** \n",counter);
        for (str = strtok(line, ";"); str != NULL; str = strtok(NULL, ";"))
            printf("%s\n", str);
        printf("\n----- %d ---\n",counter);
    }

    fclose(f);

    return 0;
}
