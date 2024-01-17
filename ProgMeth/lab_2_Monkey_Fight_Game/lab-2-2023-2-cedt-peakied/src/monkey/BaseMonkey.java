package monkey;

import logic.game.GameSystem;

import java.util.ArrayList;

public class BaseMonkey {
    private int maxHp;
    private int hp;
    private int atk;
    private int def;
    public BaseMonkey(){
        maxHp = 30;
        hp = maxHp;
        atk = 20;
        def = 5;
    }
    public BaseMonkey(int maxHps, int atks, int defs){
        setMaxHp(maxHps);
        setHp(maxHp);
        setAtk(atks);
        setDef(defs);
    }
    public void attack(BaseMonkey m){
        int damage = this.atk - m.def;
        if(damage < 0) return;
        if(m.getHp() < damage) m.setHp(0);
        else m.hp-=damage;
    }
    public void setMaxHp(int maxHps) {
        if(maxHps < 0) this.maxHp = 0;
        else this.maxHp = maxHps;
    }
    public void setHp(int hps) {
        if(hps < 0) this.hp = 0;
        else this.hp = hps;
    }
    public void setAtk(int atks) {
        if(atks < 0) this.atk = 0;
        else this.atk = atks;
    }
    public void setDef(int defs) {
        if(defs < 0) this.def = 0;
        else this.def = defs;
    }
    public int getMaxHp() {
        return maxHp;
    }
    public int getHp() { return hp; }
    public int getAtk() {
        return atk;
    }
    public int getDef() {
        return def;
    }
    public String getType() { return getClass().getSimpleName(); }
    public String toString() { return getType()+"hp="+hp+"atk="+atk+"def="+def; }
}

