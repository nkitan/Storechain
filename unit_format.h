// defines format for each transaction in a unit
// change test_class to user defines value

#define UNIT_DATA_FORMAT unit_transaction
#define UDF UNIT_DATA_FORMAT

class UNIT_DATA_FORMAT {
    private:
        std::string name;
        int value;

    public:
        UNIT_DATA_FORMAT(std::string name, int value){
            this->name = name;
            this->value = value * 2;
        }

        void print(){
            std::cout<<"[" + this->name <<"] -> "<<this->value<<"\n";
        }
};
