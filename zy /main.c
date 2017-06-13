//
//  main.c
//  zy
//
//  Created by 20161104578 on 17/6/13.
//  Copyright © 2017年 20161104578. All rights reserved.
//
#include <stdio.h>

int main()
{
    int a[20],i,j,p;
    FILE *fr;
    FILE *fw;
    fr = fopen("//Users//c20161104578//Desktop//sort2//read.txt","r+");
    fw = fopen("//users//c20161104578//Desktop//sort2//storag.txt","w+");
    if(fr == NULL)
    {
        printf("file open error !\n");
        
    }
    else
    {
        printf("yes\n");
        i=0;
        while(fscanf(fr,"%d",&a[i])!=EOF)
        {
            printf("%d",a[i]);
            i++;
        }
        for(i=0;i<10;i++)
        {
            for(i=0;j<9-i;j++)
                if(a[j]>a[j+1])
                {
                    p=a[j+1];
                    a[j+1]=a[j];
                    a[j]=p;
                }
        }
        for(i=0;i<10;i++)
            fprintf(fw,"%d\t",a[i]);
        fclose(fr);
        fclose(fw);
        return 0;
        
    
    }
}
