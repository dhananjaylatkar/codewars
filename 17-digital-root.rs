fn main() {
    println!("{}", digital_root(16));
    println!("{}", digital_root(942));
    println!("{}", digital_root_better(132189));
    println!("{}", digital_root_magic(493193));
}

fn digital_root(n: i64) -> i64 {
    // println!("Current val {}", n);
    if n < 10 {
        // println!("returning {}", n);
        return n;
    }
    let mut sum: i64 = 0;
    for digit in n.to_string().chars() {
        sum += digit.to_digit(10).unwrap() as i64;
        // println!("digit = {} Sum = {}", digit, sum);
    }
    digital_root(sum)
}
fn digital_root_magic(n: i64) -> i64 {
    (n - 1) % 9 + 1
}
fn digital_root_better(n: i64) -> i64 {
    // Add digit one by one
    if n/10==0 {n} else {digital_root(n%10 + n/10)}
}