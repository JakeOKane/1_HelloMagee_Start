/*
 * Fun to Try! To Dare is To Do!
 *
 * v0.1
 * Author: Dr Darryl Charles
 * Date: Summer 2021
 *
 * Copyright notice: Public Domain
 */ 

#include <iostream>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "myTimer.h"
#include "myWait.h" 



int main()
{
    int delay = 5000;
    dc::myTimer timer;
    int randomDelay = 0;

    std::cout << "In this game you must guess how much time has passed in seconds.\n If you are within 1 second you win.";;
    dcWait::wait(delay);
    
    
    
    system("cls");
    randomDelay = rand() % 10 + 1;
    std::cout << "Starting Now!!!" << "\\n\\ndelay is    " << randomDelay;
    timer.start();



    int counter = 0;

    //dcWait::wait(delay);

   // std::cout << "Delay in Seconds: " << timer.elapsedSeconds() << std::endl;
    //std::cout << "Delay in Milliseconds: " << timer.elapsedMilliseconds() << std::endl;

    return 0;
}



