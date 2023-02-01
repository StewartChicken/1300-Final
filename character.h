
/*
Character parent class which will create objects of both 
characters that the player can use and bosses the player
will fight. 
*/
class Character{

    private:
        //this boolean determines if the object of this class is a playable character or a boss
        bool isBoss; 

        //Character attributes
        int health; //Health of character
        int damage; //Damage output of character
        int defense; //Damage intake of character
        int agility; //Dodge chance

    public:
        Character(bool isBoss, int health, int damage, int defense, int agility){ //Overloaded constructor which can change the type of character
            this -> isBoss = isBoss;
            this -> health = health;
            this -> damage = damage;
            this -> defense = defense;
            this -> agility = agility;
        }

        //Encapsulation Methods
        int getHealth(){
            return health;
        }

        void setHealth(int health){
            this -> health = health;
        }

        int getDamage(){
            return damage;
        }

        void setDamage(int damage){
            this -> damage = damage;
        }

        int getDefense(){
            return defense;
        }

        void setDefense(int defense){
            this -> defense = defense;
        }

        int getAgility(){
            return agility;
        }

        void setAgility(int agility){
            this -> agility = agility;
        }
};
