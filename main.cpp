//vowel conso
#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    string input;
getline(cin,input);
int vow = 0,cons=0,digits=0,sp=0;
for(char c:input){
if(isdigit(c)){
digits++;
}
else if(isalpha(c)){
char lowerC=tolower(c);
if(lowerC == 'a' || lowerC =='e' || lowerC = 'i' || lowerC =='o' || lowerC=='u'){
vow++;
}
else
{
    cons++
}
}
else{
    sp++;
}
}
cout <<"Vowels: "<<vow<<'\n';
cout <<"Consonants: "<<cons<<'\n';
cout <<"Digits: "<<digits<<'\n';
cout <<"Special Characters: "<<sp<<'\n';
//

//Nanda start 
#include <stdio.h>
#include<string.h>

int main() {
    char str[51];
    scanf("%s",str);
    for(int i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}

//sarah start
import java.util.*;
class Solution{
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        String a=sc.nextLine();
        String b=sc.nextLine();
        String c=sc.nextLine();
        System.out.println(a.replace(b,c));
    }
}
