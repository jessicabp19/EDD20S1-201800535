package main;
import beans.Coin;

public class MainTarea2 {
    public static void main(String[] args){
        Coin myCoin = new Coin("Quetzal/Quetzales", 100);
        System.out.println("Coin's Name: "+myCoin.getName());
        System.out.println("Coin's Quantity: "+myCoin.getQuantity());
        
        //From wallet
        System.out.println(myCoin.transfer(25));
        System.out.println(myCoin.transfer(25));
        
        //Between Owners
        System.out.println(myCoin.transferFrom(1,2,5));
        
        myCoin.ViewOwners();
        
        System.out.println("\nCoin's Quantity: "+myCoin.getQuantity());//50
        
        //From bank
        myCoin.addCoins(50);
        System.out.println("\nCoin's Quantity: "+myCoin.getQuantity());//100
    }
}
