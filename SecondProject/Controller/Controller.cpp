//
//  Controller.cpp
//  SecondProject
//
//  Created by Tucker, Jonah on 1/27/17.
//  Copyright © 2017 Tucker, Jonah. All rights reserved.
//

#include "Controller.hpp"
#include "../Model/Timer.hpp"
#include <iostream>
#include <string>

using namespace std;

int Controller :: changeNumber()
{
    cout << "Type in a number please " << endl;
    int derpy;
    cin >> derpy;
    
    return derpy;
}

void Controller :: testingCStrings()
{
    string J = "Jonah";
    cout << J.size() << endl;
    cout << J.empty() << endl;
    cout << J.substr(0, 3) << endl;
    
}

void Controller :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}

void Controller :: start()
{
    int derp [6] {0, 1, 2, 3, 4, 45};
    int pie [2] = {0, 1};
    
    Timer sillyTime;
    sillyTime.startTimer();
    cout << "Students said to say hello world" << endl;
    int myNumber = 72;
    
    int * numberPointer = &myNumber;
    
    tryNumbers(myNumber);
    cout << "here is my number again " << myNumber << endl;
    myNumber = changeNumber();
    cout << "Changed? " << myNumber << endl;
    
    changeWithPointer(numberPointer);
    cout << "changed?? " << myNumber << endl;
    
    changeNumberAgain(numberPointer);
    cout << "I changed it yet again to this! " << myNumber << endl;
    
    sillyTime.stopTimer();
    sillyTime.displayTimerInformation();
    
    sillyTime.resetTimer();
    cout << sillyTime.getExecutionTimeInMicroseconds() << endl;
}

void Controller :: tryNumbers(int sent)
{
    cout << "I was sent " << sent << endl;
    sent += 3;
    cout << sent << " is my new number" << endl;
}

void Controller :: changeNumberAgain(int *numberChanged)
{
    cout << *numberChanged % 7 << endl;
}
