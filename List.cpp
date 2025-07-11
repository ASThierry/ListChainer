#include "List.h"
#include <iostream>


/*void Listchainer::ajoudFin(int val){
    // verfier si un liste existe au cas contraire je la creer
    if(first.getNextList() != nullptr){
        first.setValue(val);
        first.setNextList(nullptr);
    }
   List *nouvList=new List(val);
   first.setNextList(nouvList);
}*/
/***
 * cette fonction permet d'ajouter une liste a la toute fin
 * pour cela creer de fonction un fonction ajoutefinliste qui a pour but de gerer dynamiquement 
 * le chagement des list
 * et la fonxtion public ajoutFon qui est utiliser par l'utilisateur 
 */

void List::ajoutFinListe(int val,Node *courant){
    //Liste null    
    if(_first==nullptr){
        _first= new Node(val);
    }else{
        // verifier aussi que la liste courant est null pas si oui je donne a mon noeud la tête de ma liste
        if (courant==nullptr)
        {
            courant=_first;
        }
        while (courant->getNextNode()!= nullptr)
        {
            courant=courant->getNextNode();
        }
         Node *nouvlist = new Node(val);
        courant->setNextNode(nouvlist);

        
    }
}

int List::longeurchaine(Node* courant) {
     // Fin de la liste 
    if (courant == nullptr) 
        return 0;
    else
        return 1 + longeurchaine(courant->getNextNode());
}
// Cette fonction retourn le taille de la liste en debutant de la tete.
int List::longeur(){
     return longeurchaine(_first);
}
void List::affichageliste(Node* courant) {
    if (courant == nullptr) return;
    std::cout << courant->getValue() << " ";
    affichageliste(courant->getNextNode());
}
/// @brief Affichage des elements de ma liste chainer.
void List::affichage(){
    std::cout << "Liste chainee : ";
    affichageliste(_first);
}


/*Cette fonction si dessous permet de dajouter un Nous au debut de la list*/

void List::ajoutDebut(int val){
    // Voire si le liste des vide si oui creer une nouvelle liste
    if(_first == nullptr){
        _first=new Node(val);
    }else{
        // Si le le liste courante est vide on la creer au cas echant 
        // On la on cree un nouvelle liste que l'on ajout au debut 
        
        Node* nouvlist=new Node(val);
        nouvlist->setNextNode(_first);
        _first=nouvlist;
        
    }
    
    
}
void List::rangerList(){
    // reation d'un variable pour l'arret d'itteration.
    bool echange= true;
    Node*courant= _first;
    // les variable ou je stoke les valeurs a comparer
    int val1 =0;
    int val2=0;
    if(courant == nullptr){
        std::cout<<"Vous n'avier pas d'element dans votre listes"<<std::endl;
    }
    else {
        while (echange) {
            courant= _first;
            echange= false;
            while (courant->getNextNode() != nullptr) {
                val1 = courant->getValue();
                val2 = courant->getNextNode()->getValue();
                //echanger 
                if (val1 > val2) {
                    courant->setValue(val2);
                    courant->getNextNode()->setValue(val1);
                    echange= true;
                }
                courant = courant->getNextNode();
            }


        }
    }
}

void List::suppElem(int val){
    /*Node*courant= _first;
    if(courant==nullptr){
        std::cout<<"Votre liste est vide."<<std::endl;
    }else{
        while (courant->getNextNode()!=nullptr)
        {
            if(courant->getValue()==val){
                courant->setValue(0);
            }
            if(courant->getNextNode()->getValue()==val){
                courant->setNextNode(courant->getNextNode()->getNextNode());
            }
            if(courant->getNextNode()->getValue()==val && courant->getNextNode()->getNextNode()==nullptr)
                courant->setNextNode(nullptr);
            courant = courant->getNextNode();
        }
        
    }*/
}

void List::suppFirst() {
    Node *tmp;
    Node *tmpdel;
    // creation de noeud temporaire pour stoker ma variable
    if (_first == nullptr) {
        std::cout << "Votre liste ne contient aucun élément" << std::endl;
        return;
    }
    // Tete du noeud
    tmpdel = _first;
    // Noeud suivant
    tmp =_first->getNextNode();

    if(tmp!= nullptr){
        std::cout<<" La valeur suivante est : "<<tmp->getValue()<<std::endl;
    }else {
        std::cout << " La valeur suivante est null " << std::endl;
    }
    // Suppression de la tete
    delete tmpdel;
    // Mise à jour de le tête de la liste.
    _first=tmp;

}
