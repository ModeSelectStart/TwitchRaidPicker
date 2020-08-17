#include <stdio.h>
#include <curl/curl.h>
int main(){
  curl_global_init(CURL_GLOBAL_ALL);
  printf("test dev pull\n");
  return 0;
}
