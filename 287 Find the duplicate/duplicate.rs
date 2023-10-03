


fn main(){
    let mut vect:Vec<i32> = vec![3,1,3,4,2];
    println!("{}",duplicate(vect));
}


fn duplicate(num:Vec<i32>) -> i32{
    let mut vec = num.clone();
    vec.sort();
    let length:i32 = vec.len() as i32;
    if length>2{
        for i in &vec[0..3]{
                if vec[i] == vec[i+1] {
                    return vec[i] as i32;
                }
        }
    }
    return 0;
}