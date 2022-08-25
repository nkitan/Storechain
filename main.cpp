#include "storinator.h"

int main(){
    storinator blockchain;
    
    UNIT_DATA_FORMAT AD("SatoshiNakamoto, AnkitDas", 9);
    UNIT_DATA_FORMAT AB("AkshatBakshi, AnkitDas", 9);
    
    // UNIT_DATA_FORMAT and UDF can be used interchangeably
    UDF sa("AnkitKumar, AnkitDas", 100);
    UDF abc("ABC", 1);

    // UDF objects can be added to the transaction list of a unit
    blockchain.addUnit({AD,AB, sa, abc, satik});

    // showAllUnits can be used to display all Units in the blockchain
    blockchain.showAllUnits();

    // getLastHash can be used to get the hash of the previous stored unit
    std::cout<<blockchain.getLastHash()<<"\n";
    return 0;
}
