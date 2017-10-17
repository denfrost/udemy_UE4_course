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

using FText = std::string;
using int32 = int;


void PlayGame();
void PrintIntro();
FText GetTry();
void PrintBack(FText Try);
bool AskToPlayAgain();


#endif /* main_h */
