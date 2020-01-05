//creat - file //


#inclde<stdio.h>


int main(){

file_systeme();     // this function to create files buld in the systeme 

file_create_by_user(); // this is the files can user created ----> NOT COMPLATED 




}


// file in systeme by defaulte 

 int file_systeme(){
  
  FILE *file;

  file =  fopen("note","w");
  //puts(note,"add yor note here");
  file = fopen("My_work","w");
  //puts("you have work need to complete !!","My_work");
  
  file = fopen("Metting","w");
  
  
  file = fopen("login","w");
  // puts the username and password 
  

}

// now user his add the file //

int File_creat_by_user(){
    
    FILE *file;    
    

file = fopen("note","w");

 char input_user[50];

printf("---- Wiht Paper Text Edidter  1.5-----\n");
printf("-------rwith mode ---- \n");

 scanf("%s",&input_user); // how can add output > files !


}



