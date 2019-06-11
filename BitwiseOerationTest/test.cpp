#include "pch.h"
#include "Header.h"

TEST(GetAlphaTest, Test1) {
	DWORD argb = 0x12345678;
	BYTE alpha = GetAlpha(argb);
	EXPECT_EQ(0x12, alpha);
}

TEST(GetAlphaTest, Test2) {
	DWORD argb = 0xABCDEF01;
	BYTE alpha = GetAlpha(argb);
	EXPECT_EQ(0xAB, alpha);
}

TEST(GetRedTest, Test1) {
	DWORD argb = 0x12345678;
	BYTE red = GetRed(argb);
	EXPECT_EQ(0x34, red);
}

TEST(GetRedTest, Test2) {
	DWORD argb = 0xABCDEF01;
	BYTE red = GetRed(argb);
	EXPECT_EQ(0xCD, red);
}

TEST(GetGreenTest, Test1) {
	DWORD argb = 0x12345678;
	BYTE green = GetGreen(argb);
	EXPECT_EQ(0x56, green);
}

TEST(GetGreenTest, Test2) {
	DWORD argb = 0xABCDEF01;
	BYTE green = GetGreen(argb);
	EXPECT_EQ(0xEF, green);
}

TEST(GetBlueTest, Test1) {
	DWORD argb = 0x12345678;
	BYTE blue = GetBlue(argb);
	EXPECT_EQ(0x78, blue);
}

TEST(GetBlueTest, Test2) {
	DWORD argb = 0xABCDEF01;
	BYTE blue = GetBlue(argb);
	EXPECT_EQ(0x01, blue);
}
