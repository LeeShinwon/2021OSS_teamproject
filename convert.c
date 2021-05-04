#include "convert.h"

void intToCharLEVEL(int level){
    if(level==1){
        printf("Vegan");
    }
    else if(level==2){
        printf("Lacto");
    }
    else if(level==3){
        printf("Ovo");
    }
    else if(level==4){
        printf("Lacto Ovo");
    }
    else if(level==5){
        printf("Pollo");
    }
    else if(level==6){
        printf("Pesco");
    }
    else{
        printf("Flexitarian");
    }
}

void intToCharTYPE(int type){
    if(type==1){
        printf("vegetable");
    }
    else if(type==2){
        printf("milk");
    }
    else if(type==3){
        printf("egg");
    }
    else if(type==4){
        printf("fish");
    }
    else if(type==5){
        printf("chicken");
    }
    else{
        printf("fork,beef");
    }
}