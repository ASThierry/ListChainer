#include "Node.h"

// Recuperation de la valeur.
int Node::getValue(){
    return this->_value;
}
//Recuperation du pointeur de la liste suivant.
Node *Node::getNextNode(){
    return this->_nextNode;
}
//Assignation d'une valeur.
void Node::setValue(int val){
    _value=val;
}
void Node::setNextNode(Node * nextNode){
    _nextNode=nextNode;
}