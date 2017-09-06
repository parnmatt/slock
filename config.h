/* slock configuration */
/* See LICENSE file for copyright and license details. */

/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828", /* after initialisation */
	[INPUT] =  "#458588", /* during input */
	[FAILED] = "#fb4934", /* wrong password */
};

/* treat a cleared input like a wrong password (colour) */
static const int failonclear = 1;
