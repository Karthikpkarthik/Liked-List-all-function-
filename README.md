# Simple C++ Linked List

This is a simple C++ implementation of a singly linked list. It provides basic operations to create, modify, and manipulate a linked list.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Methods](#methods)
- [Example](#example)

## Introduction

This C++ code defines two classes: `node` and `linkedlist`. The `node` class represents the individual elements of the linked list, while the `linkedlist` class provides a set of functions for working with the linked list. It includes functions for appending, prepending, deleting nodes, reversing the list, and more.

## Usage

To use this code, you should include it in your C++ project and create a `linkedlist` object. Then, you can use the provided methods to manipulate the linked list.

```cpp
#include <iostream>
#include "linkedlist.h"

int main() {
    // Create a new linked list with an initial value
    linkedlist mylinkedlist(11);

    // Append elements to the linked list
    mylinkedlist.append(12);
    mylinkedlist.append(23);
    mylinkedlist.append(34);

    // Print the linked list
    mylinkedlist.print_list();

    // Set the value of a node at a specific index
    mylinkedlist.set(1, 45);

    // Insert a node at a specific index
    mylinkedlist.insert(2, 66);

    // Print the linked list after modifications
    mylinkedlist.print_list();

    // Delete a node by index
    mylinkedlist.deleteNode(0);
    std::cout << "After the delete node function" << std::endl;
    mylinkedlist.print_list();

    // Reverse the linked list
    std::cout << "After the reverse of the linked list" << std::endl;
    mylinkedlist.reverse();
    mylinkedlist.print_list();

    // Access the head of the linked list
    std::cout << mylinkedlist.get_head()->value;

    return 0;
}
```

## Methods

### `linkedlist(int value)`

Create a new linked list with an initial value.

### `append(int value)`

Append a node with the given value to the end of the linked list.

### `print_list()`

Print the elements of the linked list.

### `set(int index, int value)`

Set the value of the node at the specified index.

### `insert(int index, int value)`

Insert a new node with the given value at the specified index.

### `deleteNode(int index)`

Delete the node at the specified index.

### `reverse()`

Reverse the linked list.

### `get_length()`

Print the length of the linked list.

### `get_head()`

Get the head node of the linked list.

### `get_tail()`

Get the tail node of the linked list.

## Example

The provided example demonstrates how to use the `linkedlist` class to create, modify, and manipulate a linked list. You can adapt and extend this code as needed for your own projects.# Liked-List-all-function-
