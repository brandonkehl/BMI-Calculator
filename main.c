//
//  main.c
//  BMICalc
//
//  Created by brandon kehl on 7/24/15.
//  Copyright (c) 2015 kehldesigngroup. All rights reserved.
//

#include <stdio.h>
//Here is the declaration of the type Person
    typedef struct{
        float heightInMeters;
        int weightInKilos;
    
    }  Person;
float bodyMassIndex(Person p){

    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);

}






int main(int argc, const char * argv[]) {
    Person mikey;
    mikey.heightInMeters = 1.7;
    mikey.weightInKilos = 96;
    
    Person aaron;
    aaron.heightInMeters = 1.97;
    aaron.weightInKilos = 84;
    
    float bmi;
    bmi = bodyMassIndex(mikey);
    printf("mikey has a BMI of %.2f\n", bmi);
    
    bmi = bodyMassIndex(aaron);
    printf("aaron has a BMI of %.2f\n", bmi);
    return 0;

}
