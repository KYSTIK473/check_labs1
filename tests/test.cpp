#include <gtest/gtest.h>
#include "../prog/change.h"

// Тест 1: Пример из задания 'acb' --> 'bca'
TEST(SwapABTest, HandlesExample1) {
    EXPECT_EQ(change_letter("acb"), "bca");
}

// Тест 2: Второй пример из задания 'aabacbaa' --> 'bbabcabb'
TEST(SwapABTest, HandlesExample2) {
    EXPECT_EQ(change_letter("aabacbaa"), "bbabcabb");
}

// Тест 3: Строка только из 'c'
TEST(SwapABTest, HandlesOnlyC) {
    EXPECT_EQ(change_letter("ccc"), "ccc");
}

// Тест 4: Строка только из 'a' и 'b'
TEST(SwapABTest, HandlesOnlyAAndB) {
    EXPECT_EQ(change_letter("aabb"), "bbaa");
}

// Тест 5: Пустая строка
TEST(SwapABTest, HandlesEmptyString) {
    EXPECT_EQ(change_letter(""), "");
}

// Тест 6: Строка с другими символами
TEST(SwapABTest, HandlesOtherCharacters) {
    EXPECT_EQ(change_letter("abcxyz"), "bacxyz");
}