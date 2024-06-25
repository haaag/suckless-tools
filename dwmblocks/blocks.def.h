//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		    /*Update Interval*/	    /*Update Signal*/
    {"",        "bar-pomodoro",             1,                  0},
    {"",        "bar-bluetooth",            3,                  0},
    {"",        "bar-cpu",                  3,                  0},
    {"",        "bar-temppercore",          3,                  0},
    {"",        "bar-memory",               3,                  0},
    {"",        "bar-nettraf",              1,                  0},
    {"",        "bar-date",                 3600,               0},
    {"",        "bar-time",                 30,                 0},
    {"",        "bar-volume",               0,                  10},
    {"",        "bar-battery",              10,                 0},
    {"",        "bar-sys",                  3,                  0},
};

// Sets delimiter between status commands.
// NULL character ('\0') means no delimeter.
//          • ╍ 
static char *delim = "  ";
static unsigned int delimLen = 5;
