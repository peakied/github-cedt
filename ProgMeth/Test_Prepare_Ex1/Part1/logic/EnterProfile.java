package logic;

public class EnterProfile {
    Person person;
    int bodyTemperature;
    public EnterProfile(Person person, int bodyTemperature){
        this.setPerson(person);
        this.setBodyTemperature(bodyTemperature);
    }
    public Person getPerson() { return person; }
    public int getBodyTemperature() { return bodyTemperature; }
    public void setPerson(Person person) { this.person = person; }
    public void setBodyTemperature(int bodyTemperature) {
        if(bodyTemperature < 35) this.bodyTemperature = 35;
        else if(bodyTemperature > 42) this.bodyTemperature = 42;
        else this.bodyTemperature = bodyTemperature; }
    public boolean hasFever() { return bodyTemperature > 36; }
}
