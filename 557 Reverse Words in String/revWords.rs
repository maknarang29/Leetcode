pub fn reverse_words(s:String ) -> String{
        let v:Vec<&str> = s.split(' ').collect();
        let mut revv:Vec<String> = Vec::new();
        for st in v.iter(){
            let a:String = st.chars().rev().collect();
            revv.push(a.to_string());
        }
        let stri: String = revv.join(" ");
        return stri;
    }

fn main(){
    let s = "Hello, How do you do?";
    println!("{}",reverse_words(s.to_string()));

}
