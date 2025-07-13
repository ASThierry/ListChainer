cmake_minimum_required(VERSION 3.28.3)

# Définir le nom et la version du projet
project(ListeChainer VERSION 1.0)


# Ajouter l'exécutable
add_executable(ListeChainer main.cpp
 List.cpp List.h 
 Node.cpp Node.h)