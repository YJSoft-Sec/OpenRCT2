#ifndef _COLOUR_H_
#define _COLOUR_H_

/**
 * Colour IDs as used by the colour dropdown, NOT palette indices.
 */
enum {
	COLOUR_BLACK,
	COLOUR_GREY,
	COLOUR_WHITE,
	COLOUR_DARK_PURPLE,
	COLOUR_LIGHT_PURPLE,
	COLOUR_BRIGHT_PURPLE,
	COLOUR_DARK_BLUE,
	COLOUR_LIGHT_BLUE,
	COLOUR_ICY_BLUE,
	COLOUR_TEAL,
	COLOUR_AQUAMARINE,
	COLOUR_SATURATED_GREEN,
	COLOUR_DARK_GREEN,
	COLOUR_MOSS_GREEN,
	COLOUR_BRIGHT_GREEN,
	COLOUR_OLIVE_GREEN,
	COLOUR_DARK_OLIVE_GREEN,
	COLOUR_BRIGHT_YELLOW,
	COLOUR_YELLOW,
	COLOUR_DARK_YELLOW,
	COLOUR_LIGHT_ORANGE,
	COLOUR_DARK_ORANGE,
	COLOUR_LIGHT_BROWN,
	COLOUR_SATURATED_BROWN,
	COLOUR_DARK_BROWN,
	COLOUR_SALMON_PINK,
	COLOUR_BORDEAUX_RED,
	COLOUR_SATURATED_RED,
	COLOUR_BRIGHT_RED,
	COLOUR_DARK_PINK,
	COLOUR_BRIGHT_PINK,
	COLOUR_LIGHT_PINK
};

/**
 * These colours change depending on the current water colours.
 */
enum {
	COLOUR_DARK_WATER = 9,
	COLOUR_LIGHT_WATER = 10
};

#define COLOUR_FLAG_TRANSLUCENT (1 << 7)
#define TRANSLUCENT(x) ((x) | COLOUR_FLAG_TRANSLUCENT)

#endif