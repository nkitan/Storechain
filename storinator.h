#include "unit.hpp"
#define CHICKEN_HASH "789o04780123011gjk23hjk13hj23"

class storinator {
    private: 
        std::vector<unit> storechain;

    public:
        storinator(){
            unit chicken(CHICKEN_HASH);
            UNIT_DATA_FORMAT chicken_sarik("AnkitDas, AnkitKumar", 10);
            chicken.transact(chicken_sarik);
            this->storechain.insert(storechain.end(), chicken);
        }

        void addUnit(std::vector<UNIT_DATA_FORMAT> transactions){
            unit newUnit(this->storechain.back().getHash());
            for (auto &&transaction : transactions) {
                newUnit.transact(transaction);
            }
            this->storechain.insert(storechain.end(), newUnit);
        }


        void showAllUnits(){
            for (auto &&unit : this->storechain) {
                unit.show();
            }
        }

        std::string getLastHash(){
            return this->storechain.back().getHash();
        }
};