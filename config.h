/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

/* -fn option overrides fonts[0]; default X11 font or font set */
static char font[] = "monospace:size=10";
static char *fonts[] = {
	font,
	"monospace:size=10"
};

static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *symbol_1 = "<";
static const char *symbol_2 = ">";

static char foreground[]     = "#d4d9ca";
static char background[]     = "#141510";
static char selbackground[]  = "#AD975D";
static char outbackground[]  = "#9BB6A9";

static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { foreground, background },
	[SchemeSel]  = { foreground, selbackground  },
	[SchemeOut]  = { foreground, outbackground },
	[SchemeNormHighlight] = { "#ffc978", background },
	[SchemeSelHighlight]  = { "#ffc978", selbackground },
	[SchemeOutHighlight]  = { "#ffc978", outbackground },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "font",        STRING, &font },
	{ "foreground",  STRING, &foreground },
	{ "background",  STRING, &background },
	{ "color1",      STRING, &selbackground },
	{ "color6",      STRING, &outbackground },
	{ "prompt",      STRING, &prompt },
};
