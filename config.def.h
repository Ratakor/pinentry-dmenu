/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by pinentry-dmenu.conf */

static unsigned int mon = -1;
static unsigned int centerwidth = 850;
static unsigned int embedded = 0;
static unsigned int lineheight = 24;
static unsigned int borderwidth = 2;
static unsigned int minpwlen = 32;
static unsigned int alphas[SchemeLast][2] = {
	/* values between 0 (transparent) and 255 (opaque) */
	/*          foreground, background */
	[SchemePrompt] = { 255, 0xe0 },
	[SchemeNormal] = { 255, 0xe0 },
	[SchemeSelect] = { 255, 0xe0 },
	[SchemeDesc]   = { 255, 0xe0 }
};

static const char *position = "center";
static char font[] = "monospace:size=12";
static const char *fonts[] = {
	font,
	"monospace:size=12"
};
static const char *prompt   = NULL;
static const char *asterisk = "*";
static char normfgcolor[]   = "#ebdbb2";
static char normbgcolor[]   = "#1d2021";
static char selfgcolor[]    = "#ebdbb2";
static char selbgcolor[]    = "#458588";
static char *colors[SchemeLast][2] = {
	/*                foreground, background */
	[SchemePrompt] = { normfgcolor, normbgcolor },
	[SchemeNormal] = { normfgcolor, normbgcolor },
	[SchemeSelect] = { selfgcolor,  selbgcolor },
	[SchemeDesc]   = { normfgcolor, normbgcolor }
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "normfgcolor", STRING, &normfgcolor },
	{ "normbgcolor", STRING, &normbgcolor },
	{ "selfgcolor",  STRING, &selfgcolor },
	{ "selbgcolor",  STRING, &selbgcolor }
};
