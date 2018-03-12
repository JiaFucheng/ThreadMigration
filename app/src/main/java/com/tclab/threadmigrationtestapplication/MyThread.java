package com.tclab.threadmigrationtestapplication;

import android.util.Log;

import static android.content.ContentValues.TAG;

/**
 * Created by hasee on 2018/3/12.
 */

public class MyThread extends Thread {
    @Override
    public void run() {
        super.run();

        Log.v(TAG, "MyThread run!");
    }
}
