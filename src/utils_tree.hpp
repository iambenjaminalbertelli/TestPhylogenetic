//
//  utils_tree.hpp
//  k means phylogenetic trees clustering
//
//  Created by Benjamin ALBERTELLI on 13/06/2022.
//

#ifndef utils_tree_hpp
#define utils_tree_hpp

#include <stdio.h>
#include "structures.h"
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

double BipartitionDistance (int **, int ** ,int);
void NJ(double **, double **, int);
void TrierTableau(int[], int);
int vecteursEgaux(struct DescTree, struct DescTree);
void Floyd(double **, double **, int, int);
void Floyd(double **, double **, double **, int, int);
void printEdges(FILE *, int, long int *, double *, char **, int, int *, int, int);
void loadAdjacenceMatrix( double **, long int *, double *, int, int);
void odp1(double **, int *, int *, int *, int);
int Tree_edges (double **, long int *, double *, int, int);
int Bipartition_Table (double **, int **, int *, int);
int Table_Comparaison (int **, int **, int *, int *, int, int, int);
void approx_arb(double **, double **, double **, double **, int *, long int *, double *, int, int *, int, int);
int findFils(double **, int, int);
struct TNoeud * CreerSousArbre(long int *, int *, double **, int, int);
void sortIntTab(int *, int, int);
void ParcoursArbre(struct TNoeud *, struct DescTree *);
void viderArbre(struct TNoeud *);
void AfficherArbre(struct TNoeud *, int);
void AfficherArbre2(struct TNoeud *, int, char **);
void printTree(long int *, double **, int, double **, struct DescTree *, int, int, char **);
void RechercherBipartition(long int *, double **, int, double **, struct DescTree *, int, int);
static void xtoa (unsigned long, char *, unsigned, int);
char * itoa_(int, char *, int);
int lectureNewick_old(string, long int *, double *, char **, int *);
int lectureNewick1(const char *, long int *, double *, char **);
void filtrerMatrice(double **, double **, char **, char **, int, int, char *);
int ecrireMatrice(double **, const char *, int, char **);
void ajouterMatriceGene(double **, const char *, int, char **);
void TrierMatrices(double **, char **, char **, int);
int compare(int *, int *, int);
void CalculerBootARETE(int *, double **, double **, int);
void trouver_3_noeuds(double **, int, int, int[]);
void trouver_fils(double **, int, int, int[], int);
void creerNoeudDT(int, double **, struct DescTree *, int *, int *);
void deleteBipartitionSansRacine(struct DescTree *, int);
void printNoeudDT(struct DescTree *, int, int, int);
void RechercherBipartitionSansRacine(long int *, double **, double **, struct DescTree *, const int, int);
int lectureNewick(string, long int *, double *, char **, int *);


#endif /* utils_tree_hpp */
