#ifndef COLORPAIR_H
#define COLORPAIR_H

// Enum for Major Colors
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};

// Enum for Minor Colors
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

// Struct for Color Pair
typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

// Function declarations
void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void PrintColorCodeManual();

#endif // COLORPAIR_H
