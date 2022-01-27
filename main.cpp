#include "storinator.h"

int main(){
    storinator blockchain;
    
    // UNIT_DATA_FORMAT and UDF can be used interchangeably
    UNIT_DATA_FORMAT wa("SatoshiNakamoto, AnkitDas", 9);
    UDF sa("Hehe, AnkitDas", 100);
    UDF satik("SARIK", 1);

    // UDF objects can be added to the transaction list of a unit
    blockchain.addUnit({wa, sa, satik});

    // showAllUnits can be used to display all Units in the blockchain
    blockchain.showAllUnits();

    // getLastHash can be used to get the hash of the previous stored unit
    std::cout<<blockchain.getLastHash()<<"\n";
    return 0;
}