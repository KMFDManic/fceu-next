#ifndef _DRIVERS_ARGH
typedef struct {
	char *name;
	int *var;

	void *subs;
	int substype;
} ARGPSTRUCT;

void ParseArguments(int argc, char *argv[], ARGPSTRUCT * argsps);
#define _DRIVERS_ARGH
#endif
