package logic.components;

public class Monster {
    String name;
    Status stat;
    Food dropfood;
    Potion droppotion;

    public Monster(String i, Status j){
        this.name = i;
        if(j.hp < 1) j.hp = 1;
        this.stat = j;
    }

    public void setFood(Food i) { dropfood = i; }
    public void setPotion(Potion i) { droppotion = i; }
    public Status getStatus() { return stat; }
    public String getName() { return name; }
    public Food getFood() { return dropfood; }
    public Potion getPotion() { return droppotion; }
    public void attack(Player monster) {
        if(stat.attack-monster.stat.durable > 0) monster.stat.hp-=stat.attack-monster.stat.durable;
        if(monster.stat.hp < 0) monster.stat.hp = 0;
    }
    public void magicAttack(Player monster) {
        monster.stat.hp-=stat.magic;
        if(monster.stat.hp < 0) monster.stat.hp = 0;
    }

    public void setStatus(Status status) { this.stat = status; }

    public void setName(String newMon) { this.name = newMon; }
}
