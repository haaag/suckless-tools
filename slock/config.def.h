/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1d2021",   /* after initialization */
	[INPUT] =  "#458588",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
 	[CAPS] =   "#d79921",   /* CapsLock on */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
};

/* lock screen opacity */
static const float alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#ebdbb2";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
