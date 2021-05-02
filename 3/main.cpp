#include <iostream>
#include <map>

int main() {
    std::string word_one, word_two;
    std::map<int, char>word_first;
    std::map<int, char>word_second;
    std::cout<<"Input words"<<std::endl;
    std::cin>>word_one>>word_two;
    for (int i=0; i < word_one.length(); i++){
        word_first.insert(std::pair<int,char>(i, word_one[i]));
    }
    for (int i=0; i < word_two.length(); i++){
        word_second.insert(std::pair<int,char>(i, word_two[i]));
    }
    std::map<int, char>:: iterator one = word_first.end();
    std::map<int, char>:: iterator two = word_second.end();
    bool check=false;
        for (int i=0; i < one->first; i++){
            check = false;
            for (int j=0; j < two->first; j++){
                if (word_first[i] == word_second[j]){
                    check = true;
                    word_second.erase(j);
                    std::map<int, char>:: iterator two = word_second.end();
                    continue;
                }
            }
        }
        for (std::map<int, char>:: iterator two = word_second.begin(); two != word_second.end(); two++){
            if (two->second !='\000'){
                check=false;
                break;
            }
        }
        std::cout<<std::boolalpha<<check;

    return 0;
}
