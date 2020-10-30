#include<stdio.h>
#include<stdio.h> 
void details(filename)
{
   FILE *fp; char ch;
   fp = fopen(filename, "r"); if (fp == NULL) {
   printf("INVALID \n", filename);
} else {
    printf("%s: opened in read mode.\n\n", filename);
 }
 while ((ch = fgetc(fp) )!= EOF)
 { 
   printf ("%c", ch);
 }
 if (!fclose(fp))
 printf("\n%s: closed.\n", filename);
 }
 int
 main(){ in t choice;
 const char *filename;
 printf("Press 1 to Check Students\n"); printf("Press 2 to Check Trainer\n"); printf("Press 3 to Check TrainerLead\n"); printf("Press 4 to Check ProjectManager\n"); printf("Press 5 to Check ProjectHead\n"); printf("Press 6 to Check Director\n"); printf("Press 7 to Check ProVc\n"); printf("Enter your choice: "); scanf("%d",&choice);
 switch (choice)
 {
 case 1:
 filename = "files/Students.txt"; break;
 case 2:
 filename = "files/Trainer.txt"; break;
 case 3:
 filename = "files/TrainerLead.txt"; break;
 case 4:
 filename = "files/ProjectManager.txt"; break;
 case 5:
 filename = "files/ProjectHead.txt"; break;
 
 case 6:
 filename = "files/Director.txt"; break;
 case 7:
 filename = "files/ProVC.txt"; break;
 }
 details(filename);
}
