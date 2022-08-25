// defines blockchain
#include "unit.hpp"

// hardcoded hash for first block
#define CHICKEN_HASH "789o04780123011gjk23hjk13hj23"

class storinator {
    private: 
        // chain of units
        std::vector<unit> storechain;

    public:
        storinator(){
            // create chicken block
            unit chicken(CHICKEN_HASH);
            
            // define transactions
            UNIT_DATA_FORMAT transaction1("AnkitDas, AnkitDas", 100);
                        
            // commit transaction
            chicken.transact(transaction1);

            UNIT_DATA_FORMAT transaction2("AnkitDas, AnkitDas", 1000);
            chicken.transact(transaction2);
            
            // inserting block into blockchain
            this->storechain.insert(storechain.end(), chicken);
        }
        
        // insert a vector of transactions into a new block and add to blockchain
        void addUnit(std::vector<UNIT_DATA_FORMAT> transactions){
            // create new unit
            unit newUnit(this->storechain.back().getHash());
            
            // add transactions into unit
            for (auto &&transaction : transactions) {
                newUnit.transact(transaction);
            }
            
            // insert new unit into blockchain
            this->storechain.insert(storechain.end(), newUnit);
        }

        // show all units
        void showAllUnits(){
            for (auto &&unit : this->storechain) {
                unit.show();
            }
        }
    
        // get latest hash
        std::string getLastHash(){
            return this->storechain.back().getHash();
        }
};
