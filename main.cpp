/**
 * @file main.cpp
 * @brief Programme principal pour la lecture de température avec un capteur MCP9808.
 * @author  Julien NESIC/ Ewen HAMERY
 * @date 13/09/2024
 */

#include <iostream>
#include <unistd.h>
#include "MCP9808.h"

/**
 * @brief Fonction principale du programme.
 * 
 * Cette fonction initialise le capteur MCP9808, puis entre dans une boucle
 * infinie pour lire et afficher la température toutes les 2 secondes.
 * 
 * @return int Code de retour du programme (0 pour succès, 1 pour erreur).
 */
int main() {
    try {
        // Initialisation du capteur
        MCP9808 sensor;

        // Affichage des instructions
        std::cout << "Programme de lecture de température MCP9808" << std::endl;
        std::cout << "Appuyez sur Ctrl+C pour quitter." << std::endl;

        // Boucle principale de lecture de température
        while (true) {
            // Lecture de la température
            float temperature = sensor.getTemperature();
            
            // Affichage de la température
            std::cout << "Température : " << temperature << " °C" << std::endl;
            
            // Pause de 2 secondes
            sleep(2);
        }
    } catch (const std::exception& e) {
        // Gestion des erreurs
        std::cerr << "Erreur : " << e.what() << std::endl;
        return 1;
    }

    return 0;
}