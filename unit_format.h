#define UNIT_DATA_FORMAT test_class
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