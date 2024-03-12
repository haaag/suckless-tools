// Modify this file to change what commands output to your statusbar,
// and recompile using the make command.
static const Block blocks[] = {
/* Icon	        Command                 Update Interval     Update Signal */
    {"",        "bar-bluetooth",            5,                  12},
    {"",        "bar-cpu",                  1,                  11},
    {"",        "bar-temppercore",          3,                  12},
    {"",        "bar-memory",               3,                  13},
    {"",        "bar-nettraf",              1,                  16},
    {"",        "bar-pulse",                0,                  10},
    {"",        "bar-date",                 3600,               19},
    {"",        "bar-time",                 10,                 25},
    {"",        "bar-bat",                  10,                 15},
};

// Sets delimiter between status commands.
// NULL character ('\0') means no delimiter.
static char *delim = "";
