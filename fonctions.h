/*
  Projet AC02 - AUTOMATE CELLULAIRE
  Luc Véron
  Guillaume Nibert
*/

#ifndef AUTOMATES_CELLULAIRES_FONCTIONS_H
#define AUTOMATES_CELLULAIRES_FONCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct Grille Grille;
struct Grille
{
    char** pointeurCase;
    int nb_lignes;
    int nb_colonnes;
};

Grille* creerGrille(int nb_lignes, int nb_colonnes);
void affichageGrille(Grille* grille);
void affichageGrille2(Grille* grille);
int random_ (int probabilite);
void grilleAleatoire(Grille *grille, int probabilite);
void grilleManuelle(Grille *grille);
int nbVoisinsVivants (Grille *grille, int i, int j);
Grille* simulationJeuDeVie (Grille *grille);
Grille* simulationWithRegles (Grille *grille, int nbMinToLive, int nbMaxToLive, int nbMinToStayAlive, int nbMaxToStayAlive);
void libererMemoire(Grille* grille);


#endif //AUTOMATES_CELLULAIRES_FONCTIONS_H
