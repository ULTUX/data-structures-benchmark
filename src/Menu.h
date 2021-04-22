//
// Created by bulio on 17.04.2021.
//

#ifndef SDIZO1_MENU_H
#define SDIZO1_MENU_H


#include "../include/StructureType.h"
#include "../include/BST.h"
#include "../include/DoublyLinkedList.h"
#include "../include/DynamicArray.h"
#include "../include/Heap.h"
#include "../include/RBTree.h"

class Menu {
private:
    StructureType type;
    BST* bst;
    DoublyLinkedList* doublyLinkedList;
    DynamicArray* dynamicArray;
    Heap* heap;
    RBTree* rBTree;

    void backToMainMenu();


    void printMainMenu();


    void printFileLoadMenu();


    void printBSTMenu();



    void printDoublyLinkedListMenu();


    void printDynamicArrayMenu();


    void printHeapMenu();


    void printRBTreeMenu();


    void printBenchmarkMenu();

    /**
     * Initialize BST with details provided by user.
     */
    void initBST();

    /**
     * Initialize DoublyLinkedList tree with details provided by user.
     */
    void initDoublyLinkedList();

    /**
     * Initialize DynamicArray tree with details provided by user.
     */
    void initDynamicArray();

    /**
     * Initialize Heap tree with details provided by user.
     */
    void initHeap();

    /**
     * Initialize RB tree with details provided by user.
     */
    void initRBTree();

    /**
     * Prompt user with message to input integer value and return it.
     * @param message Message to be displayed.
     * @return Value inputted by user.
     */
    static int getIntegerInput(string message);

    /**
     * Prompt user with message to input float value and return it.
     * @param message Message to be displayed.
     * @return Value inputted by user.
     */
    static float getFloatInput(string message);

    /**
     * Nicely print thrown exception on stdout.
     * @param e Exception to be printed.
     */
    static void printException(exception &e);

public:
    Menu();

};


#endif //SDIZO1_MENU_H
