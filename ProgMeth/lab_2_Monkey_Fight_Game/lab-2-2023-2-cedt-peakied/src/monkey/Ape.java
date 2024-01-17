package monkey;

import logic.game.GameSystem;

import java.util.ArrayList;

public class Ape extends BaseMonkey{
    public Ape(int maxHp, int atk, int def) { super(maxHp, atk, def); }
    public void attack(BaseMonkey m) {
        int damage = this.getAtk() - m.getDef();
        if(damage < 0) return;
        m.setHp(m.getHp()-damage);
    }
    public void attackAOE() {
        ArrayList<BaseMonkey> arrayList = GameSystem.getInstance().getMonkeyContainer();
        for(BaseMonkey monkey : arrayList) this.attack(monkey);
    }
}
