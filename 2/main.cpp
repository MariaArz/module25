#include <iostream>
#include <map>
#include <string>

int main() {
    std::string name;
    std::map<std::string, int>list;
    std::cout<<"Input name"<<std::endl;
    for (;;){
        std::cin>>name;
        if (name != "Next"){
            if (list.find(name)==list.end()) {
                list.insert(std::pair<std::string,int>(name,1));
            }
            else {
                list[name]++;
            }
        }
        else {
            name=list.begin()->first;
            list.begin()->second--;
            if(list.begin()->second==0){
                list.erase(list.begin());
            }
            std::cout<<name;

        }
        if (list.empty()) {
            break;
        }
    }
    return 0;
}
