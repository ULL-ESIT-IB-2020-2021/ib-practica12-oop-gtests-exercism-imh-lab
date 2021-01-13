#include <gtest/gtest.h>
#include <iostream>
#include "complejo.h"

TEST(ComplejosTest, resta){
  Complejo operar;
  Complejo complejo1{2,2};
  Complejo complejo2{2,2};
  EXPECT_EQ((1,1),operar.Resta(complejo1,complejo2));
  EXPECT_GT((5,6),operar.Resta(complejo1,complejo2));
  
}

TEST(ComplejosTest2, suma){
  Complejo operar;
  Complejo complejo1{2,2};
  Complejo complejo2{2,2};
  EXPECT_EQ((4,4),operar.Suma(complejo1,complejo2));
  EXPECT_GT((5,6),operar.Suma(complejo1,complejo2));
    
}