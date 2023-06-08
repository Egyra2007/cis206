class Mountain {
   private String name;
   private String country;
   private int elevation;
   public Mountain(String name, String country, int elevation) {
       this.name = name;
       this.country = country;
       this.elevation = elevation;
   }
   public String getName() {
       return name;
   }
   public String getCountry() {
       return country;
   }
   public int getElevation() {
       return elevation;
   }
   public void setName(String name) {
       this.name = name;
   }
   public void setCountry(String country) {
       this.country = country;
   }
   public void setElevation(int elevation) {
       this.elevation = elevation;
   }
   public double toMeters() {
       return elevation / 3.2808;
   }
}
public class Main {
   public static Mountain minElevation(Mountain[] mountains) {
       int minElevation = Integer.MAX_VALUE;
       Mountain shortestMountain = null;
       for (Mountain mountain : mountains) {
           if (mountain.getElevation() < minElevation) {
               minElevation = mountain.getElevation();
               shortestMountain = mountain;
           }
       }
       return shortestMountain;
   }
   public static void main(String[] args) {
       Mountain[] mountains = {
               new Mountain("Chimborazo", "Ecuador", 20549),
               new Mountain("Matterhorn", "Switzerland", 14692),
               new Mountain("Olympus", "Greece (Macedonia)", 9573),
               new Mountain("Everest", "Nepal", 29029),
               new Mountain("Mount Marcy - Adirondacks", "United States", 5344),
               new Mountain("Mount Mitchell - Blue Ridge", "United States", 6684),
               new Mountain("Zugspitze", "Switzerland", 9719)
       };
       Mountain shortestMountain = minElevation(mountains);
       for (Mountain mountain : mountains) {
           System.out.println("Mountain: " + mountain.getName() + " (" + mountain.getCountry() + ")");
           System.out.println("Elevation (feet): " + mountain.getElevation());
           System.out.println("Elevation (meters): " + mountain.toMeters());
           System.out.println();
       }
       System.out.println("Shortest Mountain: " + shortestMountain.getName() + " (" + shortestMountain.getCountry() + ")");
       System.out.println("Elevation (feet): " + shortestMountain.getElevation());
       System.out.println("Elevation (meters): " + shortestMountain.toMeters());
   }
}
