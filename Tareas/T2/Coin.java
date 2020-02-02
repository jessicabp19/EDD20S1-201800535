package beans;

public class Coin {
    private String name;
    private int quantity;
    private int position;
    final private int owners[];
    
    public Coin (String nombre, int cantidad){
        this.name=nombre;
        this.quantity=cantidad;
        this.position=0;
        this.owners=new int[10];
    }

    public String getName() {
        return name;
    }

    public int getQuantity() {
        return quantity;
    }

    public void addCoins(int cantidad) {
        this.quantity += cantidad;
    }
    
    public String transfer(int cantidad){
        this.owners[position++]=cantidad;
        this.quantity-=cantidad;
        return "\nSuccessful Transfer!\n"+
               "The new owner's ID is: " + position +
               "\n>" + cantidad + " coins will be transferred from the wallet.";
    }
    
    public String transferFrom(int id1, int id2, int cantidad){
        try{
            if(owners[id1-1]>=cantidad){
                owners[id2-1]+=cantidad;
                owners[id1-1]-=cantidad;
                return "\nSuccesful Transfer Between Owners!";
            }else{
                return "It's impossible to transfer this quantity";
            }
        }catch(Exception e){
            return "There are 1 or 2 invalid IDs";
        }
    }
    
    public void ViewOwners(){
        for(int i=0; i<owners.length;i++){
            if(owners[i]!=0){
            System.out.println("The owner with the ID " +(i+1)+" has "+owners[i]+" "+this.name);
            }
        }
    }
}
