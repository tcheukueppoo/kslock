/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[PAM] =    "#9400D3",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
static const int usepamcolor = 1; /* set it to 0 to disable pam color effect */

/* enable blur */
#define BLUR
/*Set Blur radius*/
//static int const blurRadius=0;
static int blurRadius=0;
static int const pixelSize=5;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
//static const char * text_color = "#ffffff";
static char * text_color = "#ffffff";

/* text size (must be a valid size) */
//static const char * font_name = "JetBrainsMono Nerd Font:size=40";
static char * font_name = "Roboto:size=16";

/* time in seconds to cancel lock with mouse movement */
//static const int timetocancel = 4;
static int timetocancel = 4;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color_init",   STRING,  &colorname[INIT] },
		{ "color_input",  STRING,  &colorname[INPUT] },
		{ "color_failed", STRING,  &colorname[FAILED] },
		{ "color_pam",    STRING,  &colorname[PAM] },
		{ "font",         STRING,  &font_name },
		{ "text_color",   STRING,  &text_color },
		{ "blur_radius",  INTEGER, &blurRadius },
		{ "time",         INTEGER, &timetocancel },
};
