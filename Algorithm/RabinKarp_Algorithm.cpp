#include <iostream>
using namespace std;


void search(char pat[], char txt[])
{   
    int t = strlen(txt);
    int p = strlen(pat);
    int hp = 0,ht = 0;
    for(int i = 0;i<p;i++){
        hp = hp*10 + (pat[i]);
    }

    for(int i = 0;i<p;i++){
        ht = ht*10 + (txt[i]);
    }
    int i = p;
    int po = (int)(pow(10, p-1) + 0.5);
    do{
        
        if(ht == hp){
            cout<<"Pattern found at :"<<i-p<<"\n";
        }   
        ht = ht-((txt[i-p])*po); 
        ht = ht*10 +(txt[i]);
        i++;
    }while(i<=t);
}

/* Driver code */
int main()
{
	char txt[] = "anurag singh anurag";
	char pat[] = "singh";
	
	// Function Call
	search(pat, txt);
	return 0;
}


