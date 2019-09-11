/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 10, 2019, 1:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Ary{
public:
    int x,y;  
    double value;
};



/*
 * 
 */


int main(int argc, char** argv) {
    int m=10,n=10;
    
    Ary mapB[m][n],Result[m-2][n-2];
    
    //assign value
    for(int x=0;x<m;x++){
        for(int y=0;y<n;y++){
            mapB[x][y].value=rand()%100 + 1;
            if(x==0||y==0||x==m-1||y==n-1){
            mapB[x][y].value=0;
            }
        }
    }
    
    
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mapB[i][j].value<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    for(int i=1;i<m-1;i++){
        for(int j=1;j<n-1;j++){

            //check no zero and court avg
            //get the no zero number
            int ck=0;
            int sub=0;
            int avg=0;
            if(mapB[i-1][j-1].value!=0){
                ck+=1;
                sub=sub+mapB[i-1][j-1].value;
            }
            if(mapB[i-1][j].value!=0){
                ck+=1;
                sub=sub+mapB[i-1][j].value;
            }
            if(mapB[i-1][j+1].value!=0){
                ck+=1;
                sub=sub+mapB[i-1][j+1].value;
            }
            
            if(mapB[i][j-1].value!=0){
                ck+=1;
                sub=sub+mapB[i][j-1].value;
            }
            if(mapB[i][j].value!=0){
                ck+=1;
                sub=sub+mapB[i][j].value;
            }
            if(mapB[i][j+1].value!=0){
                ck+=1;
                sub=sub+mapB[i][j+1].value;
            }
            
                        
            if(mapB[i+1][j-1].value!=0){
                ck+=1;
                sub=sub+mapB[i+1][j-1].value;
            }
            if(mapB[i+1][j].value!=0){
                ck+=1;
                sub=sub+mapB[i+1][j].value;
            }
            if(mapB[i+1][j+1].value!=0){
                ck+=1;
                sub=sub+mapB[i+1][j+1].value;
            }
            
            avg=sub/ck;           
            Result[i-1][j-1].value=avg;

        }
    }

    
    
    //print result
    cout<<endl;
    for(int i=0;i<m-2;i++){
        for(int j=0;j<n-2;j++){
            cout<<Result[i][j].value<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
    
    //
}





