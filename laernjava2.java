public enum laernjava2 {
    
//main
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mahasiswa;
import java.util.Scanner;
public class mahasiswa {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       Scanner in =new Scanner(System.in);
       datamahasiswa c= new datamahasiswa(1,1);
       c.DataMahasiswa();
    }
      // TODO code application logic here
    }
    

//class

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mahasiswa;
import java.util.ArrayList;
import java.util.Scanner;
/**
 *
 * @author Leonardo C
 */
public class datamahasiswa {
    int i,jml;
    public datamahasiswa(int b, int j){
        this.i=b;
        this.jml=j;
    }
    public void DataMahasiswa(){
    Scanner input = new Scanner(System.in);
    
    int i,jml;
    
    System.out.println("Jumlah Mahasiswa : ");
    jml = input.nextInt();
    int[] uts = new int[3];
    int[] uas = new int[3];
    int[] nim = new int[3];
    String[] nama = new String[3];
    String[] alamat = new String[3];
    
    //Input Data
    for(i=0;i<jml;i++)
    {  System.out.format("NIM : ", i);
       nim[i] = input.nextInt(); 
       System.out.format("Nama : ", i);
       nama[i] = input.next(); 
       System.out.format("Alamat : ", i);
       alamat[i] = input.next();
       System.out.format("uts : ", i);
       uts[i] = input.nextInt();
       System.out.format("uas : ", i);
       uas[i] = input.nextInt();
    }
    //Output Data
    System.out.println("---------------------------");
    System.out.print("NIM \t \t");
    System.out.print("Nama \t \t");
    System.out.print("Alamat \t \t \t");
    System.out.print("UTS \t");
    System.out.println("UAS \t");
    for(i=0;i<jml;i++)
    {   System.out.print(nim[i]+"\t");
        System.out.print(nama[i]+"\t");
        System.out.print(alamat[i]+"\t");
        System.out.print(uts[i]+"\t");
        System.out.println(uas[i]+"\t");
    }
 
    }
    
}

}
