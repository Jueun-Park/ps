/*
* Problem Solving 2019 Fall
* Prof. Kim Younghoon
* A3. Max 9-sum List
* Student: Park Jueun
* Time: O(n^2)
* Space: O(n)
*/

// DO NOT USE ARRAY.
// YOU HAVE TO USE LINKED LIST.
// (you can use addFirst function that we already give you)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
	int data;
	struct NODE* next;
};

typedef struct NODE NODE;

// head pointer of linked list
NODE *head;


// add linked list element at the front of the list.
void addFirst (int val) {
	NODE *node = (NODE *) malloc (sizeof(NODE));

	node->data = val;
	node->next = head;
	head = node;
}


#define max(x, y) ((x) > (y)) ? (x) : (y)


int halfLengthNineSum(NODE* alpha, NODE* beta) {
    NODE* alpha_curr = alpha;
	NODE* beta_curr = beta;
	int ret = 0;
	while (alpha_curr != NULL && beta_curr != NULL) {
		if (alpha_curr->data + beta_curr->data != 9) {
			return ret;
		} else {
			ret++;
			alpha_curr = alpha_curr->next;
			beta_curr = beta_curr->next;
		}
	}
	return ret;	
}


int maxNineSum () {
	// Fill the code in below.
	int res = 0;
	if (head == NULL) return 0;
	if (head->next == NULL)
		return head->data == 9 ? 1 : 0;
	if (head->next->next == NULL)
		return ((head->data + head->next->data) == 9) ? 2 : 0;
	NODE* left, * center, * right;
	right = head->next->next;
	center = head->next;
	left = head;
	left->next = NULL;
	while (center != NULL) {
		res = max(res, 2*halfLengthNineSum(left, center));
		if (center->data == 9 && right != NULL) {
			res = max(res, 2*halfLengthNineSum(left, right) + 1);
		}
		center->next = left;
		left = center;
		center = right;
		if (center != NULL) right = center->next;
	}
	return res;
}


int main () {
	int size = 0, i = 0;
	char input[10000];
	scanf ("%s", input);

	i = strlen(input) - 1;

	while (i != -1) {
		addFirst(input[i--] - '0');
	}

	printf("%d\n", maxNineSum());

	return 0;
}
