#include <gtest/gtest.h>

#include "date.h"


TEST(DateTest, greater){
    Date d1{"1/12/2020"};
    Date d2{"2/12/2020"};
    Date d3{"01/11/2020"};

    EXPECT_EQ(true, d2 > d1);
    EXPECT_EQ(false, d3 > d1);
}

TEST(DateTest, equal){
    Date d1{"03/05/2021"};
    Date d2{"03/05/2021"};

    Date d3{"25/09/2030"};
    Date d4{"01/12/2001"};
    Date d5{"26/12/2010"};

    EXPECT_EQ(true, d1 == d2);
    EXPECT_EQ(false, d1 == d3);
    EXPECT_EQ(false, d1 == d4);
    EXPECT_EQ(false, d1 == d5);
}
