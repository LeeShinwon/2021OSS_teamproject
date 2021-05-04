//manager.c
#include "manager.h"

int selectMenu(){
    int menu;
    printf("\n\n1. 제품조회\n");
    printf("2. 제품추가\n");
    printf("3. 제품수정\n");
    printf("4. 제품삭제\n");
    printf("5. 파일저장\n");
    printf("6. 제품분석\n");//사람들이 가장 선호하는 채식 알려줌
    printf("7. 제품검색\n");//검색한 제품에 대한 정보를 알려줌
    printf("8. 제품추천\n");//선택한 범주에 맞는 제품을 추천해줌
    printf("9. 종료\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);

    return menu;
}

void listProduct(Product *p,int count){

    printf("\nNo. Name            type  level  calorie  like\n");
    printf("===================================================\n");
    for(int i=0; i<count; i++){
        if( p[i].type == -1 || p[i].level == -1 ) continue;
        printf("%2d.", i+1);
        readProduct(&p[i]);//error
    }
    printf("\n");
}

int selectDataNo(Product *p, int count){
    int no;
    listProduct(p,count);
    printf("번호는 (취소:0)?");
    scanf("%d",&no);
    getchar();
    return no;
}

