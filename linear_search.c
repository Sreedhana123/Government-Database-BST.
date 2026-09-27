#include <stdio.h>
#include <string.h>

int linearSearch(const char *ids[], int n, const char *key, int *comparisons) {
    *comparisons = 0;

    for (int i = 0; i < n; i++) {
        (*comparisons)++;

        if (strcmp(ids[i], key) == 0)
            return i;
    }

    return -1;
}

int main(void) {
    const char *ids[] = {
        "A102", "A25", "A7", "B100",
        "B12", "A120", "B3", "A45"
    };

    int n = sizeof(ids) / sizeof(ids[0]);
    const char *searchKeys[] = {"A102", "A120", "A45", "B3", "A7"};
    int m = sizeof(searchKeys) / sizeof(searchKeys[0]);

    printf("Government Identification Database - Linear Search\n");
    printf("Insertion/input order: ");
    for (int i = 0; i < n; i++)
        printf("%s ", ids[i]);
    printf("\n\nLinear Search Comparison Counts\n");
    printf("----------------------------------\n");
    printf("Key\tComparisons\n");

    for (int i = 0; i < m; i++) {
        int comparisons;
        linearSearch(ids, n, searchKeys[i], &comparisons);
        printf("%s\t%d\n", searchKeys[i], comparisons);
    }

    return 0;
}
