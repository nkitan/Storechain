#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include <sstream>
#include<openssl/sha.h>
#include "unit_format.h"

class unit {
    private:
        std::vector<UNIT_DATA_FORMAT> list;
        std::string hash;
        std::string previousHash;

        std::string sha256(std::vector<UNIT_DATA_FORMAT> list){
            std::vector<UNIT_DATA_FORMAT> temp = list;
            if(!temp.empty()){
                unsigned char hash[SHA256_DIGEST_LENGTH];
                SHA256_CTX sha256;
                SHA256_Init(&sha256);
                SHA256_Update(&sha256, (void*)&temp, temp.size());
                SHA256_Final(hash, &sha256);
                std::stringstream ss;
                for(int i = 0; i < SHA256_DIGEST_LENGTH; i++){
                    ss<<std::hex<<std::setw(2)<<std::setfill('0')<<(int)hash[i];
                }
                return ss.str();
            }
            return "null";
        }

        void generateHash(){
            this->hash = sha256(list);
        }

    public:
        unit(std::string previousHash){
            this->previousHash = previousHash;
        }

        void transact(UNIT_DATA_FORMAT data){
            this->list.insert(list.end(), data);
        }

        void show(){
            for (auto &&transaction : this->list){
                transaction.print();
            }
            std::cout<<this->getHash()<<"\n";
            std::cout<<"--------------\n";
        }

        std::string getHash(){
            this->generateHash();
            return this->hash;
        }
};