#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "game.hpp"

// for (const std::string& pic : hangman) {
//     std::cout << pic << std::endl;
// }

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
    "Umwelt", "Videospiele", "Walross", "Zirkuszelt"};

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
=========)"};

std::string findRandomWord(std::string words[])
{
    return words[rand() % 100];
}

std::string underlinesForChoosenWord(std::string word)
{
    std::string underlines;
    for (uint32_t i = 0; i < word.length(); ++i)
    {
        underlines.append("_");
    }
    std::cout << std::endl;

    return underlines;
}

std::string wordInUppercase(std::string word)
{
    for (uint32_t i = 0; i < word.length(); ++i)
    {
        word[i] = static_cast<char>(std::toupper(word[i]));
    }

    return word;
}

void gameLoop()
{
    bool won = false;
    std::string targetWord = findRandomWord(gameWords);
    std::string underLines = underlinesForChoosenWord(targetWord);

    char guessedLetter;

    std::cout << targetWord << std::endl;

    while (true)
    {
        if (won == true)
        {
            std::cout << "you find the word" << std::endl;
            break;
        }

        std::cout << underLines << std::endl;

        std::cout << "guess a letter: ";
        std::cin >> guessedLetter;

        std::cout << std::endl;

        std::cout << "guessed Letter is: " << guessedLetter << std::endl;

        for (uint32_t i = 0; i < targetWord.length(); ++i)
        {
            if (std::toupper(targetWord[i]) == std::toupper(guessedLetter))
            {
                underLines[i] = static_cast<char>(std::toupper(guessedLetter));
            }
            
        }

        if (wordInUppercase(underLines) == wordInUppercase(targetWord))
        {
            won = true;
        }
        
        
        
    }
}