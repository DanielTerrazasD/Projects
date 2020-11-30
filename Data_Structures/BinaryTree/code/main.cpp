﻿/*****************************************************************************/
/** Copyright (c) 2020, Daniel Terrazas                                     **/
/** ----------------------------------------------------------------------- **/
/**                              Data Structures                            **/
/** ----------------------------------------------------------------------- **/
/** FILE: main.cpp                                                          **/
/** ----------------------------------------------------------------------- **/
/** DESCRIPTION:                                                            **/
/** main.cpp description.                                                   **/
/** ----------------------------------------------------------------------- **/
/**                                                                         **/
/** Permission is hereby granted, free of charge, to any person obtaining a **/
/** copy of this software and associated documentation files                **/
/** (the "Software") to deal in the Software without restriction, including **/
/** without limitation the rights to use, copy, modify, merge, publish,     **/
/** distribute, sublicense, and/or sell copies of the Software, and to      **/
/** permit persons to whom the Software is furnished to do so, subject to   **/
/** the following conditions:                                               **/
/**                                                                         **/
/** The above copyright notice and this permission notice shall be included **/
/** in all copies or substantial portions of the Software.                  **/
/**                                                                         **/
/** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS **/
/** OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF              **/
/** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  **/
/** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY    **/
/** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,    **/
/** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE       **/
/** SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                  **/
/**                                                                         **/
/*****************************************************************************/

/*****************************************************************************/
/**                               Preprocessors                             **/
/*****************************************************************************/

/*****************************************************************************/
/**                                  Includes                               **/
/*****************************************************************************/

#include <iostream>
#include "BinaryTree.hpp"

/*****************************************************************************/
/**                                   Macros                                **/
/*****************************************************************************/

/*****************************************************************************/
/**                                 Data Types                              **/
/*****************************************************************************/

/*****************************************************************************/
/**                                 Constants                               **/
/*****************************************************************************/

/*****************************************************************************/
/**                                 Variables                               **/
/*****************************************************************************/

/*****************************************************************************/
/**                                  Classes                                **/
/*****************************************************************************/

/*****************************************************************************/
/**                            Function Prototypes                          **/
/*****************************************************************************/

/*****************************************************************************/
/**                            Function Definitions                         **/
/*****************************************************************************/

int main(int argc, char const* argv[])
{

// Tree example:
//                  1
//                /    \
//              2       3
//            /  \     /  \
//          4     5   6    7

    int inorder_traversal[] = { 4, 2, 5, 1, 6, 3, 7 };
    int preorder_traversal[] = { 1, 2, 4, 5, 3, 6, 7 };
    int inorder_size = sizeof(inorder_traversal) / sizeof(inorder_traversal[0]);
    int preorder_size = sizeof(preorder_traversal) / sizeof(preorder_traversal[0]);

    BinaryTree tree;
    tree.Create(preorder_traversal, preorder_size, inorder_traversal, inorder_size);

    tree.RecursivePreoderTraversal();
    tree.RecursiveInorderTraversal();
    tree.RecursivePostorderTraversal();
    tree.RecursiveLevelorderTraversal();

    std::cout << "Tree Height: " << tree.GetHeight() << std::endl;
    std::cout << "Tree Count: " << tree.GetCount() << std::endl;
    std::cout << "Tree Leaf Nodes: " << tree.GetLeafNodes() << std::endl;

    tree.IterativePreoderTraversal();
    tree.IterativeInorderTraversal();
    tree.IterativePostorderTraversal();
    tree.IterativeLevelorderTraversal();

    std::getchar();

    return 0;
}

/*****************************************************************************/
/**                                END OF FILE                              **/
/*****************************************************************************/
