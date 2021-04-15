public void main() {

        // Membuat Array dan Scanner
       
        int b;
        int k;
        int angka[][]= new int ['b']['k'];
        
        Scanner input = new Scanner(System.in);

        // mengisi setiap meja
        System.out.print("masukan baris yang anda inginkan");
        b=input.nextInt();
        System.out.print("masukan kol yang anda inginkan");
        k=input.nextInt();
            for(int i= 0; i < b;i++){
                for(int s=0;s<k;i++){
          System.out.print("bilangan ke: {"+(i+1)+"}{"+(s+1)+"} =");
          angka[i][s]=input.nextInt();
                }
            }
         for(int i= 0; i < b;i++){
                for(int s=0;s<k;i++){
                    System.out.print(angka[i][s]+" ");
                }
         }

  }
}