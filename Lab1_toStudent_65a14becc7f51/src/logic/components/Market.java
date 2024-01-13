package logic.components;

import java.util.ArrayList;

public class Market {
    String name;
    ArrayList<Food> marketFood;
    ArrayList<Potion> marketpotion;

    public Market(String i){
        this.name = i;
        this.marketFood = new ArrayList<Food>();
        this.marketpotion = new ArrayList<Potion>();
    }
    public String getName() { return name; }
    public ArrayList<Food> getFoods() { return this.marketFood; }
    public ArrayList<Potion> getPotions() { return this.marketpotion; }

    public void setName(String nara1) { this.name = nara1; }

    public void setFoods(ArrayList<Food> foods) { this.marketFood = foods; }

    public void setPotions(ArrayList<Potion> potions) { this.marketpotion = potions; }
}
