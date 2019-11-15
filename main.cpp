// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"

using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

// testing int type
int main() {
    ifstream inFile;
    inFile.open("int.txt");

    BST_312<int> bst;
   
    int s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
    inFile.close();    

    cout << "Nodes: " << bst.countNodes() << endl;
    
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
   
    s = 10; 
    cout << "inserting ... " << s << endl; 
    bst.insertItem(s);
    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    cout << "number of nodes: " << bst.countNodes() << endl;
    
    s = 13;
    if (bst.isItemInTree(s)) {
        cout << s << " is in the tree" << endl;
    }
    else {
        cout << s << " is not in the tree" << endl;
    }
 
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = 7;
    bst.deleteItem(s);
    s = 3;
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    
    s = 3;
    if (bst.isItemInTree(s)) {
        cout << s << " is in the tree" << endl;
    }
    else {
        cout << s << " is not in the tree" << endl;
    }
    
    cout << "Emptying tree..." << endl;
    bst.makeEmpty();
    if (bst.isEmpty()) {
       cout << "Tree is empty; test success" << endl;
    }   

}

/*
// testing string type
int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }
    inFile.close();    

    cout << "Nodes: " << bst.countNodes() << endl;
    
    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
   
    s = "vector"; 
    cout << "inserting ... " << s << endl; 
    bst.insertItem(s);
    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;
    cout << "number of nodes: " << bst.countNodes() << endl;
    
    s = "z";
    if (bst.isItemInTree(s)) {
        cout << s << " is in the tree" << endl;
    }
    else {
        cout << s << " is not in the tree" << endl;
    }
 
    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "z";
    bst.deleteItem(s);
    s = "moody";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    
    s = "z";
    if (bst.isItemInTree(s)) {
        cout << s << " is in the tree" << endl;
    }
    else {
        cout << s << " is not in the tree" << endl;
    }
    
    cout << "Emptying tree..." << endl;
    bst.makeEmpty();
    if (bst.isEmpty()) {
       cout << "Tree is empty; test success" << endl;
    }    
}
*/
