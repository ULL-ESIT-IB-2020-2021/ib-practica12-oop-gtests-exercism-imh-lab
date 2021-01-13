#include <gtest/gtest.h>
#include "fecha.h"
 
TEST(FechasClaseTest, menor){
    Fechas f1;
    f1.SetDia(1);
    f1.SetMes(12);
    f1.SetAnio(2020);

    Fechas f2;
    f2.SetDia(1);
    f2.SetMes(12);
    f2.SetAnio(2020);

    Fechas f3;
    f3.SetDia(1);
    f3.SetMes(11);
    f3.SetAnio(2020);

    EXPECT_GT(f3 , f2);
    EXPECT_GT(f3 , f1);
}

TEST(FechasTest, igual){
    Fechas f1;
    f1.SetDia(1);
    f1.SetMes(12);
    f1.SetAnio(2020);

    Fechas f2;
    f2.SetDia(1);
    f2.SetMes(12);
    f2.SetAnio(2020);

    Fechas f3;
    f3.SetDia(2);
    f3.SetMes(12);
    f3.SetAnio(2020);

    EXPECT_EQ(f1 , f2);
    EXPECT_NE(f1 ,f3);
}
