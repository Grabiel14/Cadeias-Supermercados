/*
 * list.c
 * ASA 2018
 * Gabriel Figueira, Rafael Andrade
 * P1 (Sr. Joao Caracol)
 */

#pragma once

struct node;

typedef struct node * Node;

Node * buildAdjList();
void   traverseAdjList(Node * adjList, void (*func)(Node));
void   showAdjList(const Node * adjList);
void   freeAdjList(Node * adjList);
