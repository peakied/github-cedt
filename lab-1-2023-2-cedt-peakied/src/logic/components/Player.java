package logic.components;

import exception.BadStatusException;

import java.util.ArrayList;

public class Player {
    private String name;
    private Status stat;
    private int energy;
    private int money;
    ArrayList<Food> foods;
    ArrayList<Potion> potions;
    ArrayList<Ore> ores;

    public Player(String i, Status j){
        if(j.getHp() < 1){
            try{
                j.setHp(1);
            }catch (Exception E){

            }
        }
        this.name = i;
        this.stat = j;
        this.energy = 10;
        this.money = 100;
        this.setOres(new ArrayList<Ore>());
        this.setFoods(new ArrayList<Food>());
        this.setPotions(new ArrayList<Potion>());
    }
    public Player(String i, Status j, int k, int l) {
        if(j.getHp() < 1){
            try{
                j.setHp(1);
            }catch (Exception E){

            }
        }
        this.name = i;
        this.stat = j;
        if(k < 0) k = 0;
        if(l < 0) l = 0;
        this.energy = k;
        this.money = l;
        this.setOres(new ArrayList<Ore>());
        this.setFoods(new ArrayList<Food>());
        this.setPotions(new ArrayList<Potion>());
    }
    public Status getStatus() { return stat; }
    public String getName() { return name; }
    public ArrayList<Ore> getOres() {
        if(ores == null) return new ArrayList<Ore>();
        return ores;
    }
    public boolean buyOre(Ore ore) {
        if(this.money>ore.getCost()){
            this.money = money-ore.getCost();
            this.ores.add(ore);
            return true;
        }
        return false;
    }
    public int getEnergy() { return energy; }
    public int getMoney() { return money; }
    public ArrayList<Food> getFoods() { return foods; }
    public ArrayList<Potion> getPotions() {
        if(potions == null) return new ArrayList<Potion>();
        return potions;
    }

    public void setMoney(int i) {
        if(i < 0) i = 0;
        this.money = i;
    }
    public void attack(Monster monster) {
        try {
            int i = monster.getStatus().getHp() - (stat.getAttack()-monster.getStatus().getDurable());
            if (i < 0) monster.getStatus().setHp(0);
            else if (stat.getAttack()-monster.getStatus().getDurable() > 0) monster.getStatus().setHp(i);
        }catch (BadStatusException e){

        }
    }
    public void magicAttack(Monster monster) {
        try {
            int i = monster.getStatus().getHp() - stat.getMagic();
            if (i < 0) monster.getStatus().setHp(0);
            else monster.getStatus().setHp(i);
        }catch (BadStatusException e){

        }
    }

    public void drinkPotion(int potion) {
        try {
            this.stat.setHp(this.stat.getHp() + potions.get(potion).getStat().getHp());
            this.stat.setAttack(this.stat.getAttack() + potions.get(potion).getStat().getAttack());
            this.stat.setDurability(this.stat.getDurability() + potions.get(potion).getStat().getDurable());
            this.stat.setMagic(this.stat.getMagic() + potions.get(potion).getStat().getMagic());
            potions.remove(potion);
        }catch (Exception e){
        }
    }

    public void eatFood(int food) {
        try {
            this.energy += foods.get(food).getEnergy();
            foods.remove(food);
        }catch (Exception e){

        }
    }

    public void sellPotion(int potion) {
        try {
            this.money += potions.get(potion).getPrice();
            potions.remove(potion);
        }catch (Exception e){

        }
    }

    public void sellFood(int food) {
        try {
            this.money += foods.get(food).getPrice();
            foods.remove(food);
        }catch (Exception e){

        }
    }

    public void setStatus(Status status) { this.stat = status; }
    public void setName(String newPlayer) { this.name = newPlayer; }
    public void setEnergy(int energy) {
        if(energy < 0) energy = 0;
        this.energy = energy; }
    public void setFoods(ArrayList<Food> foods) { this.foods = foods; }
    public void setPotions(ArrayList<Potion> potion) { this.potions = potion; }
    public void setOres(ArrayList<Ore> ores) { this.ores = ores; }
    public void daypass(){
        try{
            this.stat.setHp(this.stat.getHp() - 3 + energy);
            this.energy = 0;
        }catch (Exception e){

        }
    }
}
