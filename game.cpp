#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

#include "game.hpp"

    // for (const std::string& pic : hangman) {
    //     std::cout << pic << std::endl;
    // }


std::string findRandomWord(std::string words[])
{
    uint32_t randomNum = static_cast<uint32_t>(rand() % 100);
    
    return words[randomNum];
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

void gameLoop()
{
    bool won = false;

    while (true)
    {
        if (won == true)
        {
            std::cout << "you find the word" << std::endl;
            break;
        }   
    }


    
}