package logic.components;

import exception.BadStatusException;

public class Status {
    private int hp;
    private int durable;
    private int attack;
    private int magic;

    public Status(int hp, int durable, int attack, int magic) throws BadStatusException{
        this.setHp(hp);
        this.setDurability(durable);
        this.setAttack(attack);
        this.setMagic(magic);
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
    public void setHp(int i) throws BadStatusException {
        if(i < 0) throw new BadStatusException();
        this.hp = i;
    }

    public void setDurability(int i) throws BadStatusException {
        if(i < 0) throw new BadStatusException();
        this.durable = i;
    }

    public void setAttack(int i) throws BadStatusException {
        if(i < 0) throw new BadStatusException();
        this.attack = i;
    }

    public void setMagic(int i) throws BadStatusException {
        if(i < 0) throw new BadStatusException();
        this.magic = i;
    }
}
