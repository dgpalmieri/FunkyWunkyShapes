This is our Repository for Assignment 2, Spring 2019 CS372 Software Construction.

Contributors: Andrew Parker, Joshua Byam, Dylan Palmieri


# Files and Descriptions:

- **catch.hpp** - The Catch2 unit testing framework
- **Tests.cpp** - A place where all our unit tests live

### Shapes/

- **Shape.cpp and .h** - Shape is the base class for all the other classes and almost has the least amount of code. The Shape.cpp only contains a destructor and the .h has the same constructors, get functions and file streams as all the derived classes.
- **Circle.cpp and .h** - A simple circle using the PostScript arc keyword. 
- **Horizontal.cpp and .h** - The Horizontal constructor takes a vector of unique_ptrs to Shapes, and concatinates the shapes into one object. MOVE TO HOW-TO 
- **Layered.cpp and .hpp** - Similar to Horizontal, but layers the shapes on top of each other.
- **Polygon.cpp and .hpp** - Polygon takes an arbitrary number of sides and using some simple geometry creates a regular shape with your specified number of sides.
- **Rectangle.cpp and .h** - Rectangle takes a side width and length, and creates a rectangle using the rlineto PostScript keyword.
- **Rotated.cpp and .h** - Rotated is a bit more complex, and uses the Shape.getCenter() function to rotate the shape about it's center.
- **Scaled.cpp and .h** - Scaled is one of the later shapes so it has a bit more complexity then some of the other more basic shapes especially with respect to it’s getCenter() function.
- **Smiley.cpp and .h** - Smiley adds a bit of flavor to our shapes class and has outlined eyes and mouth with yellow for reasons that I don’t understand. It’s much the same as all the other shapes, but it has color and the most postscript code.
- **Spacer.cpp and .hpp** - Spacer is just a rectangle class that you don’t have stroke in the postscript.
- **Square.cpp and .hpp** - Square is a gloriously simple class that only calls on the polygon class to make a four-sided polygon of your desired side length.
- **Triangle.cpp and .h** - Triangle is the same as square, but with a different name and with three sides instead of four.
- **Vertical.cpp and .h** - Vertical actually has some for loops and not many of the classes can claim that. There’s one that is used to iterate through the shapes that are passed to it as a means to initialize the height from the sum of the shape heights and the width from the max of the widths. The other is used to pass the shapes to a file stream along with a translate in postscript to align the shapes vertically.

**NOTE**: Smiley, Horizontal, Layered, and Vertical are not fully tested.

# How to Use This Code:

See the [How-To file](./How_To_Use_This_Code.md).

# Testing Strategy

Tests were added as a bit of an afterthought, so they're not as robust as they would be if we had been writing them in a more TDD fashion. However, we have extensively tested the PostScript output of all our shapes manually, so provided that they're unchanged when you call them, they should all output correctly.

# Shape Language Critique

The shape language is fairly simple, so I don't know that I would use it for anything terribly complex, but if I did need some simple shapes or shape concatinations in a C++ project I could definitely see myself using this. I think that with a little creativity and a couple functional extentions that this could be capable of creating some interesting things, but for real PostScript creation I would most definitely turn to the actual PostScript language. The shape extractions are fairly well designed, if I were to re-do this project, I would probably make the Horizontal, Layered, and Vertical classes derivations of a specific base class designed for them, instead of just being derivations of Shape. The design of our project makes the creation of individual shapes and their combinations fairly easy to make, but like I said before, even for general shape-making my (Dylan) personal choice is to just use the PostScript language, because that's something that I enjoy. If I were to re-implement this from scratch with a theoretcally unlimited timeframe, I would probably re-define a lot of the commands in PostScript as C++ functions, then design the classes using those commands, which would give the user a lot more customizability and the option to make anything that they wanted to using C++ that would then be translated into PostScript. Then, the Shape class and it's derivations would be more like templates that the user could customize to their individual needs.


# Interesting Aspects of This Project:

In my opinion, the most interesting thing about this project is the use of poymorphism, which isn't something that I've had to use a lot of until now. After getting a bit more experience, it really made me think about the structure of my code, and how the different classes would interact. This is where I think that I've learned the most over the course of this project, and thinking about how I would implement the same project now is entirely different from how I was thinking about it before.

