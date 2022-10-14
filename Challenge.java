import java.util.*;
public class Challenge {

    public static String triangleType(double high, double mid, double low){
        if(high * high == low * low + mid * mid){
            return "right";
        }
        else if(high * high > low * low + mid * mid){
            return "obtuse";
        }
        else {
            return "acute";
        }
    }

    public static boolean validTriangle(double high, double mid, double low){
        if(high >= mid + low){
            return false;
        }
        return true;
    }

    public static void main(String [] args){
        Scanner input = new Scanner(System.in);
        System.out.print("Triangle Label (ex: ABC)? ");
        String triangle = input.nextLine();
        System.out.print("Side 1? ");
        double side1 = input.nextDouble();
        if(side1 <= 0){
            System.out.println("Invalid Side Length. Re-enter Side 1:");
            side1 = input.nextDouble();
        }

        System.out.print("Side 2? ");
        double side2 = input.nextDouble();
        if(side2 <= 0){
            System.out.println("Invalid Side Length. Re-enter Side 2:");
            side2 = input.nextDouble();
        }

        System.out.print("Side 3? ");
        double side3 = input.nextDouble();
        if(side3 <= 0){
            System.out.println("Invalid Side Length. Re-enter Side 3:");
            side3 = input.nextDouble();
        }

        double high = Math.max(Math.max(side1, side2), side3);
        double low = Math.min(Math.min(side1, side2), side3);
        double mid = side1 + side2 + side3 - high - low;
        
        if(validTriangle(high, mid, low)){
            System.out.println("The triangle is not valid.");
            
        }

        String typeOfTriangle = triangleType(high, mid, low);
        System.out.println("Triangle " + triangle + " is " + typeOfTriangle);       

        input.close();
    }
}