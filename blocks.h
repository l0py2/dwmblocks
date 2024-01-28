static const Block blocks[] = {
	{"user: ", "whoami", 0, 0},
	{"", "date '+%H:%M %d/%m/%Y'", 5, 0},
	{"battery: ", "acpi | grep -o '[0-9]*%'", 120, 0},
};

static char delim[] = " | ";
static unsigned int delimLen = 3;
