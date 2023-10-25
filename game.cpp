#include <iostream>
#include <vector>
#include <string>

#include "game.hpp"

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

    // for (const std::string& pic : hangman) {
    //     std::cout << pic << std::endl;
    // }

std::string words[] = {"Hallo", "Welt"};

std::string underLinesForChoosenWord(std::string word)
{
    std::string underlines;
    for (uint32_t i = 0; i < word.length(); ++i)
    {
        underlines.append("_");
    }

    return underlines;
}