#include <iostream>
using namespace std;

//membuat class node
class Node{
    //memberi akses modifier serta mendeklarasi variable dan project node
public:
    string info;
    Node* leftChild;
    Node* rightChilt;

    
    //membuat constructor untuk class node
    Node(string i, Node* l, Node* r){
        //memberi nilai parameter ke variabel
        info = i;
        leftChild = l;
        rightChilt = r;
    }
}