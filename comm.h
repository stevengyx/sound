// This header file defines necessary constants and functioprototypes
// for communication. In our solution, <curl.h> library is used.

#define COMM // conditional compiling
#define URL "http://www.cc.puv.fi/~e1700700/php/sound.php"
// function prototypes
void sendToServer(double rms[]);
