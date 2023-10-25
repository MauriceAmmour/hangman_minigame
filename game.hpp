#pragma once
#include <string>
#include <vector>

std::string gameWords[] = {
    "Apfel", "Buch", "Computer", "Drache", "Erdbeere",
    "Fahrrad", "Garten", "Haus", "Igel", "Jacke",
    "Kaffee", "Lampe", "Maus", "Nase", "Orange",
    "Papier", "Quark", "Regen", "Sonne", "Tisch",
    "Uhr", "Vogel", "Wald", "Xylophon", "Yoga",
    "Zebra", "Auto", "Banane", "Delfin", "Elefant",
    "Fisch", "Giraffe", "Hut", "Insel", "Junge",
    "König", "Löwe", "Mädchen", "Nacht", "Ozean",
    "Pflanze", "Quelle", "Rose", "Schule", "Tiger",
    "Uhrzeit", "Vase", "Wal", "Zitrone", "Ananas",
    "Berg", "Couch", "Diamant", "Eiscreme", "Flasche",
    "Gitarre", "Hemd", "Igelstachel", "Jakobsweg", "Krokodil",
    "Landschaft", "Mandarine", "Nachtigall", "Oberfläche", "Pinguin",
    "Qualle", "Reiseführer", "Schmetterling", "Teleskop", "Universum",
    "Vulkan", "Weltkarte", "Xenonlampe", "Yogamatte", "Zauberei",
    "Astronaut", "Bibliothek", "Cocktail", "Delfinarium", "Elektrizität",
    "Flughafen", "Gewitter", "Hubschrauber", "Ingenieur", "Jalousie",
    "Krokodilleder", "Landschaftsmalerei", "Mandelbaum", "Nebelhorn", "Orangensaft",
    "Panorama", "Querflöte", "Regenschirm", "Schokolade", "Taubenschwänzchen",
    "Umwelt", "Videospiele", "Walross", "Zirkuszelt"
};

// hangman is from this github: https://gist.github.com/chrishorton/8510732aa9a80a03c829b09f12e20d9c
std::vector<std::string> hangman = {
        R"(
  +---+
  |   |
      |
      |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
      |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
  |   |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|   |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========)",
        R"(
  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========)"
    };

std::string findRandomWord(std::string words[]);
std::string underlinesForChoosenWord(std::string word);
void gameLoop();