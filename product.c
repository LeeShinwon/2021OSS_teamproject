#include "product.h"

int createProduct(Product *p){
    printf("\n");
    printf("제품명은? ");
    scanf("%[^\n]s",p->name);

    printf("허용 범위는? ");
    scanf("%d",&p->level);

    printf("음식 종류는? ");
    scanf("%d",&p->type);

    printf("100g당 칼로리는? ");
    scanf("%d",&p->calorie);

    printf("추천수는? ");
    scanf("%d",&p->like);
    
    printf("==> 추가됨\n"); 
    return 1;
}

void readProduct(Product *p){
    printf("%-15s %4d칼로리 추천 수 %2d ",p->name,p->calorie, p->like);
    intToCharLEVEL(p->level);
    printf(" ");
    intToCharTYPE(p->type);
    printf("\n");
}

void updateProduct(Product *p){

    printf("\n");
    printf("\n");
    printf("제품명은? ");
    scanf("%[^\n]s",p->name);

    printf("허용 범위는? ");
    scanf("%d",&p->level);

    printf("음식 종류는? ");
    scanf("%d",&p->type);

    printf("100g당 칼로리는? ");
    scanf("%d",&p->calorie);

    printf("추천수는? ");
    scanf("%d",&p->like);

    printf("==> 수정됨!\n");
};

int deleteProduct(Product *p){
    p->type  = -1;
    p->level = -1;
    printf("==> 삭제됨!\n");
    return 0;
}
