   
#include<stdio.h>
#include<stdlib.h>


int main(){

file_uplodated(); // use  this function to append text in thos files [job , notes ,works ...]

printf("file updated Succsefly");

}   
   
   
   
   
   
int file_uplodated(){
   
   FILE *file;
   
   file = fopen("notes","a") ;// append  TXT into the file
   
printf("---- Wiht Paper Text Edidter  1.5-----\n");
printf("-------rwith mode ---- \n");


