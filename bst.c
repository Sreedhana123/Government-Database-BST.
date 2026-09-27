#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char id[20];
    struct Node *left, *right;
} Node;

Node *createNode(const char *id) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    strcpy(newNode->id, id);
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node *insert(Node *root, const char *id) {
    if (root == NULL)
        return createNode(id);

    if (strcmp(id, root->id) < 0)
        root->left = insert(root->left, id);
    else if (strcmp(id, root->id) > 0)
        root->right = insert(root->right, id);

    return root;
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%s ", root->id);
        inorder(root->right);
    }
}

int bstSearch(Node *root, const char *key, int *comparisons) {
    *comparisons = 0;

    while (root != NULL) {
        (*comparisons)++;

        if (strcmp(key, root->id) == 0)
            return 1;
        else if (strcmp(key, root->id) < 0)
            root = root->left;
        else
            root = root->right;
    }

    return 0;
}

void freeTree(Node *root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main(void) {
    const char *ids[] = {
        "A102", "A25", "A7", "B100",
        "B12", "A120", "B3", "A45"
    };

    int n = sizeof(ids) / sizeof(ids[0]);
    Node *root = NULL;

    for (int i = 0; i < n; i++)
        root = insert(root, ids[i]);

    printf("Government Identification Database - BST\n");
    printf("Insertion order: ");
    for (int i = 0; i < n; i++)
        printf("%s ", ids[i]);

    printf("\n\nInorder traversal: ");
    inorder(root);
    printf("\n");

    const char *searchKeys[] = {"A102", "A120", "A45", "B3", "A7"};
    int m = sizeof(searchKeys) / sizeof(searchKeys[0]);

    printf("\nBST Search Comparison Counts\n");
    printf("--------------------------------\n");
    printf("Key\tComparisons\n");

    for (int i = 0; i < m; i++) {
        int comparisons;
        bstSearch(root, searchKeys[i], &comparisons);
        printf("%s\t%d\n", searchKeys[i], comparisons);
    }

    freeTree(root);
    return 0;
}
