//
//  main.cpp
//  classd
//
//  Created by Avinash Swaminathan on 07/01/18.
//  Copyright © 2018 Avinash Swaminathan. All rights reserved.
//

#include <iostream>
#include <cmath>
#define PI 3.14157
#define Parent(i) (i/2)
#define Left(i) (2*i)
#define Right(i) (2*i+1)
using namespace std;
/*float Area(float a,float b)
 {
 return a*b;
 }
 float Area(float R)
 {
 return PI*R*R;
 }
 float Area(float a,float b,float c)
 {
 int s=(a+b+c)/2;
 return sqrt(s*(s-a)*(s-b)*(s-c));
 }
 int Area(int a)
 {
 
 }*/
void Max_Heapify(int *root,int i,int n)
{
    int largest=i;
    int l=Left(i);
    int r=Right(i);
    if((l<=n)&&(root[l]>root[i]))
        largest=l;
    if((r<=n)&&(root[r]>root[largest]))
        largest=r;
    // cout<<largest<<endl;
    if(largest!=i)
    {
        int t=root[largest];
        root[largest]=root[i];
        root[i]=t;
        Max_Heapify(root, largest, n);
    }
    
    
    
    
}
void Heap(int *root,int n)
{
    
    
}
int main() {
    // insert code here...
    int *root;
    int n;
    cin>>n;
    root=new int[n+1];
    for(int i=1;i<=n;i++)
        cin>>root[i];
    Heap(root,n);
    for(int i=1;i<=n;i++)
        cout<<root[i]<<" ";
    
    return 0;
}
