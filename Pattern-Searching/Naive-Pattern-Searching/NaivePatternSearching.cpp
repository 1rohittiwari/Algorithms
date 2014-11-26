 
#include <iostream>
using namespace std;

int main(){
    
    char text[]="The quick brown fox jumps over the lazy dog.";
    char pattern[]="fox";
    
    
    int ltext=0,lpattern=0;
    
    while(text[ltext]!='\0'){
        ltext++;
    }
    while(pattern[lpattern]!='\0'){
        lpattern++;
    }

    // Algo implementation using for loops
    for(int i=0; i<(ltext - lpattern); i++){        
        int j=0;
        
        for(j=0; j<lpattern; j++){
            if(pattern[j]!=text[i+j]){
                break;
            }
        }
        
        if(j==lpattern){
            cout<<"Pattern is at "<<(i)<<endl;
        }

        //CODE FOR DEBUGGING :
        // cout<<text<<endl;
        // for(int a=0; a<=i; a++){
        //   cout<<" ";
        // }
        // cout<<pattern<<endl;
    }
    
    
    return 0;
}
