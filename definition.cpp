#include "definition.h"

// TRANSFORME LES STR EN TYPE COURS
cours StrToCours(std::string coursStr){
    if (coursStr == "CM") {
        return CM;
    } else if (coursStr == "TD") {
        return TD;
    } else if ((coursStr == "TP_INFO") || (coursStr == "TP Informatique")) {
        return TP_INFO;
    } else if ((coursStr == "TP_ELEC") || (coursStr == "TP Electronique")) {
        return TP_ELEC;
    } else {
        return EXAMEN;
    }
}

// TRANSFORME LES TYPES COURS EN STR
std::string  CoursToStr(cours cours){
    switch (cours) {
    case CM: return "CM";
    case TD: return "TD";
    case TP_INFO: return "TP_INFO";
    case TP_ELEC: return "TP_ELEC";
    case EXAMEN: return "EXAMEN";
    default: return "";
    }
}

