#include <iostream>
#include <map>


int main() {
    std::string phone, lastname, command;
    std::map<std::string, std::string>phone_list;
    phone_list["69-70-30"]="Ivanov";
    phone_list["69-70-40"]="Ivanov";
    phone_list["69-72-30"]="Petrov";
    phone_list["60-70-30"]="Sidorov";

    std::cout<<"input command(add - add person, 2 - search for number of phone and 3 - search for last name"<<std::endl;
    std::cin>>command;
    if (command=="add"){
        std::cout<<"input lastname"<<std::endl;
        std::cin>>lastname;
        std::cout<<"input phone"<<std::endl;
        std::cin>>phone;
        phone_list.insert(std::pair<std::string, std::string>(phone, lastname));
    }
    else if (command=="2"){
        std::cout<<"input phone"<<std::endl;
        std::cin>>phone;
        std::map<std::string, std::string>:: iterator it = phone_list.find(phone);
        std::cout<<it->first<<": "<<it->second<<std::endl;
    }
    else if (command=="3"){
        std::cout<<"input lastname"<<std::endl;
        std::cin>>lastname;
        std::cout<<lastname<<std::endl;
        for (std::map<std::string, std::string>:: iterator it = phone_list.begin();
             it !=phone_list.end(); it++){
            if (it->second==lastname){
                std::cout<<it->first<<std::endl;
            }
        }
    }

    return 0;
}
