
/*
Character parent class which will create objects of 
characters that the player can play as. 
*/
class Character{

    private:
        
        //Character attributes. 'damage' is damage dealth, 'defense' is 
        //how much damage taken is mitigated, 'agility' is probability of 
        //dodging an attack
        int health, damage, defense, agility; 
        

    public:
        Character(int health, int damage, int defense, int agility){ //Overloaded constructor which can change the type of character
            this -> health = health;
            this -> damage = damage;
            this -> defense = defense;
            this -> agility = agility;
        }

        //Encapsulation method declarations
        int getHealth();
        int getDamage();
        int getDefense();
        int getAgility();

        void setHealth(int);
        void setDamage(int);
        void setDefense(int);
        void setAgility(int);

};

//Encapsulation method definitions
int Character::getHealth(){
    return health;
}

void Character::setHealth(int health){
    this -> health = health;
}

int Character::getDamage(){
    return damage;
}

void Character::setDamage(int damage){
    this -> damage = damage;
}

int Character::getDefense(){
    return defense;
}

void Character::setDefense(int defense){
    this -> defense = defense;
}

int Character::getAgility(){
    return agility;
}

void Character::setAgility(int agility){
    this -> agility = agility;
}
