#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

// queue node
typedef struct _Node
{
    int data;
    struct _Node* next;
} Node;

// variables
Node* head;
Node* tail;
int t, n, turn;
int arr[1001];
char is_possible;

// queue methods
void init_queue()
{
    head = NULL;
}

void enqueue(int data)
{
    if (head == NULL) {
        head = (Node*)malloc(sizeof(Node));
        head->data = data;
        head->next = NULL;
        tail = head;
    } else {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = NULL;
        tail->next = new_node;
        tail = new_node;
    }
}

int dequeue()
{
    Node* old_node;
    int res;
    res = head->data;
    old_node = head;
    head = head->next;
    free(old_node);
    return res;
}

// utils
void enqueue_n(int n)
{
    for (int i = 1; i < n+1; i++) {
        enqueue(i);
    }
}

// void print_queue()
// {
//     Node* curr = head;
//     if (curr == NULL) return;
//     while (curr != NULL) {
//         printf("%d ", curr->data);
//         curr = curr->next;
//     }
//     printf("\n");
// }

void init_arr() {
    for (int i = 0; i < 1001; i++) {
        arr[i] = 0;
    }
}

// solve
void solve()
{
    turn = 1;
    while (true) {
        for (int i = 0; i < turn; i++) {
            enqueue(dequeue());
        }
        if (arr[head->data - 1] == 0) {
            arr[head->data - 1] = turn;
        } else {
            is_possible = false;
            break;
        }
        if (head->next == NULL) {
            break;
        }
        dequeue();
        turn++;
    }
}

// parse and print
int main()
{
    scanf("%d", &t);
    for (int test = 0; test < t; test++) {
        init_queue();
        scanf("%d", &n);
        if (n == 1) {
            printf("1\n");
            continue;
        }
        enqueue_n(n);
        init_arr();
        is_possible = true;
        solve();
        if (is_possible) {
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
