import java.io.*;
import java.util.*;
public class Main
{
    public static void main(String args[]) throws Exception
    {
        int[] scores = new int[5];
        scores[0] = 250;
        scores[1] = 243;
        scores[2] = 176;
        scores[3] = 220;
        scores[4] = 299;
        
        int totalOfAll = 0;
        for(int i = 0; i < scores.length; i++)
        {
            System.out.println("Team " + i + " = " + scores[i]);
            totalOfAll += scores[i];
        }
        System.out.println("Total = " + totalOfAll); 
    }
}
