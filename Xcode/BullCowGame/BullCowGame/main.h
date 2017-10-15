//
//  main.h
//  BullCowGame
//
//  Created by Aun Johnsen on 10/10/17.
//  Copyright © 2017 Aun Johnsen. All rights reserved.
//

#ifndef main_h
#define main_h

#include <iostream>
#include <string>


void PlayGame();
void PrintIntro();
std::string GetGuess();
void PrintBack(std::string Guess);
bool AskToPlayAgain();


#endif /* main_h */