package monkey;

import logic.game.GameSystem;

public class MommyMonkey extends BaseMonkey{
    public MommyMonkey(int maxhps, int atk, int def){ super(maxhps, atk, def); }
    public void attack(BaseMonkey m) { return; }
    public void birth() {
        GameSystem.getInstance().getMonkeyContainer().add(new BaseMonkey());
    }
}
