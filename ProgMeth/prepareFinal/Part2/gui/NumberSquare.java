package gui;

import javafx.geometry.Insets;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.CornerRadii;
import javafx.scene.layout.HBox;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;

public class NumberSquare extends HBox {
	
	private int number;
	private boolean isDrawn;
	private Text numberText;

	public NumberSquare() {
		BingoUtil.initializeNumberSquare(this);		
	}

	public void setupNumber(int number) {
		// TODO
		this.number = number;
		this.isDrawn = false;
		this.getChildren().addAll(new Text(String.valueOf(number)));
		this.setBackground(Background.fill(Color.WHITE));
	}	
	
	public void highlight() {
		// TODO 
		this.setBackground(Background.fill(Color.ORANGE));
		this.isDrawn = true;
	}
	
	public int getNumber() {
		return number;
	}	

	public boolean isDrawn() {
		return isDrawn;
	}

	public void setNumberText(Text numberText) {
		this.numberText = numberText;
	}
}
