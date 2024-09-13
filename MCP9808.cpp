/**
 * @file MCP9808.cpp
 * @brief Implémentation de la classe MCP9808 pour le capteur de température.
 */

#include "MCP9808.h"
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include <stdexcept>

/**
 * @brief Constructeur de MCP9808.
 *
 * Initialise la communication avec le capteur.
 */
MCP9808::MCP9808() {
    if (wiringPiSetup() == -1) {
        throw std::runtime_error("Erreur d'initialisation de wiringPi");
    }

    fd = wiringPiI2CSetup(MCP9808_ADDR);
    if (fd == -1) {
        throw std::runtime_error("Erreur d'initialisation de la communication I2C");
    }
}

/**
 * @brief Lit la température du capteur.
 *
 * @return La température en degrés Celsius.
 */
float MCP9808::getTemperature() {
    int rawData = wiringPiI2CReadReg16(fd, TEMP_REG);
    if (rawData == -1) {
        throw std::runtime_error("Erreur de lecture du registre de température");
    }

    
    rawData = ((rawData & 0xFF) << 8) | ((rawData >> 8) & 0xFF);

    // Calcul de la température
    float temp = (rawData & 0x0FFF) / 16.0;
    if (rawData & 0x1000) {
        temp -= 256.0;
    }

    return temp;
}