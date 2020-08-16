#include <stdio.h>
#include <curl/curl.h>
int main(){
  curl_global_init(CURL_GLOBAL_ALL);
  printf("haha I'm a dummy\n");
  return 0;
}
