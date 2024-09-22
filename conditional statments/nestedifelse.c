#include <stdio.h> // #include<iostream> in case of c ++
//using namespace std in case of c++ 
int main(){ // same in both c and c++

int marks; // int char all data types and operations are same in both c and c++
scanf("%d",&marks); // in case of c we use scanf while c ++ have cin>>marks>>a>>b>>c......; isme %d %c koi dikkat  nahi hota 

if(marks>=70){
    int cgpa;
    scanf("%d",&cgpa);
    if(cgpa>8){
        printf("you cgpa is fit for the interview"); // in c++ you have to write cout<<" "<<"haofhasfh"<<marks
    }
    else{
        printf("Check other creteria to attend interview");
    }
}
 else if(marks>=60 && marks<70){
        printf("maintain cgpa upto 9+");
    }
    else{
        printf("you are not eligible");
    }

return 0; // same in both c and c++

}