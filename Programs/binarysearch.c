//A C program to explain iterative binary search for strings
//The changes are that I have applied binary search for a set of strings
// A binary search program which accepts input from user and prints the postion of the string to be searched (if found) else it returns " String not found"



#include<stdio.h>
int main(){
    char arr[5][10]; //character array
    int n;           //accepting  number of strings from user
    printf("\nEnter the number of strings:");
    scanf("%d",&n);
    accept(arr,n);   //function to accept user entered strings 
    printf("\nEntered strings are: ");
    display(arr,n);  //function to display the user entered strings
    binarysearch1(arr,n);   // function to search a string
}
void accept(char arr[5][10],int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d : ", i + 1);
        scanf(" %s", arr[i]);
    }
}

void display(char arr[5][10],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%s ", arr[i]);
    }
}
void binarysearch1(char arr[5][10],int n)
{
    int l,h,mid,flag=0;
    char find[10];
    printf("\nEnter the string u want to search: ");
    scanf("%s",&find);

//Binary search is applicable only on a sorted list so if the user enters an unsorted list make sure u sort it before searching
   
    l=0;
    h=n-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(strcmp(find,arr[mid])>0)     //if element(find) is greater than mid then search in left subarray
        {

            l=mid+1;
        }
        else if (strcmp(find,arr[mid])<0)    //if element(find) is less than mid then search in right subarray
        {
             h=mid-1;
            
        }
        else
        {
            flag=1;                     // element (find) is present in the middle
            break;

        }
     }
     if(flag==1)
     printf("\nstring found at position %d", (mid+1));
     else
      printf("\nString not found");
}
