package logic.components;

import java.util.ArrayList;

public class Player {
    String name;
    Status stat;
    int energy;
    int money;
    ArrayList<Food> foods;
    ArrayList<Potion> potions;
    ArrayList<Ore> ores;

    public Player(String i, Status j){
        if(j.hp < 1) j.hp = 1;
        this.name = i;
        this.stat = j;
        this.energy = 10;
        this.money = 100;
    }
    public Player(String i, Status j, int k, int l){
        if(j.hp < 1) j.hp = 1;
        this.name = i;
        this.stat = j;
        if(k < 0) k = 0;
        if(l < 0) l = 0;
        this.energy = k;
        this.money = l;
    }
    public Status getStatus() { return stat; }
    public String getName() { return name; }
    public ArrayList<Ore> getOres() {
        if(ores == null) return new ArrayList<Ore>();
        return ores;
    }
    public boolean buyOre(Ore ore) {
        if(this.money>ore.cost) this.ores.add(ore);
        return this.money>ore.cost;
    }
    public int getEnergy() { return energy; }
    public int getMoney() { return money; }
    public ArrayList<Food> getFoods() {
        if(foods == null) return new ArrayList<Food>();
        return foods;
    }
    public ArrayList<Potion> getPotions() {
        if(potions == null) return new ArrayList<Potion>();
        return potions;
    }

    public void setMoney(int i) {
        if(i < 0) i = 0;
        this.money = i;
    }
    public void attack(Monster monster) {
        if (stat.attack - monster.stat.durable > 0) monster.stat.hp -= stat.attack - monster.stat.durable;
        if (monster.stat.hp < 0) monster.stat.hp = 0;
    }
    public void magicAttack(Monster monster) {
        monster.stat.hp-=stat.magic;
        if(monster.stat.hp < 0) monster.stat.hp = 0;
    }

    public void drinkPotion(int potion) {
        this.stat.hp += potions.get(potion).stat.hp;
        this.stat.attack += potions.get(potion).stat.attack;
        this.stat.durable += potions.get(potion).stat.durable;
        this.stat.magic += potions.get(potion).stat.magic;
        potions.remove(potion);
    }

    public void eatFood(int food) {
        this.energy += foods.get(food).energy;
        potions.remove(food);
    }

    public void sellPotion(int potion) {
        this.money += potions.get(potion).price;
        potions.remove(potion);
    }

    public void sellFood(int food) {
        this.money += foods.get(food).price;
        potions.remove(food);
    }

    public void setStatus(Status status) { this.stat = status; }
    public void setName(String newPlayer) { this.name = newPlayer; }
    public void setEnergy(int energy) {
        if(energy < 0) energy = 0;
        this.energy = energy; }
    public void setFoods(ArrayList<Food> foods) { this.foods = foods; }

    public void setOres(ArrayList<Ore> ores) { this.ores = ores; }
    public void daypass(){
        this.stat.hp -= 3-energy;
        this.energy = 0;
    }
}
