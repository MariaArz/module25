#include <iostream>
#include <map>


int main() {
    std::string name;
    int k=1, n;
    std::map<int, std::string>list;
    std::cout<<"Input name"<<std::endl;
    for (;;){
        std::cin>>name;
        if (name != "Next"){
            list.insert(std::pair<int,std::string>(k, name));
            k++;
        }
        else if (name == "Next"){
            std::map<int, std::string>:: iterator it = list.begin();
            name=it->second;
            for (std::map<int, std::string>:: iterator it = list.begin();
                 it !=list.end(); it++){
                if (it->second<=name){
                    name=it->second;
                    n=it->first;
                }
            }
            std::cout<<list[n];
            list.erase(list.find(n));
        }
        if (list.empty()) {
            break;
        }
    }
    return 0;
}
