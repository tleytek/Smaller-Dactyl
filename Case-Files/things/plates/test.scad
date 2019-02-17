difference () {
  union () {
    translate ([-39.70953167499939, 31.661440427991682, 2]) {
      cube ([9.9, 12, 4], center=true);
    }
  }
  union () {
    translate ([-39.70953167499939, 37.66144042799168, 5]) {
      rotate (a=90.0, v=[1, 0, 0]) {
        cylinder ($fn=30, h=20, r=2.7, center=true);
      }
    }
    translate ([-39.70953167499939, 30.661440427991682, 5]) {
      cube ([10, 11, 6], center=true);
    }
  }
}
