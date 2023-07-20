//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",        "bar-cpu",                1,                  11},
    {"",        "bar-temppercore",        3,                  12},
    {"",        "bar-memory",             3,                  13},
    {"",        "bar-nettraf",            1,                  16},
    {"",        "bar-battery",            5,                  15},
    {"",        "bar-pulse",              0,                  10},
    {"",        "bar-date",               3600,               19},
    {"",        "bar-time",               10,                 25},
    
    // {"",        "bar-storage",         60,               21},
    // {"",        "bar-mail",            10,                  14},
    // {"",        "bar-bluetooth",        5,                  17},
    // {"",        "bar-weather.sh",       3600,                  20},

    // {"",        "bar-mpc",              1,                  15},
    // {"",        "bar-systray",          3,                  18},
    // {"",        "bar-systray-bash",     3,                  25},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/apps/suckless/dwmblocks/config.h !cd ~/apps/suckless/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
