package logic.components;

import exception.BadStatusException;

public class Monster {
    private String name;
    private Status stat;
    private Food dropfood;
    private Potion droppotion;

    public Monster(String i, Status j) {
        try{
            this.name = i;
            if (j.getHp() < 1) j.setHp(1);
            this.stat = j;
        }catch (Exception e){

        }
    }

    public void setFood(Food i) { dropfood = i; }
    public void setPotion(Potion i) { droppotion = i; }
    public Status getStatus() { return stat; }
    public String getName() { return name; }
    public Food getFood() { return dropfood; }
    public Potion getPotion() { return droppotion; }
    public void attack(Player monster) {
        try {
            if (stat.getAttack() - monster.getStatus().getDurability() > 0) monster.getStatus().setHp(monster.getStatus().getHp() - (stat.getAttack() - monster.getStatus().getDurability()));
            if (monster.getStatus().getHp() < 0) monster.getStatus().setHp(0);
        }catch (Exception e){

        }
    }
    public void magicAttack(Player monster) {
        try {
            int i = monster.getStatus().getHp() - stat.getMagic();
            if (i < 0) monster.getStatus().setHp(0);
            else monster.getStatus().setHp(i);
        }catch (BadStatusException e){

        }
    }

    public void setStatus(Status status) { this.stat = status; }

    public void setName(String newMon) { this.name = newMon; }
}
