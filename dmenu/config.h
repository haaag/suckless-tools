/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"RobotoMono Nerd Font:size=10",
	"NotoColorEmoji-Regular:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
            /*     fg         bg       */
	/* [SchemeNorm] = { "#CAD3F5", "#24273A" }, */
	/* [SchemeSel] = { "#CAD3F5", "#4e5173" }, */
	/* [SchemeSelHighlight] = { "#24273A", "#cc241d" }, */
	/* [SchemeNormHighlight] = { "#24273A", "#8BD5CA" }, */
	/* [SchemeOut] = { "#24273A", "#A6DA95" }, */

	[SchemeNorm] = { "#d4be98", "#282828" },
	[SchemeSel] = { "#d4be98", "#282828" },
	[SchemeSelHighlight] = { "#fabd2f", "#282828" },
	[SchemeNormHighlight] = { "#fabd2f", "#282828" },
	[SchemeOut] = { "#1D2021", "#A9B665" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 0;         /* -h option; minimum height of a menu line     */
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

 /* Oceanic-next colors
	[SchemeNorm] = { "#d6deeb", "#1B2B34" },
	[SchemeSel] = { "#1B2B34", "#6699CC" },
	[SchemeSelHighlight] = { "#d6deeb", "#6699CC" },
	[SchemeNormHighlight] = { "#EC5f67", "#1B2B34" },
	[SchemeOut] = { "#1B2B34", "#99C794" }, */

    /* Gruvbox Material colors */
	/* [SchemeNorm] = { "#d4be98", "#1d2021" }, */
	/* [SchemeSel] = { "#d4be98", "#32302f" }, */
	/* [SchemeSelHighlight] = { "#EA6962", "#32302f" }, */
	/* [SchemeNormHighlight] = { "#EA6962", "#32302f" }, */
	/* [SchemeOut] = { "#1D2021", "#A9B665" }, */

    /* Sonokai colors */
	/* [SchemeNorm] = { "#E1E3E4", "#2C2E34" }, */
	/* [SchemeSel] = { "#E1E3E4", "#3f445b" }, */
	/* [SchemeSelHighlight] = { "#FB617E", "#3f445b" }, */
	/* [SchemeNormHighlight] = { "#FB617E", "#3f445b" }, */
	/* [SchemeOut] = { "#2C2E34", "#9ED06C" }, */

    /* Dracula colors */
	/* [SchemeNorm] = { "#E6E6E6", "#282A36" }, */
	/* [SchemeSel] = { "#E6E6E6", "#505C82" }, */
	/* [SchemeSelHighlight] = { "#FF92D0", "#505C82" }, */
	/* [SchemeNormHighlight] = { "#FF92D0", "#505C82" }, */
	/* [SchemeOut] = { "#282A36", "#5AF78E" }, */

    /* Gruvbox Material colors */
	/* [SchemeNorm] = { "#d4be98", "#1d2021" }, */
	/* [SchemeSel] = { "#d4be98", "#32302f" }, */
	/* [SchemeSelHighlight] = { "#EA6962", "#32302f" }, */
	/* [SchemeNormHighlight] = { "#EA6962", "#32302f" }, */
	/* [SchemeOut] = { "#1D2021", "#A9B665" }, */

  /* Tokyo Night
	[SchemeNorm] = { "#a9b1d6", "#1a1b26" },
	[SchemeSel] = { "#a9b1d6", "#4e5173" },
	[SchemeSelHighlight] = { "#4e5173", "#4abaaf" },
	[SchemeNormHighlight] = { "#4e5173", "#4abaaf" },
	[SchemeOut] = { "#1a1b26", "#9ECE6A" },
}; */

/* Gruvbox
	[SchemeNorm] = { "#d4be98", "#32302f" },
	[SchemeSel] = { "#d4be98", "#32302f" },
	[SchemeSelHighlight] = { "#EA6962", "#32302f" },
	[SchemeNormHighlight] = { "#EA6962", "#32302f" },
	[SchemeOut] = { "#1D2021", "#A9B665" },
 */


//Gruvbox
//static const char *colors[SchemeLast][2] = {
//	/*     fg         bg       */
//	[SchemeNorm] = { "#d4be98", "#1D2021" },
//	[SchemeSel] = { "#d4be98", "#1D2021" },
//	[SchemeSelHighlight] = { "#89b482", "#1D2021" },
//	[SchemeNormHighlight] = { "#89b482", "#1D2021" },
//	[SchemeOut] = { "#1D2021", "#A9B665" },
//};
