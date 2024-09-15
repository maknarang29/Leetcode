fn main() {
    let mut vec = vec![3, 2, 2, 3, 2];

    vec.retain(|&x| x != 3);

    println!("Updated vector: {:?}", vec);
}

