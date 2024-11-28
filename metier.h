#ifndef METIER_H_INCLUDED
#define METIER_H_INCLUDED

typedef struct
{
   char matricule[6];
   char nom[26];
   char prenom[21];
   char sexe;
   int L_annee_de_naissance;
   int Le_mois_de_naissance;
   int Le_jour_de_naissance;
   char Le_lieu_de_naissance[31];
   float notes[6];
   float moyenne;
   int Nombre_de_credit;
} Etudiant ;

int Calcul_du_Nombre_de_credit(Etudiant *classe);

void Affichage_des_Notes(Etudiant *classe);

void Affichage_des_informations(Etudiant *classe);

void Affiche_du_Releve_de_Notes(Etudiant *classe);

void Affichage_des_infos(Etudiant *classe);

void Anglais(Etudiant *classe);

void Chimie(Etudiant *classe);

void Francais(Etudiant *classe);

void Informatique(Etudiant *classe);

void Mathematique(Etudiant *classe);

void Physique(Etudiant *classe);

void Matricule(Etudiant *classe);

void Nom(Etudiant *classe);

void Prenom(Etudiant *classe);

void Sexe(Etudiant *classe);

void Annee_de_naissance(Etudiant *classe);

void Mois_de_naissance(Etudiant *classe);

void Jour_de_naissance(Etudiant *classe);

void Lieu_de_naissance(Etudiant *classe);

void Affichage_de_la_mention(float moyenne);

void Affichage_du_rang_des_Etudiants(Etudiant classe[] ,int Nombre_d_etudiants);

void Calcul_de_la_moyenne(Etudiant *classe);

void Liste_de_Rattrapage(Etudiant classe[],int Nombre_d_etudiants);

void Liste_des_Redoublants(Etudiant classe[],int Nombre_d_etudiants);

void Meilleur_Moyenne_et_faible_Moyenne(Etudiant classe[], int Nombre_d_etudiants);

void Moyenne_de_la_Classe(Etudiant classe[],int Nombre_d_etudiants);

void Pourcentage(Etudiant classe[],int Nombre_d_etudiants);

void Trie_des_Annee(Etudiant classe[], int Nombre_d_etudiants);

void Trie_des_Mois(Etudiant classe[], int Nombre_d_etudiants);

void Trie_des_Jours(Etudiant classe[], int Nombre_d_etudiants);

void Choix_pas_Correct();

int get_positive_number();


#endif // METIER_H_INCLUDED
