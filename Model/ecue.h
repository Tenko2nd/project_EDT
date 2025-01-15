#ifndef ECUE_H
#define ECUE_H

#include "main.h"
#include <string>
#include "enseignant.h"
#include "groupeetudiant.h"

class Ecue
{
private:
    std::string nom;
    uint32 nbHeure;
    GroupeEtudiant etudiants;
    Enseignant enseignant;
    cours typeSalle;
    uint32 heureTotal[5];
    uint32 heureRest[5];

public:
    Ecue();
    Ecue(std::string nom, int nbHeure, GroupeEtudiant etudiants, Enseignant enseignant);
    std::string getNom();
    uint32 getNbHeure();
    GroupeEtudiant getEtudiants();
    Enseignant getEnseignant();
    cours getTypeSalle();
    uint32* getHeureTotal();
    uint32* getHeureRest();

    void setNom(const std::string& nom);
    void setNbHeure(uint32 nbHeure);
    void setEtudiants(const GroupeEtudiant& etudiants);
    void setEnseignant(const Enseignant& enseignant);
    void setTypeSalle(cours typeSalle);
    void setHeureTotal(const uint32 heures[5]);
    void setHeureRest(const uint32 heures[5]);



};

#endif // ECUE_H

