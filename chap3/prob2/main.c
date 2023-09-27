#include <stdio.h> 
#include <stdbool.h> 
#include <stdlib.h> 

char* solution(const char* s) { 
    char* answer = (char*)malloc(sizeof(char)*strlen(s)); 
    strcpy(answer,s); 
    char buf; 
    for(int i =0;i<strlen(s);i++){ 
        for(int j = i;j<strlen(s);j++){ 
            if(answer[i]<answer[j]){ 
                buf = answer[i]; 
                answer[i] = answer[j]; 
                answer[j] = buf; 
            } 
        } 
         
    } 
    return answer; 
}
