#include "complex.hpp"
#include "catch.hpp"


SCENARIO("testing +"){
  Complex a(5,2);
  Complex b(3,-3);
  
  Complex c(8,-1);
  
  Complex temp = a + b;
  REQUIRE (temp = c);
}
