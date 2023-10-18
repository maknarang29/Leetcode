use std::cmp;


fn LIS(nums: Vec<i32>,n:i32) -> i32{
    let mut lis = vec![1];
    for i in (1..n){
        lis[i] = 1;
        for j in (0..*i){
            if (nums[j] < nums[i]){
                lis[i] = cmp::max(lis[i],lis[j]+1);
            }
        }
    return lis.iter().max();
    }
}

fn main(){

    let num = vec![3,4,2,8,10,5,1]; 
    println!("{}",LIS(num,7));
}
