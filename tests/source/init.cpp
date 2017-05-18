#include "complex.hpp"
#include "catch.hpp"


SCENARIO("+"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(8,-1);
  
  Complex temp = a + b;
  REQUIRE (temp == c);
}

SCENARIO("+="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(18,-9);
  Complex temp = (a+=b);
  REQUIRE (temp == c);
}

SCENARIO("*"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(21,-9);
  
  Complex temp = a*b;
  REQUIRE (temp == c);
}

SCENARIO("*="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(105,-618);
  Complex temp = a*=b;
  REQUIRE (temp == c);
} 

SCENARIO("-"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(2,5);
  
  Complex temp = a-b;
  REQUIRE (temp == c);
}

SCENARIO("-="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(15,-6);
  
  Complex temp = a-=b;
  REQUIRE (temp == c);
}

SCENARIO("/"){
  Complex a(10,4);
  Complex b(5,2);
  
  Complex c(2, 0);
  Complex temp = a/b;
  REQUIRE (temp == c);
}
  
SCENARIO("/="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(5,2);
  Complex temp = a/=b;
  REQUIRE (temp == c);  
}  

SCENARIO ("testing 
