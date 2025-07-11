#ifndef NODE_H
#define NODE_H

class Node {
protected:
    int _value;
    Node *_nextNode; // Pointer vers la liste suivante

public:
    // Constructeur
    Node(int val):_value(val),_nextNode(nullptr){}
    // Destructeur
    ~Node(){delete _nextNode;}
    //Getter
    int getValue();
    Node * getNextNode();
    //Setter
    void setValue(int val);
    void setNextNode(Node * nextNode);
    
};
#endif