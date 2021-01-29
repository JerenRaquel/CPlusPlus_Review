/*	Jeren Raquel
 *	==C++ Review==
 *	An application to help review, revisit, or learn C++. This will act as
 * the driver once there are more than 1 file.
 */
#include <iostream>  // <----------- This is an include statement. It allows your program to call/use already made things for easy of use.
// ^^^^^^^^^ "iostream" adds features like "cout" which allows for printing text
// to the console (terminal); more info below!

// <---- This sysmbol ("//") is for SINGLE line comments like this.

/*  <---- This is the symbol for STARTING block comments.
 *  Block comments are for writing comments that are more than one line.
 *  The inside of these blocks should contain the beginning symbol so you can
 * signify the content of the block. However, the compiler does not need this to
 * be able to build your program. It's just convention. You SHOULD have the
 * START AND END symbols though.
 */ // <---- This is the symbol for ENDING block comments.

/*  Comments are used to display things that the programmer or who reads this
 * need to know. For example, they can display what a certain line or block of
 * code does. Or it can be there to disable code that doesn't work or you don't
 * need any more. NOTE: BUT, the thing that you should use this for the most is
 * to remind you how your code works!
 */

// Code Time!

//  This is the main function, all functions will be some how ran through this.
//  A function is a way to reuse code somewhere in your program. This can help
//  orgainize code or even reduce
// repetive code.
// vvvvvv int argc, char **argv will be explain later!
int main(int argc, char **argv) {
  // This will be the code analyzed first. There is a lot to talk about.
  // However, only a few things will be said for now!
  // vvvvvvvvvvvvvvvvvvvvvvvvvvvvv
  std::cout << "Hello World!" << std::endl;
  /*  std:: <----- This is called a namespace, the Standard namespace :)
   * Basic C++ will be using this, so anything that you need from the "imports"
   * that ARE part of C++ will need this. ie) std::cout, std::endl,
   * std::vector<>
   */
  /*  cout <----- This is used to print. There are more things about this, but
   * for now, you don't need to know. Just know that it needs to be followed by
   * the "<<".
   */
  /*  << <---- This (the insertion operator) "appends" anything that follows to
   *  what it points to.
   */
  /*  "Hello World" <---- This is a string, or a message if you will. A string
   * is a bunch of letters or words that "can" make up a sentence, or whatever
   * you really want! In able to make these, you must surround the group of
   * letters with "" like in the example used.
   */
  /*  endl <--- This is an end of line character. It ends a line in the console.
   * just like you press enter on your keyboard when writing an essay to begin a
   * new line. It's that! You can also put "\n" instead! However, it's better to
   * use std::endl.
   */
  /*  Lastly, the symbol ";", this is VERY important. All statements in C++
   * require a semicolon at the end of the line to be used. Or, the compiler
   * will really not like you. :^) I mentioned "statements", remember functions
   * are not statements, so they don't require semicolons as you notice in this
   * file.
   */

  // Don't worry about this yet, this is for you to see what the code
  // above does. vvvvvvvvvvvvvvvvvv
  std::cout << "Enter anything to exit..." << std::endl;
  if (std::cin.get() == '\n') return 0;

  return 0;  // <---- This will be explained later, just know its optional!
}
