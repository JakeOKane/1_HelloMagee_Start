#include <iostream>
#include <chrono>
#include <thread>
#include "myWait.h" 

// This function could be placed in a .cpp file and referenced
void dcWait::wait(int TIME_TO_SLEEP)
{
    std::cout << "Delay Started ......" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(TIME_TO_SLEEP));
    std::cout << "Delay over ......." << std::endl;
}