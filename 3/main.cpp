#include <iostream>
#include <map>
#include <string>

int main() {
    int k;
    bool check=false;
    std::string word_one, word_two, words;
    std::map<char,int>word_s;
    std::cout<<"Input words"<<std::endl;
    std::cin>>word_one>>word_two;
    words=word_one+word_two;
    if (word_one.length()==word_two.length()){
        for (int i=0; i < words.length(); i++){
            k=1;
            for (std::map<char, int>:: iterator word = word_s.begin(); word != word_s.end(); word++){
                if (word->first==words[i]){
                    k++;
                    word_s[words[i]]=k;
                    break;
                }
            }
            if (k==1) word_s.insert(std::pair<char, int>(words[i],k));
        }


        for (std::map<char, int>:: iterator word = word_s.begin(); word != word_s.end(); word++){
            check=true;
            if (word->second%2!=0){
                check= false;
                break;
            }
        }
    }
    std::cout<<std::boolalpha<<check;

    return 0;
}
