public class sort {
  public static void main(String[] args) {
      int nums[] = { 2, 0, 2, 1, 1, 0 };
      
      int zero = 0, one = 0, two = 0;
      for(int val : nums){
          if(val == 0) zero++;
          else if(val == 1) one++;
          else two++;
      }
      for(int i=0; i<nums.length; i++){
        if (zero>0) {
          nums[i]=0;
          zero--;
        }
        else if (one>0) {
          nums[i]=1;
          one--;
        }
        else {
          nums[i]=2;
        }
      }
      for(int val : nums){
        System.out.println(val+"");
      }
  }
}
