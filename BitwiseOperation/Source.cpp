#include "Header.h"

DWORD GetARGB(BYTE alpha, BYTE red, BYTE green, BYTE blue) {
	DWORD a = alpha << 24;
	DWORD r = red << 16;
	DWORD g = green << 8;
	DWORD b = blue;

	return a | r | g | b;
}

BYTE GetAlpha(DWORD argb) {
	return (BYTE)(argb >> 24);
}

BYTE GetRed(DWORD argb) {
	DWORD red = (argb >> 16) & (0x000000FF);
	return (BYTE)red;
}

BYTE GetGreen(DWORD argb) {
	DWORD green = (argb >> 8) & (0x000000FF);
	return (BYTE)green;
}

BYTE GetBlue(DWORD argb) {
	return (BYTE)(argb & 0x000000FF);
}
