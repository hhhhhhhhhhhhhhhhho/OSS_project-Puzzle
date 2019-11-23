package dragosholban.com.androidpuzzlegame;

import android.content.Intent;
import android.net.Uri;
import android.provider.MediaStore;
import android.support.v4.content.FileProvider;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

import java.io.File;
import java.io.IOException;

public class levelactivity extends AppCompatActivity{

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_levelactivity);
    }

    public void onbackButtonCliked(View v){
        Toast.makeText(getApplicationContext(), "퍼즐 화면으로 돌아갑니다.", Toast.LENGTH_SHORT).show();

        finish();
    }

    public void level_1(View view) {
        PuzzleActivity p = new PuzzleActivity();
        p.Level_1();
        finish();
    }

    public void level_2(View view) {
        PuzzleActivity p = new PuzzleActivity();
        p.Level_2();
        finish();
    }

    public void level_3(View view) {
        PuzzleActivity p = new PuzzleActivity();
        p.Level_3();
        finish();
    }
}
