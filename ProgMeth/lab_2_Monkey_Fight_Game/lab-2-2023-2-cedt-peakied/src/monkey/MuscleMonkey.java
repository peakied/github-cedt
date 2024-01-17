package monkey;

public class MuscleMonkey extends BaseMonkey{
    final int POWER_UP = 4;
    public MuscleMonkey(int maxHp,int atk , int def) {
        super(maxHp, atk, def);
    }
    public void attack(BaseMonkey m) {
        int damage = this.getAtk() - m.getDef();
        if(damage < 0) return;
        m.setHp(m.getHp()-damage);
        m.setHp(m.getHp()-damage);
    }
    public void buff() {
        this.setAtk(this.getAtk()+POWER_UP);
        this.setDef(this.getDef()+POWER_UP);
    }
}
