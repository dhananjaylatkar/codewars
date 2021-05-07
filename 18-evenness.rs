fn main() {
    println!("{}", iq_test("2 4 7 8 10"));
    println!("{}", iq_test("1 2 2"));
}

fn iq_test(numbers: &str) -> u64 {
    let vec: Vec<u64> = numbers.split(' ')
                               .map(|x| x.parse().unwrap())
                               .collect();
    let mut odd_count = 0;
    let mut eve_count = 0;
    for i in 0..3 {
        if vec[i] % 2 == 0 {
            eve_count += 1;
        }else {
            odd_count += 1;
        }
    }
    let mut se = 1; // default search for odd number
    if odd_count > eve_count {
        se = 0; // Search for even number
    }
    for i in 0..vec.len() {
        if vec[i] % 2 == se {
            return (i as u64) + 1;
        }
    }
    1
}