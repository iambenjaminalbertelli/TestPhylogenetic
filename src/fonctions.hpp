//
//  fonctions.hpp
//  k means phylogenetic trees clustering
//
//  Created by Benjamin ALBERTELLI on 13/06/2022.
//

#ifndef fonctions_hpp
#define fonctions_hpp

#include <stdio.h>
#include "structures.h"
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <limits>
#include <string>
#include <cstring>

using namespace std;

void deleteFiles(void);
void trier(struct HGT *, int);
void addLeafAndUpdate(struct InputTree *, int);
void ListeSommets_taille_0(double **,int * ,int);
int Est_un_sous_ensemble_exact(int *,int *);
void ListesBranchesPourHGT(int *, long int *, int, struct DescTree * , int *, int*);
void SAVEASNewick(double *, long int *, char **, int, const char *);
void deleteBipartition(DescTree *, InputTree);
void PrintHeader(FILE *, Parameters);
void initInputTree(struct InputTree *);
void printRoot(char *, int, int);
void printRootByLeaves(char *, int, struct InputTree *);
void allocMemmory(struct InputTree *, int);
void freeInputTree(struct InputTree *, int);
void freeReducedTree(struct InputTree *, int);
void freeTree(struct InputTree *, int);
int TestSubTreeConstraint(struct InputTree, int, int, struct DescTree *, struct DescTree *);
int TestSubTreeLeafs(struct InputTree, int, int, struct DescTree *, struct DescTree *);
void loadCriteria(struct CRITERIA, struct HGT *);
void computeCriteria(double **, double **, int, struct CRITERIA *, double *, long int *, double *, long int*);
double MIN2 (double, double);
void ComputeNewDistances(double **, double **, int, int, int, double, double, int, int, int);
void applyHGT(double **, struct InputTree *, int, int);
void applyHGT2(double **, struct InputTree *, int, int);
void findListSpecies(struct HGT *, struct DescTree *, struct InputTree);
int TestCriterionAndUpdate(int *, const char *, struct CRITERIA, struct HGT *, int, int, int, int);
void UpdateCriterion(int *, const char *, struct CRITERIA, struct HGT *, int, int, int);
int isAValidHGT(struct InputTree, int, int);
void copyInputTree(struct InputTree *, struct InputTree, int, int);
void printLeaves(char *, int, struct HGT *, int, char **);
int sameHGT(struct HGT, struct HGT);
int sameHGT2(struct HGT, struct HGT);
void copyHGT(struct HGT, struct HGT);
void updateBootHGT(int, struct HGT *, int, struct HGT *, int *, double **);
void sortHGT(struct HGT *, int, struct Parameters);
void FreeMemory_InputTreeReduced(struct InputTree *, int);
void FreeMemory_InputTree(struct InputTree *, int);
int nextTreeIsNewick(FILE *);
char * readNewick(FILE *);
int nbSpeciesNewick(string);
void newickToMatrix(string, struct InputTree *);
void readMatrix(FILE *, struct InputTree *);
int readInputFile(string, string, const char *, struct InputTree *, struct InputTree *, char *);
int midPoint(long int *, double **, int, int);
void AdjustBranchLength(struct InputTree *, struct InputTree, int, int);
void InitCriteria(struct CRITERIA *, int);
void FreeCriteria(struct CRITERIA *, int);
int findAllMinimalScenario(struct InputTree, struct InputTree, int, int);
int findAllHGT_no_criterion(struct InputTree, struct InputTree, struct Parameters, struct HGT *);
int findAllHGT(struct InputTree, struct InputTree, struct Parameters, struct HGT *);
int findBestHGT(int, struct InputTree, struct InputTree, struct Parameters, struct HGT *);
int findBestHGT_nombreLimite(struct DescTree *, struct DescTree *, int *, int, struct InputTree, struct InputTree, struct Parameters, struct HGT *);
int findBestHGTtab(struct InputTree, struct InputTree, struct Parameters, struct HGT *, int *, int *, int);
void findBranch(struct InputTree, int *, int *);
void expandBestHGT(struct HGT, struct HGT *, struct ReduceTrace, struct DescTree *, struct InputTree);
int isInside(struct DescTree, struct DescTree);
void CreateSubStructures(struct InputTree *, int, int);
void ReduceTree(struct InputTree, struct InputTree, struct InputTree *, struct InputTree *, struct ReduceTrace *, struct DescTree *, struct DescTree *, int, int);
int DeleteUseLessHGT(int, struct HGT *, struct InputTree, struct InputTree);
void help();
void printTransfer(FILE *, int, char **, int, int, int, int, int);
void printListSpecies(struct HGT *, int, double *, int);
void printHGT(FILE *,FILE *,char *, struct CRITERIA *, char *, int,/*FILE *out,*/struct InputTree, struct HGT *, int, double *, char *, int);
void printBestHGT_F(FILE *, int ,struct InputTree, struct HGT, int *, int, int);
int compareLeaves(int *, int *, int);
int findApproxRootBranch(int *, struct InputTree *, int);
int bestRFNeighbor(struct InputTree *, struct InputTree *, int);
int compareBranches(int *, int *, int);
int bestRFBranch(struct InputTree *, struct InputTree *);
bool file_exists(const char *);
int addRoot(struct InputTree *, struct InputTree *, const char *, const char *, char *, char *, int *, const char *);
void chargerFichier(struct InputTree *, const char *, const char *);
int readInput(int, const char *, struct InputTree *);
void printMatrix(char **, double **, int);
void printMatrix2(char **, double **, int);
void printBranches(FILE *, struct InputTree, const char *, int *, int);
int ExtraireDonnees(const char *, char *, char *);
int readParameters(struct Parameters *);
void saveTree(char *, struct InputTree, struct HGT *, int, int, const char *, char *, double *);
void deleteSommet(struct DescTree *, int, int);
void supprimerSousEnsemble(struct DescTree *, int);
int formatResult(struct HGT *, int, struct HGT *, struct InputTree);

#endif /* fonctions_hpp */
