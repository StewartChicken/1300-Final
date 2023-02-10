/*
Boss class which will create objects of bosses the 
player will fight throughout the game
*/

class Boss{

    private:
        
        //Character attributes. 'damage' is damage dealth, 'defense' is 
        //how much damage taken is mitigated, 'agility' is probability of 
        //dodging an attack
        int health, damage, defense, agility; 
        

    public:
        Boss(int health, int damage, int defense, int agility){ //Overloaded constructor which can change the type of character
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
int Boss::getHealth(){
    return health;
}

void Boss::setHealth(int health){
    this -> health = health;
}

int Boss::getDamage(){
    return damage;
}

void Boss::setDamage(int damage){
    this -> damage = damage;
}

int Boss::getDefense(){
    return defense;
}

void Boss::setDefense(int defense){
    this -> defense = defense;
}

int Boss::getAgility(){
    return agility;
}

void Boss::setAgility(int agility){
    this -> agility = agility;
}
