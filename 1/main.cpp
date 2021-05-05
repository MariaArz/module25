#include <iostream>
#include <map>
#include <string>


int main() {
    std::string phone="", lastname="", command;
    std::map<std::string, std::string>phone_list;
    phone_list["69-70-30"]="Ivanov";
    phone_list["69-70-40"]="Ivanov";
    phone_list["69-72-30"]="Petrov";
    phone_list["60-70-30"]="Sidorov";
    std::cout<<"input demand"<<std::endl;
    getline(std::cin,command);
    for (int i=0; i < command.length(); i++){
        if (command[i] != ' '){
            if((command[i]>='0' && command[i] <='9') || command[i]=='-') phone+=command[i];
            else lastname+=command[i];
        }

    }
    if (phone!="" && lastname!=""){
        phone_list.insert(std::pair<std::string, std::string>(phone, lastname));
    }
    else if (phone!="" && lastname==""){
        std::map<std::string, std::string>:: iterator it = phone_list.find(phone);
        std::cout<<it->first<<": "<<it->second<<std::endl;
    }
    else if (phone=="" && lastname!=""){
        std::cout<<lastname<<std::endl;
        for (std::map<std::string, std::string>:: iterator name = phone_list.begin();
             name !=phone_list.end(); name++){
            if (name->second==lastname){
                std::cout<<name->first<<std::endl;
            }
        }
    }

    return 0;
}
