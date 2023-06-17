/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#1D2021",     /* after initialization */
	[INPUT] =  "#D78821",   /* during input */
	[FAILED] = "#CC241D",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
