#pragma once
using namespace std;

#pragma once

struct Node {
    int data;
    Node* next;
};

struct Priority_queue { // max heap
    Node* front = NULL;
    Node* rear = NULL;
};

void swap(int& a, int& b);
void print_queue(Priority_queue q);
int parent(int i);
int leftChild(int i);
int rightChild(int i);
Node* findNode(Priority_queue q, int i);
void shiftUp(Priority_queue& q, int i);
void shiftDown(Priority_queue& q, int i);
void enqueue(Priority_queue& q, int key);
bool check_empty(Priority_queue q);
int count_element(Priority_queue q);
void remove_all(Priority_queue& q);
void insert_element(Priority_queue& q, int key);
void remove_element(Priority_queue& q, int index);
Priority_queue create_queue(int* a, int n);
