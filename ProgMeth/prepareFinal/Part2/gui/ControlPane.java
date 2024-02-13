package gui;

import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.Node;
import javafx.scene.control.Button;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;


//You might need to do something to the following line
public class ControlPane extends VBox {
	
	private Text drawnNumberText;
	private Text drawCountText;
	private Text bingoText;
	private Button drawButton;
	private Button newRoundButton;
	private NumberGrid numberGrid;

	
	public ControlPane(NumberGrid numberGrid) {
		// TODO
		this.setNumberGrid(numberGrid);
		this.setAlignment(Pos.CENTER);
		this.setPrefWidth(300);
		this.setSpacing(20);
		this.setBorder(new Border(new BorderStroke(Color.LIGHTGRAY,BorderStrokeStyle.SOLID,CornerRadii.EMPTY,BorderWidths.DEFAULT)));
		this.setDrawnNumberText(new Text());
		this.getDrawnNumberText().setFont(Font.font(20));
		this.setDrawCountText(new Text());
		initializeBingoText();
		initializeDrawButton();
		initializeNewRoundButton();
		this.getChildren().addAll(this.getDrawnNumberText(),this.getDrawButton(),this.getNewRoundButton(),this.getBingoText(),this.getDrawCountText());
	}
	
	private void initializeBingoText() {
		// TODO
		this.setBingoText(new Text("Bingo!!"));
		this.getBingoText().setFont(Font.font(40));
		this.getBingoText().setVisible(false);
	}

	private void initializeDrawButton() {
		// TODO
		this.setDrawButton(new Button("Draw a number"));
		this.getDrawButton().setPrefWidth(100);
		this.getDrawButton().setOnAction(actionEvent -> {
			drawButtonHandler();
        });
	}

	private void initializeNewRoundButton() {
		// TODO
		this.setNewRoundButton(new Button("New Round"));
		this.getNewRoundButton().setPrefWidth(100);
		this.getNewRoundButton().setDisable(true);
		this.getNewRoundButton().setOnAction(ActionEvent -> {
			newRoundButtonHandler();
		});
	}
	
	private void drawButtonHandler() {
		// TODO
		int drawnumber = BingoUtil.drawNumber();
		if (numberGrid.highlightNumber(drawnumber)) {
			this.getBingoText().setVisible(true);
			this.getDrawButton().setDisable(true);
			this.getNewRoundButton().setDisable(false);
		}
		BingoUtil.updateTextsAfterDrawn(drawnumber,drawnNumberText,drawCountText);
	}
	
	private void newRoundButtonHandler() {
		// TODO
		BingoUtil.assignRandomNumbers(numberGrid.getNumberSquares());
		this.getBingoText().setVisible(false);
		this.getDrawButton().setDisable(false);
		this.getNewRoundButton().setDisable(true);
		BingoUtil.setTextsBeginning(drawnNumberText,drawCountText);
	}

	public Text getDrawnNumberText() {
		return drawnNumberText;
	}

	public void setDrawnNumberText(Text drawnNumberText) {
		this.drawnNumberText = drawnNumberText;
	}

	public Text getDrawCountText() {
		return drawCountText;
	}

	public void setDrawCountText(Text drawCountText) {
		this.drawCountText = drawCountText;
	}

	public Text getBingoText() {
		return bingoText;
	}

	public void setBingoText(Text bingoText) {
		this.bingoText = bingoText;
	}

	public Button getDrawButton() {
		return drawButton;
	}

	public void setDrawButton(Button drawButton) {
		this.drawButton = drawButton;
	}

	public Button getNewRoundButton() {
		return newRoundButton;
	}

	public void setNewRoundButton(Button newRoundButton) {
		this.newRoundButton = newRoundButton;
	}

	public NumberGrid getNumberGrid() {
		return numberGrid;
	}

	public void setNumberGrid(NumberGrid numberGrid) {
		this.numberGrid = numberGrid;
	}

}
