# Storechain

C++ blockchain implementation to store user defined objects.  
A block in storechain is called a unit and a single unit is made up of multiple transactions called atoms.  
  
## Usage    
### Defining stored class  
Storechain allows the user to store an arbitary class object as an atom on the blockchain. This class can be defined in the unit_format.h header file.  
unit_format.h contains a basic class with a string and an integer value in its definition. This can be replaced by any class definition according to the users needs.  The user needs to **ensure a parameterised constructor to initialise and finalise values** before transacting.  The user also needs to ensure there exists a **public void function called print** which may print values in the current unit atom.  
  
### Compiling
Compiling storechain is fast and easy and can be done using any C++ compiler. This has however been tested using g++ version 11.2.1.  
```bash
g++ -lcrypto main.cpp -o main
```
### Running
Running the blockchain requires no command line arguments and can simply be run using
```bash
./main
```
