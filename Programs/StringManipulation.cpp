#include<stdio.h>

char mainstr[100], patstr[20], repstr[20], finalstr[100], constr[20];
int s = 0, r = 0, i = 0, j = 0, k, check = 0;

void stringmatch(){
    printf("\nEnter The String To Be Found: ");
    scanf(" %[^\n]%*c",&patstr);
    printf("\nEnter The String To Be Replaced: ");
    scanf(" %[^\n]%*c",&repstr);
    
    while (mainstr[s] != '\0'){
        if (mainstr[r] == patstr[i]){
            i++;
            r++;
            if (patstr[i] == '\0'){
                check = 1;
                for (k = 0; repstr[k] != '\0'; k++, j++)
                    finalstr[j] = repstr[k];
                i = 0;
                s = r;
            }
        }

        else{
            finalstr[j] = mainstr[s];
            j++;
            s++;
            r = s;
            i = 0;
        }
    }
    finalstr[j] = '\0';
    if (check == 1)
        printf("\nEdited String: %s\n", finalstr);
    else
        printf("\nString Not Found\n");
}

void revstring(){
    printf("Reversed String : ");
    for(i = strlen(mainstr)-1; i >= 0; i--){
        printf("%c",mainstr[i]);
    }
    printf("\n");
}

void constring(){
    printf("Enter The String To Be Concated: ");
    scanf(" %[^\n]%*c",&constr);
    for(i = 0,j = 0; mainstr[i] != '\0';i++,j++){
        finalstr[j] = mainstr[i];
    }
    finalstr[j] = ' ';
    j++;

    for(i=0; constr[i] != '\0'; i++,j++){
        finalstr[j] = constr[i];
    }
    finalstr[j] = '\0';
    printf("Concated String : %s\n",finalstr);
}

void main(){
    int ch;
    printf("\nEnter The Main String: ");
    scanf(" %[^\n]%*c",&mainstr);
    printf("\n1.Change String");
    printf("\n2.Reverse String");
    printf("\n3.Concate String");
    printf("\n4.Exit");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&ch);
    if(ch == 1){
        stringmatch();
    }
    else if (ch == 2){
        revstring();
    }
    else if(ch == 3){
        constring();
    }
}
