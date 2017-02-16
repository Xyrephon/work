//
//  Controller.hpp
//  SecondProject
//
//  Created by Tucker, Jonah on 1/27/17.
//  Copyright © 2017 Tucker, Jonah. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

class Controller
{
private:
    void tryNumbers(int sent);
    int changeNumber();
    void changeWithPointer (int * numberPointer);
    void changeNumberAgain(int * numberChanged);
    void testingCStrings();
public:
    void start();
};

#endif /* Controller_hpp */
