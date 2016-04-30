package edu.ptu.jniproj;

/**
 * Created by WangAnshu on 16/4/28.
 */
public class Sum {
    static {
        System.loadLibrary("hello-android-jni");
    }
    public  native String getSum(int i, int j);

}
