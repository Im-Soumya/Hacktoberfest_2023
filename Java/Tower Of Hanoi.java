class Hanoi {
    public long toh(int N, int from, int to, int aux) {
        int count = 1;
      if(N == 1){
            System.out.println("Move disk 1 from rod "+ from + " to rod "+ to);
            return 1;
        }
        
        count += toh(N-1, from , aux, to);
        System.out.println("move disk "+N+" from rod "+from+" to rod "+ to);
        count += toh(N-1, aux, to, from);
        
        return  count;
    }   
}
