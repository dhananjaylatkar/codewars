//https://www.codewars.com/kata/54b724efac3d5402db00065e/train/rust
// mod preloaded;
// use preloaded::MORSE_CODE;
// MORSE_CODE is `HashMap<String, String>`. e.g. ".-" -> "A".

fn decode_morse(encoded: &str) -> String {
    let mut v = vec![];
    let words = encoded.split("   ");
	for word in words{
		let letters = word.split(" ");
        let mut res = String::new();
		for letter in letters {
			match MORSE_CODE.get(letter) {
				Some(human) => {
                    for c in human.chars(){
                        res.push(c);
                    }
                },
				None => continue
			}
		}
        if res.trim() != ""{
            v.push(res);
		}
	}

	return v.join(" ");
}

fn main() {
	println!("{}", decode_morse(".... . -.--   .--- ..- -.. ."));
}