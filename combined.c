#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char id[20];
    struct Node *left, *right;
} Node;

Node *createNode(const char *id) {
    Node *p = malloc(sizeof(Node));
    strcpy(p->id, id);
    p->left = p->right = NULL;
    return p;
}

Node *insert(Node *root, const char *id) {
    if (root == NULL) return createNode(id);

    if (strcmp(id, root->id) < 0)
        root->left = insert(root->left, id);
    else if (strcmp(id, root->id) > 0)
        root->right = insert(root->right, id);

    return root;
}

void inorder(Node *root) {
    if (root) {
        inorder(root->left);
        printf("%s ", root->id);
        inorder(root->right);
    }
}

int bstSearch(Node *root, const char *key, int *c) {
    *c = 0;
    while (root) {
        (*c)++;
        int r = strcmp(key, root->id);
        if (r == 0) return 1;
        root = (r < 0) ? root->left : root->right;
    }
    return 0;
}

int linearSearch(const char *a[], int n, const char *key, int *c) {
    *c = 0;
    for (int i = 0; i < n; i++) {
        (*c)++;
        if (strcmp(a[i], key) == 0) return i;
    }
    return -1;
}

void freeTree(Node *root) {
    if (root) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main(void) {
    const char *ids[] = {"A102","A25","A7","B100","B12","A120","B3","A45"};
    const char *keys[] = {"A102","A120","A45","B3","A7"};
    int n = 8, m = 5;
    Node *root = NULL;

    for (int i = 0; i < n; i++)
        root = insert(root, ids[i]);

    printf("INORDER TRAVERSAL\n");
    inorder(root);
    printf("\n\n");

    printf("SEARCH COMPARISON\n");
    printf("Key\tBST\tLinear\n");

    for (int i = 0; i < m; i++) {
        int bc, lc;
        bstSearch(root, keys[i], &bc);
        linearSearch(ids, n, keys[i], &lc);
        printf("%s\t%d\t%d\n", keys[i], bc, lc);
    }

    freeTree(root);
    return 0;
}
