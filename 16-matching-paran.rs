fn main(){
    println!("{:?}", valid_braces("[][({)}]"));
}

fn valid_braces(s: &str) -> bool {
    let mut v = vec![];
    for c in s.chars() {
        // println!("{:?}", c);
        match c {
            '(' => v.push(c),
            '[' => v.push(c),
            '{' => v.push(c),
            ')' => {
                if v.last() == Some(&'(') {
                    v.pop();
                }
                else {
                    return false;
                }
            },
            ']' => {
                if v.last() == Some(&'[') {
                    v.pop();
                }
                else {
                    return false;
                }
            },
            '}' => {
                if v.last() == Some(&'{') {
                    v.pop();
                }
                else {
                    return false;
                }
            },
            _ => return false,
        }
    }
    v.is_empty()
}