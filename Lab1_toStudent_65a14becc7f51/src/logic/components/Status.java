package logic.components;

public class Status {
    public int hp;
    public int durable;
    public int attack;
    public int magic;

    public Status(int hp, int durable, int attack, int magic){
        if(hp < 0 || durable < 0 || attack < 0 || magic < 0) throw null;
        this.hp = hp;
        this.durable = durable;
        this.attack = attack;
        this.magic = magic;
    }
    public int getHp() { return hp; }
    public int getDurability() { return durable; }
    public int getAttack() { return attack; }
    public int getMagic() { return magic; }
    public int getDurable() { return durable; }
    public void addStatus(Status addStatus) {
        this.hp += addStatus.hp;
        this.durable += addStatus.durable;
        this.attack += addStatus.attack;
        this.magic += addStatus.magic;
    }
    public void setHp(int i) {
        if(i < 0) throw null;
        this.hp = i;
    }

    public void setDurability(int i) {
        if(i < 0) throw null;
        this.durable = i;
    }

    public void setAttack(int i) {
        if(i < 0) throw null;
        this.attack = i;
    }

    public void setMagic(int i) {
        if(i < 0) throw null;
        this.magic = i;
    }
}
