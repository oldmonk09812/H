import java.util.*;
class Gautu
{
   protected void gt()
  {
    System.out.println("bye");
  }
}
class At extends Gautu
{
   void gt()
  {
    System.out.println("hi");
  }
}

 class Dcoder
 {
   public static void main(String args[])
   { 
    System.out.println("Hello, Dcoder!");
    At a=new At();
    a.gt();
   }
 }
#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    return 0;
}

