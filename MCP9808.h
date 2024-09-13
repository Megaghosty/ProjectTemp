/**
 * @file MCP9808.h
 * @brief Déclaration de la classe MCP9808 pour lire la température.
 */

#ifndef MCP9808_H
#define MCP9808_H

/**
 * @class MCP9808
 * @brief Classe pour le capteur de température MCP9808.
 *
 * Cette classe permet d'initialiser le capteur et de lire la température.
 */
class MCP9808 {
private:
    static const int MCP9808_ADDR = 0x18; ///< Adresse I2C du capteur
    static const int TEMP_REG = 0x05;     ///< Registre de température
    int fd;                               ///< Descripteur de fichier pour I2C

public:
    /**
     * @brief Constructeur de la classe MCP9808.
     *
     * Initialise la communication avec le capteur.
     */
    MCP9808();

    /**
     * @brief Lit la température du capteur.
     *
     * @return La température en degrés Celsius.
     */
    float getTemperature();
};

#endif // MCP9808_H