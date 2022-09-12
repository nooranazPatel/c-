/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: nooranazpatel
 *
 * Created on January 28, 2022, 12:32 p.m.
 */

#include <cstdlib>
#include <stdio.h>
#include "Circle.h"
#include <math.h>

using namespace std;

/*
 * 
 */

void ShowCircumferences(struct Cordinates* c){
    float PI=3.14;  
    float Radius,ci;
    Radius=(float)c->radius;
    ci= 2 * PI * Radius;
  
    printf("\n Circumference is : %.0f" ,ci);
    
          
    
}

int main() {
    
    
    struct Cordinates *c1;
    //creating c1 values
    int bytecount = sizeof (struct Cordinates);
    c1 = (struct Cordinates*) malloc(bytecount);
    c1->x_coord = 100;
    c1->y_coord = 100;
    c1->radius = 50;
    ShowCircumferences (c1);

    //creating c2 values
    struct Cordinates* c2;
    c2=(struct Cordinates *) malloc (bytecount);
    c2->x_coord = 200;
    c2->y_coord = 200;
    c2->radius = 30;
    ShowCircumferences (c2);

    //creating c3 values
    
    struct Cordinates* c3;
     c3=(struct Cordinates *) malloc (bytecount);
    c3->x_coord=250;
    c3->y_coord=150;
    c3->radius=100;
    ShowCircumferences (c3);
    
    c1->radius=c3->radius;
    c2=c1;
    ShowCircumferences(c3);
    
    





    

    
    
   
    

}








