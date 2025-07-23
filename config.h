 /* See LICENSE file for copyright and license details. */
 /* Default settings; can be overriden by command line. */
 
 static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
 /* -fn option overrides fonts[0]; default X11 font or font set */

static char font[] = "monospace:size=10";
static const char *fonts[] = {
	 font,
	 "monospace:size=10",
 };


static char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static char foreground[]  = "#f5c0bf";
static char background[]  = "#020238";
static char selbgcolor[]  = "#B34869";
static char outbgcolor[]  = "#DC6C91";
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { foreground,  background },
	[SchemeSel]  = { foreground,  selbgcolor },
	[SchemeOut]  = { foreground,  outbgcolor },

	[SchemeNormHighlight] = { "#ffc978",  background },
	[SchemeSelHighlight] =  { "#ffc978",  selbgcolor },
	[SchemeOutHighlight] =  { "#ffc978",  outbgcolor },
 };
 /* -l option; if nonzero, dmenu uses vertical list with given number of lines */
 static unsigned int lines      = 0;
 
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
	{ "color1",      STRING, &selbgcolor },
	{ "color6",      STRING, &outbgcolor },
	{ "prompt",      STRING, &prompt },
};
