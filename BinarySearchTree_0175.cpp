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
};

class BinaryTree{

    //memberi akses modifier dan deklarasi object
public :
    Node* ROOT;

    //membuat constructor dan memberi nilai kepada object root
    BinaryTree(){
        ROOT = nullptr;
    }

    //membuat prosedur insert
        void insert(string element){

            //memberi nilai untuk setiap object yang berada di dalam prosedur insert
            Node* newNode = new Node(element, nullptr, nullptr);
            newNode->info = element;
            newNode->leftChild = nullptr;
            newNode->rightChilt = nullptr;

            Node* parent = nullptr;
            Node* currentNode = nullptr;
            search(element, parent, currentNode);

            //membuat coditional statement
            if(parent == nullptr){
                ROOT = newNode;
                return;
            }

            if (element < parent->info)
            {
                parent->leftChild = newNode;
            }
            else if (element > parent->info)
            {
                parent->rightChilt = newNode;
            }
        }

        void search(string element, Node*& parent, Node*& currentNode){
            
        }
};