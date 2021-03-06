//
//  Shape.hpp
//  Exercise 3
//
//  Created by Changheng Chen on 2/10/17.
//  Copyright © 2017 Changheng Chen. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <string>
using namespace std;

class Shape
{
private:
    int m_id;
    
public:
    Shape();                                 // Default constructor
    Shape(int id);                           // Copy constructor
    virtual ~Shape();                        // Destructor
    Shape& operator = (const Shape& source); // Assignment operator
    
    int ID() const;                          // ID retrive function
    virtual string ToString() const;         // String description function
    virtual void Draw() const = 0;           // Pure virtual member function
    void Print() const;                      // Template Method Pattern
};

#endif /* Shape_hpp */
