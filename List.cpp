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

//void List::ajoutFinListe(int val,Node *courant){
//
//    if (_first == nullptr) {
//        _first = new Node(val);
//    } else {
//        // Creation d'une liste si on est a la fin
//        if (courant->getNextNode() == nullptr){
//            Node* noeud = new Node(val);
//            courant->setNextNode(noeud);
//        } else {
//            // Sinon on continue à parcourir la liste chainer
//            ajoutFinListe(val, courant->getNextNode());
//        }
//    }
//}
void List::ajoutFinListe(int val,Node *courant){
    if (_first == nullptr){
        _first = new Node(val);
    }else{
        if (courant == nullptr)
        {
            courant = _first;
        }
        while(courant->getNextNode() != nullptr){
            courant = courant->getNextNode();
        }
        Node* nouvlist = new Node(val);
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

void List::ajoutDebut(int val, Node* courant){
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
    // variable qui verifie si on echage ou pas.
    bool echange= true;
    Node*courant= _first;
    // val1 et val2 permet de recuperer les deux variable successive
    int val1 =0;
    int val2=0;
    // Liste vide
    if(courant == nullptr){
        std::cout<<"Vous n'avier pas d'element dans votre listes"<<std::endl;
    }
    else {

        while (echange) {
            courant= _first;
            echange= false;
            // echage des valeur et parcours de la liste.
            while (courant->getNextNode() != nullptr) {
                val1 = courant->getValue();
                val2 = courant->getNextNode()->getValue();

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

void List::supp(int val) {
    // Liste vide
    if (_first == nullptr) {
        std::cout << "Votre liste ne contient aucun élément" << std::endl;
        return;
    }
    // initialisation du Noeud courant
    Node *courant = _first;
    Node *suivant=_first->getNextNode();

    // Suppression de Noeud
    if (_first->getValue() == val) {
        delete (_first);
        _first = suivant;
    }
   /* Mauvais logique sur quoi supprimer et sur qui pointer.
    while (nodeSuivant->getNextNode()!= nullptr){
        if(nodeSuivant->getValue()==val){
            Node* tmp = nodeSuivant->getNextNode();
            delete nodeSuivant;
            nodeSuivant=tmp;
        }else{
            nodeSuivant = nodeSuivant->getNextNode();
        }
    }*/
    while (suivant!= nullptr){
        //std::cout<<"La valeur de _first avant le if est  :"<<_first->getValue()<<std::endl;
        if(suivant->getValue()==val){

            courant->setNextNode(suivant->getNextNode());
            delete suivant;
            //
            suivant=courant->getNextNode();
        }else{
             courant = suivant;
             suivant=suivant->getNextNode();
        }
    }
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

void List::recherhe(int val) {
    int compteur=0;
    // Liste vide
    if(_first== nullptr){
        std::cout<<"Votre liste est vide."<<std::endl;
    }
    Node *courant = _first;
    // iteration et recherche de l'existance de val
    while (courant!= nullptr){
        if( courant->getValue() == val ){
            compteur++;
            std::cout << "votre liste contient la valeur " << val << " et se repete " << compteur << " fois" << std::endl;
        }
        courant=courant->getNextNode();

    }
    if(compteur == 0){
        std::cout<<"Votre liste ne contient pas la valeur "<<val<<std::endl;
    }
}
List* List::unionList(List*l1,List*l2){
    // La liste l1 et l2 sont tous de vide
    if(l1==nullptr && l2 == nullptr){
        std::cout<<"Vos deux listes sont vides."<<std::endl;
    }
    // Cas ou l1 vide et l2 n'est vide ou inversement
    if(l1==nullptr && l2!=nullptr ){
        return l2;
    }else{
        return l1;
    }
    // creation de list d'union
    List* lu;
    while (l1->_first->getNextNode()!=nullptr)
    {
        lu->ajoutFin(l1->_first->getValue());
        l1->_first = l1->_first->getNextNode();
    }
    while (l2->_first->getNextNode()!=nullptr)
    {
        lu->ajoutFin(l2->_first->getValue());
        l2->_first = l2->_first->getNextNode();
    }
    
    return lu;
    
    
}