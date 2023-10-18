fn length_of_last_word(s: String) -> i32 {
        let spl = s.split_whitespace();
        let collection: Vec<&str> = spl.collect();
        let len:i32 = collection[collection.len()-1].len() as i32;
        return len;
    }

fn main(){
   let St = " Hello    World   ";
   println!("{}",length_of_last_word(St.to_string()));
}
