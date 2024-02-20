import MapPane.Map;
import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.input.KeyCode;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

import java.util.ArrayList;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main extends Application {
    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage stage) throws Exception {
        VBox root = new VBox();
        root.setPadding(new Insets(10));
        root.setSpacing(10);
//        root.setPrefHeight(400);
//        root.setPrefWidth(800);
        Scene scene = new Scene(root);
        Map map = new Map();
        root.getChildren().add(map);
        scene.setOnKeyPressed(e ->{
            if (e.getCode() == KeyCode.A) {
                map.turnleft();
            } else if (e.getCode() == KeyCode.D){
                map.turnright();
            } else if (e.getCode() == KeyCode.W) {
                map.turnup();
            } else if (e.getCode() == KeyCode.S) {
                map.turndown();
            }
            map.call();
        });
        stage.setScene(scene);
        stage.setTitle("World");
        stage.show();
    }
}