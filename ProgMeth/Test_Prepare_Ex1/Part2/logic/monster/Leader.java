package logic.monster;

import logic.attack.Attack;

public class Leader extends Monster{
	private int maxChargeTurns;
	private int currentChargeTurns;
	private boolean isGuard;
	public Leader(String name, int hp, int def, int sp_def, Attack attack, int chargeTurns) {
		super(name, hp, def, sp_def, attack);
		this.setMaxChargeTurns(chargeTurns);
		this.setCurrentChargeTurns(0);
	}
	public int getMaxChargeTurns() {
		return maxChargeTurns;
	}
	public int getCurrentChargeTurns() {
		return currentChargeTurns;
	}
	public boolean isGuard() {
		return isGuard;
	}
	public void setMaxChargeTurns(int maxChargeTurns) {
		this.maxChargeTurns = maxChargeTurns;
	}
	public void setCurrentChargeTurns(int currentChargeTurns) {
		this.currentChargeTurns = currentChargeTurns<0? 0: Math.min(currentChargeTurns, this.getMaxChargeTurns());
	}
	public void setGuard(boolean guard) {
		isGuard = guard;
	}
	public boolean isReady() { return this.getCurrentChargeTurns()>=this.getMaxChargeTurns() ;}
	public int takeDamage(Attack attack) {
		if (this.isGuard()) return 0;
		int damage = attack.calculateDamage(this);
		if (attack.isLeader()) this.setHp(getHp()-damage);
		else this.setHp((int) (this.getHp()-Math.ceil(damage*0.5)));
		if(this.getHp() == 0) this.setDead(true);
		return damage;
	}
}
