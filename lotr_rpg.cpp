#include <iostream>
using namespace std;
class warrior{
    private:
    string name;
    int strength;
    int shield;

    public:
    //initial warrior class
    warrior() : name("strider"), strength(13),shield(6){}

    void info(){
        cout<< "name : " << name << endl;
        cout << "strength : " << strength << endl;
        cout<< "shield : " << shield << endl;
    }
    //name change and buffs after leveling up
    void namechange(){
        name = "aragorn";
        strength += 3;
        shield += 2;
    }
};
class paladin : public warrior{
    //new attributes post leveling up
    private:
    int magic;
    int resolve;

    public:
    paladin() :magic(6),resolve(4){}
    

    void info(){
        warrior ::namechange();
        warrior :: info();
        cout<< "magic : " << magic << endl;
        cout<< "resolve : " << resolve << endl;
        cout << endl;
    }
};
class wizard{
    private:
    string name;
    int magic;
    int resolve;

    public:
    wizard() :name("gandalf the gray"),magic(9),resolve(4){}

    void info(){
        cout<< "name : "<< name << endl;
        cout<< "magic : " << magic << endl;
        cout<< "resolve :" << resolve << endl;
    }

    void namechange(){
        name = "gandalf the white";
        magic += 5;
        resolve += 4;
    }
};
class warlock : public wizard{
    private:
    int divinity;

    public:
    warlock() : divinity(9) {}

    void info(){
        wizard:: namechange();
        wizard::info();
        cout<<"divinity : " << divinity << endl;
    }



};
int main(){
    warrior a;
    paladin b;
    wizard c;
    warlock d;
    a.info();
    cout << endl;
    b.info();
    cout<<endl;
    c.info();
    cout<< endl;
    d.info();

    return 0;
}