#include <iostream>
#include "List.h"
#include "Node.h"

int main(){
    List *list=new List();
    list->ajoutFinListe(5);
    list->ajoutFinListe(4);
    list->ajoutFinListe(2);
    list->ajoutDebut(4);
    list->ajoutDebut(10);
    list->affichage();
    std::cout<<" "<<std::endl;
    std::cout<<"La longueur de votre liste est:"<<list->longeur()<<std::endl;
    list->rangerList();
    std::cout<<" "<<std::endl;
    list->affichage();
    list->suppFirst();
    list->affichage();

    return 0;
}