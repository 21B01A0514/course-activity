import java.util.*;
class Test{
             static int a=3;
             static b;
             static void method(int x)
             {
               System.out.println(x);
               System.out.println(a);
               System.out.println(b);
               }
               static{
               System.out.println(Static block is intialized);
               b=a*5;
               }
               public static void main(String[] args)
               {
                 method(46)
               }
            }

