/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000",   /* after initialization */
	[INPUT] =  "#282c34",   /* during input */
	[FAILED] = "#be5046",   /* wrong password */
 	[CAPS] = "#39ADB5",     /* CapsLock on */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "BACKGROUND",   STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color6",       STRING,  &colorname[CAPS] },
};


/* lock screen opacity */
static const float alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password...";

/* text color */
static const char * text_color = "#ABB2BF";

/* text size (must be a valid size) */
static const char * text_size = "fixed";
// static const char * text_size = "-adobe-*-medium-r-normal-*-14-*-*-*-*-*-*-1";