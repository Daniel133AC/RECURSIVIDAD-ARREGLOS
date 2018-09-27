#include <iostream>

using namespace std;

bool pal(char str[],int i,int j,int limit){
    if(i>limit/2){
        return true;
    }
    if(str[i]!=str[i+j]){
        return false;}else{
        i++;
        j=j-2;}
    pal(str,i,j,limit);
}

void mayus(char str[],int i){
    if(str[i]=='\0'){
        return;
    }
    if(str[i]>=97&&str[i]<=122){
        str[i]=str[i]-32;}
    cout<<str[i];
    i++;
    mayus(str,i);
}


int main()
{
    char cadena[]="HolAloH";
    if(pal(cadena,0,6,6)==1){cout<<"Es palindrome";}else{cout<<"No es palindrome";}
    cout<<endl;
    mayus(cadena,0);
    cout<<endl;

    return 0;
}
