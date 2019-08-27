package com.example.dsc2.colorchanger;

import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    Button b1,b2,b3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        b1 = (Button)findViewById(R.id.button);
        b2 = (Button)findViewById(R.id.button2);
        b3 = (Button)findViewById(R.id.button3);
    }
    public void red1(View v){
        getWindow().getDecorView().setBackgroundColor(Color.RED);
        Toast.makeText(this, "Red color Selected", Toast.LENGTH_SHORT).show();
    }
    public void green1(View v){
        getWindow().getDecorView().setBackgroundColor(Color.GREEN);
        Toast.makeText(this, "Green color Selected", Toast.LENGTH_SHORT).show();
    }
    public void blue1(View v){
        getWindow().getDecorView().setBackgroundColor(Color.BLUE);
        Toast.makeText(this, "Blue color Selected", Toast.LENGTH_SHORT).show();
    }
}
