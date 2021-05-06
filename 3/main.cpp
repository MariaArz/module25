#include <iostream>
#include <map>
#include <string>

int main() {
    std::string word_one, word_two;
    std::map<char,int>word_s;
    std::cout<<"Input words"<<std::endl;
    std::cin>>word_one>>word_two;
    for (int i = 0; i < word_one.length(); i++) {

        if (word_s.find(word_one[i]) == word_s.end()) {
            word_s.insert(std::pair<char, int>(word_one[i], 1));

        } else word_s[word_one[i]]++;
    }
    if (word_one.length()==word_two.length()) {


        for (int i = 0; i < word_two.length(); i++) {
            if (word_s.find(word_two[i]) != word_s.end()) {
                word_s[word_two[i]]--;
                if (word_s[word_two[i]]==0){
                    word_s.erase(word_two[i]);
                }
            }
        }
    }
    std::cout<<std::boolalpha<<word_s.empty() ;

    return 0;
}
