package logic.components;

import logic.components.Status;

public class Potion {
    String name;
    int price;
    Status stat;

    public Potion(String i, int j, Status k){
        this.name = i;
        if (j < 1) j = 1;
        this.price = j;
        this.stat = k;
    }
    public String  getName() { return name; }
    public int getPrice() { return price; }
    public Status getStat() { return stat; }

    public Status getIncreasingStatus() { return stat; }

    public void setName(String newPotion) { this.name = newPotion; }

    public void setIncreasingStatus(Status status) { this.stat = status; }

    public void setPrice(int i) {
        if(i < 0) this.price = 1;
        else this.price = i;
    }
    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Potion){
            Potion temp = (Potion) obj;
            return this.name.equals(temp.name) && this.price == temp.price && this.stat.hp == temp.stat.hp && this.stat.durable == temp.stat.durable && this.stat.attack == temp.stat.attack && this.stat.magic == temp.stat.magic;
        }
        return false;
    }
    @Override
    public int hashCode() {
        return (this.name.hashCode() + this.price + this.price);
    }
}
