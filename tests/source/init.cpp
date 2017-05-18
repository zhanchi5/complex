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
  
  Complex c(18,-9);
  Complex temp = a+=b;
  REQUIRE (temp == c);
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
  
  Complex c(15,-6);
  Complex temp = a*=b;
  REQUIRE (temp == c);
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
  Complex temp = a-=b;
  REQUIRE (temp == c);
}

SCENARIO("testing /"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(0.5, 1.6667);
  Complex temp = a/b;
  REQUIRE (temp == c);
}
  
SCENARIO("testing /="){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(5,2);
  Complex temp = a/=b;
  REQUIRE (temp == c);  
}  
