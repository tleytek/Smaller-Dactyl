difference () {
  union () {
    translate ([-60, -14, 9/2]) {
      rotate (a=12.999999999999998, v=[0, 0, 1]) {
        cube ([15, 13, 9], center=true);
      }
    }
  }
  union () {
    translate ([-60, -15, 11/2]) {
      rotate (a=12.999999999999998, v=[0, 0, 1]) {
        rotate (a=90.0, v=[1, 0, 0]) {
          cylinder ($fn=30, h=20, r=3, center=true);
        }
      }
    }
    translate ([-60, -15, 11/2]) {
      rotate (a=14.999999999999998, v=[0, 0, 1]) {
        cube ([10, 17, 7], center=true);
      }
    }
  }
}
