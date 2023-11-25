//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"user: ", "whoami", 0, 0},
	{"", "date '+%H:%M %d/%m/%Y'", 5, 0},
	{"battery: ", "acpi | grep -o '[0-9]*%'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
