package dragosholban.com.androidpuzzlegame;

import android.content.Intent;

import android.content.res.AssetManager;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Matrix;
import android.graphics.Rect;
import android.media.ExifInterface;
import android.net.Uri;
import android.os.Environment;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;
import android.widget.ImageView;
import android.widget.Toast;

import java.io.IOException;
import java.io.InputStream;


public class HintWindow extends MainActivity{

    Intent intent = getIntent();
  //  String assetName = intent.getExtras().getString("name");
 //   String mCurrentPhotoPath = intent.getExtras().getString("ImagePath");
   // String mCurrentPhotoUri = intent.getExtras().getString("ImagePathURL");

    @Override
    protected void onCreate(Bundle saveInstanceState){
        super.onCreate(saveInstanceState);
        setContentView(R.layout.activity_now);
        //PuzzleActivity p = new PuzzleActivity();
        //p.setPicFromPath(p.mCurrentPhotoPath,imageView);
    }
    public void onbackButtonCliked(View v){
        Toast.makeText(getApplicationContext(), "퍼즐 화면으로 돌아갑니다.", Toast.LENGTH_SHORT).show();
        finish();
    }


}

/*
public class HintWindow extends MainActivity{


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_now);
    }

    //protected void onCreate(Bundle savedInstanceState) {
        //super.onCreate(savedInstanceState);
        //ImageView imageView = (ImageView) findViewById(R.id.imageView);
        //Uri uri = Uri.parse("file:///" + Environment.getExternalStorageDirectory() + mCurrentPhotoUri);
        //imageView.setImageURI(uri);
        //setContentView(R.layout.activity_now);
    //}

    public void onbackButtonCliked(View v){
        Toast.makeText(getApplicationContext(), "퍼즐 화면으로 돌아갑니다.", Toast.LENGTH_SHORT).show();
        finish();
    }
}*/