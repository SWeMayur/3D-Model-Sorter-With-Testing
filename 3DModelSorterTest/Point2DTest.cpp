#include "pch.h"
#include "Point2D.h"
using namespace GeometricEntity;

//perform test on default constructor
TEST(Point2DTest, DefaultConstructor) {
    Point2D point;
    EXPECT_FLOAT_EQ(point.x(), 0.0f);
    EXPECT_FLOAT_EQ(point.y(), 0.0f);
}
//perform test on parameterised constructor
TEST(Point2DTest, ParameterizedConstructor) {
    Point2D point(1.0f, 2.0f);
    EXPECT_FLOAT_EQ(point.x(), 1.0f);
    EXPECT_FLOAT_EQ(point.y(), 2.0f);
}
//perform test on setters and getters
TEST(Point2DTest, SettersAndGetters) {
    Point2D point;
    point.setX(3.0f);
    point.setY(4.0f);

    EXPECT_FLOAT_EQ(point.x(), 3.0f);
    EXPECT_FLOAT_EQ(point.y(), 4.0f);
}

