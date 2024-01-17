package monkey;

public class UgabugagaMonkey extends BaseMonkey{
    final int DEBUFF = 1;
    final int HEAL = 10;
    public UgabugagaMonkey(int maxHp, int atk, int def) { super(maxHp, atk, def); }
    public void attack(BaseMonkey m) {
        int damage = this.getAtk() - m.getDef();
        if(damage < 0) return;
        if(m.getHp() < damage) m.setHp(0);
        else m.setHp(m.getHp()-damage);
        m.setAtk(m.getAtk()-DEBUFF);
        m.setDef(m.getDef()-DEBUFF);
    }
    public void heal(BaseMonkey m) { if(m.getHp()+HEAL <= m.getMaxHp()) m.setHp(m.getHp()+HEAL); }
}
