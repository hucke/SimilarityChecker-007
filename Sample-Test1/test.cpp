#include "pch.h"

#include "../SimilarityChecker/similarity_checker.cpp"

TEST(SimilarityChecker, TestLength01) {
    SimilarityChecker checker;
    int point = checker.lengthPoint("ASD", "DSA");
    EXPECT_EQ(60, point);
}

TEST(SimilarityChecker, TestLength02) {
    SimilarityChecker checker;
    int point = checker.lengthPoint("A", "BB");
    EXPECT_EQ(0, point);
}
