import Controller.Contro_move;
import MapPane.Cell;
import MapPane.Map;
import Util.Block;
import Util.Playerview;
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.input.KeyCode;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.awt.*;

public class Main extends Application {
    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage stage) {
        ////////////////set value////////////////
        VBox root = new VBox();
        root.setPadding(new Insets(10));
        root.setSpacing(10);

        initalize_bar(root);

        Map map = new Map();
        root.getChildren().add(map);
//        root.setPrefHeight(400);
//        root.setPrefWidth(800);
        Scene scene = new Scene(root);
        Contro_move controMove = new Contro_move(map);
        ////////////////set key for move////////////////
        scene.setOnKeyPressed(e ->{
            if (e.getCode() == KeyCode.A || e.getCode() == KeyCode.LEFT) {
                controMove.turnleft();
            } else if (e.getCode() == KeyCode.D || e.getCode() == KeyCode.RIGHT){
                controMove.turnright();
            } else if (e.getCode() == KeyCode.W || e.getCode() == KeyCode.UP) {
                controMove.turnup();
            } else if (e.getCode() == KeyCode.S || e.getCode() == KeyCode.DOWN) {
                controMove.turndown();
            } else if (e.getCode() == KeyCode.S || e.getCode() == KeyCode.DIGIT1) {
                System.out.println("Skill : 1");
            } else if (e.getCode() == KeyCode.S || e.getCode() == KeyCode.DIGIT2) {
                System.out.println("Skill : 2");
            }
//            map.call();  // check movement
        });
        stage.setScene(scene);
        stage.setTitle("World");
        stage.show();
    }

    public void initalize_bar(VBox root) {
        HBox skill_bar = new HBox();
        skill_bar.setPadding(new Insets(5));
        skill_bar.setSpacing(10);
        skill_bar.setBorder(new Border(new BorderStroke(Color.LIGHTGRAY, BorderStrokeStyle.SOLID, CornerRadii.EMPTY, BorderWidths.DEFAULT)));

        StackPane skill1 = create_skill("fireball.png");
        StackPane skill2 = create_skill("poison.png");

        skill_bar.setAlignment(Pos.CENTER_LEFT);
        skill_bar.getChildren().addAll(skill1,skill2);
        root.getChildren().add(skill_bar);
    }

    public StackPane create_skill(String name) {
        StackPane skill1 = new StackPane();
        ImageView imageView = new ImageView(new Image(ClassLoader.getSystemResource(name).toString()));
        imageView.setFitWidth(50);
        imageView.setFitHeight(50);
        skill1.setPrefHeight(50);
        skill1.setPrefWidth(50);
        skill1.setMaxHeight(50);
        skill1.setMaxWidth(50);
        skill1.setBackground(new Background(new BackgroundFill(Color.GRAY, CornerRadii.EMPTY, Insets.EMPTY)));
        skill1.getChildren().add(imageView);
        return skill1;
    }
}