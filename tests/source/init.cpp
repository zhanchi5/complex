#include "complex.hpp"
#include "catch.hpp"


SCENARIO("testing +"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(8,-1);
  
  Complex temp = a + b;
  REQUIRE (temp == c);
}

SCENARIO("testing +="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(8,-1);
  a+=b;
  REQUIRE (a == c);
}

SCENARIO("testing *"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(21,-9);
  
  Complex temp = a*b;
  REQUIRE (temp == c);
}

SCENARIO("testing *="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(21,-9);
  a*=b;
  REQUIRE (a == c);
} 

SCENARIO("testing -"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(2,5);
  
  Complex temp = a-b;
  REQUIRE (temp == c);
}

SCENARIO("testing -="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(15,-6);
  
  a-=b;
  REQUIRE (a == c);
}

SCENARIO("testing /"){
  Complex a(10,4);
  Complex b(5,2);
  
  Complex c(2, 0);
  Complex temp = a/b;
  REQUIRE (temp == c);
}
  
SCENARIO("testing /="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(5,2);
  a/=b;
  REQUIRE (a == c);  
}  
