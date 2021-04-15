
//MAIN
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datakaryawan;
import java.util.Scanner;
/**
 *
 * @author DKV32
 */
public class Datakaryawan {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         Scanner in =new Scanner(System.in);
         calonkaryawan c= new calonkaryawan("a","b",1,1,1,1);
         try{
             c.calonkaryawan();
         }catch(Exception e){
              System.out.println("ada kesalahan");
         }
             
    }
    
}
//CLASS
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datakaryawan;
import java.util.Scanner;
/**
 *
 * @author DKV32
 */
public class calonkaryawan {
   String nama, alamat;
   int n1,n2,n3;
   int rata;
   
   public calonkaryawan(String n, String a, int a1, int a2, int a3, int r){
      this.nama=n;
      this.alamat=a;
      this.n1=a1;
      this.n2=a2;
      this.n3=a3;
      this.rata=r;
   }
   
   public void calonkaryawan(){
       Scanner in =new Scanner(System.in);
       System.out.println("nama: ");
       nama=in.nextLine();
       System.out.println("alamat: ");
       alamat=in.nextLine();
       System.out.println("nilai test 1: ");
       n1=in.nextInt();
       System.out.println("nilai test 2: ");
       n2=in.nextInt();
       System.out.println("nilai test 3: ");
       n3=in.nextInt();
       rata=((n1+n2+n3)/3);
       System.out.println("nilai rata-rata: "+rata);
       
       
       if(rata>=70){
            System.out.println("lulus, dapat melanjutkan tes berikutnya. ");}
       else
       { System.out.println("tidak lulus. ");}
       
       
       }
   }

