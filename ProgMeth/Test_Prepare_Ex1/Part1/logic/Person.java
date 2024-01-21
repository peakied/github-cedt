package logic;

public class Person {
    private String name;
    private int ID;
    public Person(String name, int ID) {
        this.setName(name);
        this.setID(ID);
    }
    public String getName() { return name; }
    public int getID() { return ID; }
    public void setName(String name) { this.name = name; }
    public void setID(int ID) {
        if(ID > 0) this.ID = ID;
        else this.ID = 1;
    }
}
