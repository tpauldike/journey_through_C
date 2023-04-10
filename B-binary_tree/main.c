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
	
	// create root node
	root = malloc(sizeof(btr)); // Allocate memory for root node
	root->data = 6; // Assign value to root node
	root->parent = NULL; // Set parent of root node to NULL
	root->left = NULL; // Set left child of root node to NULL
	root->right = NULL; // Set right child of root node to NULL

	// create left child node
	nextl = malloc(sizeof(btr)); // Allocate memory for left child node
	root->left = nextl; // Assign left child node to root node
	nextl->data = 3; // Assign value to left child node
	nextl->parent = root; // Set parent of left child node to root node
	nextl->left = NULL; // Set left child of left child node to NULL
	nextl->right = NULL; // Set right child of left child node to NULL

	// create right child node
	nextr = malloc(sizeof(btr)); // Allocate memory for right child node
	root->right = nextr; // Assign right child node to root node
	nextr->data = 8; // Assign value to right child node
	nextr->parent = root; // Set parent of right child node to root node
	nextr->left = NULL; // Set left child of right child node to NULL
	nextr->right = NULL; // Set right child of right child node to NULL

	// create left child of the left child node
	nextl = malloc(sizeof(btr)); // Allocate memory for left grandchild node
	root->left->left = nextl; // Assign left grandchild node to left child of root node
	nextl->parent = root->left; // Set parent of left grandchild node to left child of root node
	nextl->data = 2; // Assign value to left grandchild node
	nextl->left = NULL; // Set left child of left grandchild node to NULL
	nextl->right = NULL; // Set right child of left grandchild node to NULL

	// create right child of the left child node
	nextr = malloc(sizeof(btr)); // Allocate memory for right grandchild node
	root->left->right = nextr; // Assign right grandchild node to left child of root node
	nextr->parent = root->left; // Set parent of right grandchild node to left child of root node
	nextr->data = 7; // Assign value to right child node
	nextr->left = NULL; //Set left child of right grandchild node to NULL
	nextr->right = NULL; // Set right child of right grandchild node to NULL

	return (0);
}
