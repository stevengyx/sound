#include <stdio.h>
#include <curl/curl.h>
#include "com.h"
#include <math.h>
//function definition, this function takes in 80-pieces of rms value, each is calculated by 200 samp$
//The function should use these values to re-calculate 8-pieces of fast decibel value.
//To do so we need to put every 10-pieces of RMS value ,square them, multiply by 200, accumulate to $
void sendToServer(double rms[]){
    double fast[8], sum;
    int i, j;   //loop counters
    CURL *curl;
    CURLcode res;
    char post[1000];

    for(i=0; i<8; i++){ //outer loop repeats 8 times for 8-pieces of result
        for(j=0; j<10; j++){    //inner looop repeats 10 times to accumulate
            sum += (rms[j+i*10]*rms[j+i*10])*200;
        }
        fast[i] = sqrt(sum/2000);
    }   //end of for(i)
    //prepare post data string
    sprintf(post, "data-%.2f;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f;%.2f", fast[0], fast[1], fast[2], fast[3]$

    curl_global_init(CURL_GLOBAL_ALL);  //globally initialize the libcurl
    curl=curl_easy_init();              //create a handler
    if(curl){                           //if handler is properly created
        curl_easy_setopt(curl, CURLOPT_URL,URL);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS,post);
        res = curl_easy_perform(curl);
        if(res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
    curl_easy_cleanup(curl);
    }   //end of if(curl)
}

