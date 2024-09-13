 # ProjectTemp
Bienvenue sur le Projet Température en C++ avec l'utilisation de la libraire WiringPi

## Matériels Utilisés 
Voici une liste détaillée du matériel utilisé pendant toute la durée du mini-projet. Chaque élément est décrit et expliqué pour une meilleure compréhension de celui-ci : 
- **Rasbperry Pi:** Dans ce projet, nous avons utilisé une carte “Raspberry Pi”. C’est un petit ordinateur qui à été conçu pour le domaine professionnel et de l’éducation. Pour notre projet, cette carte nous a servis à programme en C++  ainsi que connecter le capteur de température en I2C
- **Capteur de température MCP9808** Le capteur de température nous a permis de récupérer la température avec le bus I2C

## Logiciels Utilisés
Voici une petite liste qui résume l’ensemble des logiciels utilisés pendant le projet ainsi que la description de leur utilisation sur toute la durée du projet

- **VNC viewer by RealVNC** : Utilisation de VNC viewer pour manipuler la raspberry pi à distance via l’interface graphique
- **Draw.io** : Utilisation de draw.io pour créer le diagramme de séquence de l’activité.
- **G++** : Programme qui nous a permis de compiler le programme
- **Cmake** : permmettant l'automatisation de la compilation de nos fichiers 
- **Doxygen** Cela nous a permis de faire les commentaires sur les commentairers sur nos programmes

## Diagramme de Séquence 
![Diag_seq_Ewen_Julien V1 drawio](https://github.com/user-attachments/assets/55fcde9a-f580-4177-82fb-8a610e044661)

## Dépendance
Lien pour télécharger la librairie  [WiringPI](https://github.com/WiringPi/WiringPi/releases).

## Comment Utiliser
 1. Clonez ce dépôt sur votre machine locale :
  ```bash
   git clone https://github.com/Megaghosty/ProjectTemp.git
 2. Créer un fichier BUild pour le fichier CMake
 3. Executer le CMake avec :
```bash
  Cmake.
4. Compiler :
```bash
   make
5. Lancer le Programme
```bash
   ./temperature_programme
