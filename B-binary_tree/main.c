#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *parent;
	struct node *left;
	struct node *right;
} btr;

int main(void)
{
	struct node *root;
	btr *nextl, *nextr;

	root = malloc(sizeof(btr));
	root->data = 6;
	root->parent = NULL;
	root->left = NULL;
	root->right = NULL;

	nextl = malloc(sizeof(btr));
	root->left = nextl;
	nextl->data = 3;
	nextl->parent = root;
	nextl->left = NULL;
	nextl->right = NULL;

	nextr = malloc(sizeof(btr));
	root->right = nextr;
	nextr->data = 8;
	nextr->parent = root;
	nextr->left = NULL;
	nextr->right = NULL;
	
	nextl = malloc(sizeof(btr));
	root->left->left = nextl;
	nextl->parent = root->left;
	nextl->data = 2;
	nextl->left = NULL;
	nextl->right = NULL;

	


	return (0);
}
