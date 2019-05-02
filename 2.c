//
//  main.c
//  進階題 2
//
//  Created by 何宗愷 on 2019/4/26.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    char S[5000];
    char ouput;
    printf("請輸入一個字串：");
    while(scanf("%s",S)==1)
    {
        printf("處理過的字串為：",ouput);
        int a,N=strlen(S);
        for(a=N-1;a>=0;a--)
            printf("%c",S[a]);
    }
    system("pause");
    return 0; 
}
