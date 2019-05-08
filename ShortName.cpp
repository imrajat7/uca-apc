#include<iostream>
using namespace std;
int flag=-1;
void shortname(char str1[])
{
    int sp=0;
    int k=0;
    for(int i=0;str1[i]!='\0';i++){
     if(str1[i]==' '){
            if(flag==-1){

            }
            if(flag==1)
            flag=0;
     }
     else{

         if(flag!=1){
             sp=i;
                str1[k++]=str1[i];
                str1[k++]='.';
                flag=1;
         }
       }
    }
    k--;
    for(int i=sp+1;str1[i]!=' '&& str1[i]!='\0';i++){
        str1[k++]=str1[i];
    }
    str1[k]='\0';
}

int main()
{
    char str[]=" My  name is Rajat ";
    shortname(str);
    cout<<str;
}
