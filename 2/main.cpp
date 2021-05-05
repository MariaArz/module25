#include <iostream>
#include <map>


int main() {
    std::string name;
    int k;
    std::map<std::string, int>list;
    std::cout<<"Input name"<<std::endl;
    for (;;){
        std::cin>>name;
        if (name != "Next"){
            k=1;
            for (std::map< std::string, int>:: iterator it = list.begin();
                it != list.end(); it++){
                if (it->first==name){
                    k++;
                    list[name]=k;
                    break;
                }
            }
            if (k==1) list.insert(std::pair<std::string,int>(name,k));

        }
        else {
            name=list.begin()->first;
            for (std::map<std::string, int>:: iterator it = list.begin();
                 it !=list.end(); it++){
                if (it->first<=name){
                    name=it->first;
                    it->second--;
                }
                if(it->second==0){
                    list.erase(list.find(name));
                    break;
                }
            }
            std::cout<<name;

        }
        if (list.empty()) {
            break;
        }
    }
    return 0;
}
