#include <iostream>
#include <vector>

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