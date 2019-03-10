#include <fstream>
#include <iostream>
#include <string>

#define word 0
#define letter 1
#define comma 2
#define period 3

using namespace std;

string pointer, word, keyword[10];
char letter;
int counter[4]={0}, numkey;

int main(void){
    
    cout << "============================== "<< endl;
    cout << "|     TEXT FILE ANALYSIS     | "<< endl;
    cout << "============================== "<< endl << endl;
    cout << "Please Enter the Path of the File: " << endl;
    cin >> pointer;
    
    ifstream in;
    in.open (pointer);
    
    cout << endl << "Enter the Keyword(s) You're Looking For"
    
    int i = 0;
    
     while(1){
        cin >> keyword[i];
        if(keyword[i]== ""){
            break;
        }
    }
    numkey = i- 1;
    
    int keycounter[numkey]= {0};

    i = 0;
    
    while(!in.eof()){
        
        in << word;
        counter[word]++;
        
        for(int j = 0;j < numkey;j++){
            if ( word == keyword[i])
            keycounter[i]++;
        }
        
        while(word[i]!=0){
            letter = word[i];
            
            if(letter == '.')
                counter[period]++
            if(letter == ',')
                counter[comma]++;
            
            i++;
            counter[letter]++;
        }

    }


}