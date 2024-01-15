package logic.components;

public class Ore {
    private String name;
    private int cost;

    public Ore(String i, int j){
        this.name = i;
        if (j < 1) j = 1;
        this.cost = j;
    }
    public String getName() { return name; }
    public int getPrice() {return cost; }

    public int getCost() {return cost; }

    public void setName(String x) { this.name = x; }

    public void setCost(int i) {
        if (i < 1) i = 1;
        this.cost = i;
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Ore){
            Ore temp = (Ore) obj;
            return this.name.equals(temp.name) && this.cost == temp.cost;
        }
        return false;
    }
    @Override
    public int hashCode() {
        return (this.name.hashCode() + this.cost);
    }
}
