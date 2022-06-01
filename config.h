/* user and group to drop privileges to */
static const char *user  = "kueppo";
static const char *group = "kueppo";

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
static const int usepamcolor = 0; /* set it to 0 to disable pam color effect */

/* enable blur */
#define BLUR
/*Set Blur radius*/
static int blurRadius=20;
static int const pixelSize=5;

/* default message */
static const char * message = "Follow your dreams";

/* text color */
static char * text_color = "#ffffff";

/* text size (must be a valid size) */
static char * font_name = "Cooper Hewitt:size=90";

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 4;

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
};
