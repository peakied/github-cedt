package logic.components;

public class Food {
    public String name;
    public int price;
    public int energy;

    public Food(String i, int j, int k){
        if(j < 1) j = 1;
        if(k < 1) k = 1;
        this.name = i;
        this.price = j;
        this.energy = k;
    }
    public String getName() { return name; }
    public int getPrice() { return price; }
    public int getEnergy() { return energy; }

    public void setName(String ohno) { this.name = ohno; }

    public void setPrice(int i) {
        if(i < 1) i = 1;
        this.price = i;
    }
    public boolean assertEquals(Food o){
        return (this.name == o.name && this.price == o.price && this.energy == o.energy);
    }

    public void setEnergy(int i) {
        if(i < 1) i = 1;
        this.energy = i;
    }
    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Food){
            Food temp = (Food) obj;
            return this.name.equals(temp.name) && this.energy == temp.energy && this.price == temp.price;
        }
        return false;
    }
    @Override
    public int hashCode() {
        return (this.name.hashCode() + this.energy + this.price);
    }
}
