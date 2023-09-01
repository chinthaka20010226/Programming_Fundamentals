/*#include<stdio.h>
struct patient{
    int id;
    char category;
    int days;
};
int pcount = 0;
void addPatient(struct patient pList[]);
void calCharges(char ,int );
void main(){
     struct patient pList[100];

    addPatient(pList);
}
void addPatient(struct patient pList[]){
    printf("Input the patient information,\n\n");
    for(int i = pcount;i < 100;i++){
        printf("Enter id:");
        scanf("%d", &pList->id);
        printf("There are three main category,(A,B,C),\nEnter category:");
        scanf(" %c", &pList->category);
        printf("Enter days:");
        scanf("%d", &pList->days);
        pcount++;
        if(pcount > 100){
            printf("Sorry, your program is over..., because number of patient ids are over.");
            break;
        }
        calCharges(pList->category,pList->days);
    }
}
void calCharges(char x,int y){
    float charge_amount = 0,given_dis = 0,ex_charge = 0,amount = 0;
    amount = y * 1000.00;
    if(y > 5){
        given_dis = amount * 0.1;
    }
    if(x == 'A'){
        ex_charge = amount * 0.02;
    }
    charge_amount = amount - (given_dis - ex_charge);
    printf("Charge_amount:%.2f\n\n", charge_amount);
    printf("Next patient,\n\n");
}*/

#include <stdio.h>
int countvowels(char word[]);

int main()
{
    char word[100];
    int x;
    printf("Enter the number:");
    scanf(" %S", word);
    printf("%s", word);

    x = countvowels(word);
    printf("%d", x);
}
int countvowels(char word[]){
    //printf("%s", word);
    int i,count = 0,c = 0,d = 0,e = 0,f = 0,g = 0;
    for( i=0;word[i]!= '\0';i++){
        if((word[i]=='a') || (word[i]=='A')){
            c++;
        }
        else if((word[i]=='e') || (word[i]=='E')){
            d++;
        }
        else if((word[i]=='i') || (word[i]=='I')){
            e++;
        }
        else if((word[i]=='o' )|| (word[i]=='O')){
            f++;
        }
        else if ((word[i]=='u')|| (word[i]=='U')){
            g++;
        }
    }
    return count=c+d+e+f+g;
}