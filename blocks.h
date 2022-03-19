//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"CPU: 🖥 ", "~/.local/bin/cpu_temp",       10,              18},

	{"RAM: 🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,		  0},

	{"HOME: 💾", "~/.local/bin/home_disk_space",    1,		  0},
	
	{"ROOT: 💾", "~/.local/bin/root_disk_space",    1,                 0},

	{"VOL: ", "~/.local/bin/vol_ctl",        0,               10},

	{"", "~/.local/bin/dwm_vpn", 	1, 	0},

	{"📅 ", "date '+%b %d (%a) %I:%M%p'",					60,		  0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
