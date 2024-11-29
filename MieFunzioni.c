//
// Created by ernes on 29/11/2024.
//

#include "MieFunzioni.h"

int SommaNumeriPari (int num1, int num2){
    int somma=0;
    if (num1>num2){
        if (num1 % 2 == 0)
        {
            for (int i = num1; i >= num2;i -=2){
                somma+=i;
            }
        }
        else if (num1 % 2 == 1){
            int i=num1;
            i--;
            for (; i >= num2;i-=2)
            {
                somma+=i;
            }
        }
    }
    else{
        if (num2 % 2 == 0) {
            for (int i = num2; i >= num1;i -=2){
                somma+=i;
            }
        }
        else if (num2 % 2 == 1){
            int i=num2;
            i--;
            for (; i >= num1;i-=2)
            {
                somma+=i;
            }
        }
    }
    return somma;
}