use std::cmp;


fn LIS(nums: Vec<i32>) -> i32{
    let n = nums.len();
    let mut lis = vec![1;n];
    for i in 1..n{
        for j in 0..i{
            if nums[j] < nums[i]{
                lis[i] = cmp::max(lis[i],lis[j]+1);
            }
        }
    }
    let mx:i32 = *lis.iter().max().unwrap() as i32; 
    return mx;
    
}

fn main(){

    let num = vec![3,4,2,8,10,5,1]; 
    let ls  = LIS(num);
    println!("{}",ls);
}
