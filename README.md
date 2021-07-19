# Smaller-Dactyl

This is a fork of the [Dactyl-Manuform-Mini](https://github.com/l4u/dactyl-manuform-mini-keyboard). The Dactyl-ManuForm-Mini is a fork of the [Dactyl-Manuform](https://github.com/tshort/dactyl-keyboard). The Dactyl-Manuform is a fork of the [Dactyl](https://github.com/adereth/dactyl-keyboard) with the thumb cluster from [ManuForm](https://github.com/jeffgran/ManuForm).

![Dactyl variant](/Case-Files/Smaller_Dactyl_Image.jpg)

## Info/The Why

So I built a dactyl manuform and dactyl-manuform mini before I built a Dactyl. The problems I had with the manuform variants were the thumb cluster locations. The manuform had a downward/convex curve to its thumb cluster, where as the dactyl is a concave thumb cluster curve. So I built a Dactyl and loved the thumb cluster placement alot more, but the finger columns were not inline with my fingers, so my fingers weren't sitting on my home row keys when neutral like they were on the manuform variants. Modifiying the column placements was really hard for me on the Dactyl source code because the case would break when moving the column coordinates, leaving holes and weird artifacts. As someone with no OpenSCAD or Clojure experience, the dactyl-manuform was much easier to understand and modify than the Dactyl. So I tried to make the dactyl-manuform into a dactyl by taking the thumb cluster from [Matt Adereth's](https://github.com/adereth/) source code. What I like about the dactyl-manuform variant l4u made is that its closer to the ground, has better I/O made, and it still has tshorts easy to use column adjustments that won't break the case like the original dactyls code. Since I haven't got around to wiring up a dactyl, I have been using the next closest thing, or I should say the origin, the kinesis advantage with the stapelberg mod for added qmk functionality.

## Features created by [l4u](https://github.com/l4u/dactyl-manuform-mini-keyboard)

- The use of sidenubs can be disabled. Sidenub should be disabled if you use Kailh, and Outemu. If you use Cherry MX, Gateron or Zealios switches, you can enable the sidenubs.
- Spaces for rentention tabs are added.
- One key in the thumb cluster has been removed. Other thumb keys are also adjusted.
- The total height is reduced and wire posts are removed. This results in a
  higher printing speed and a lower cost.
- A TRRS mount instead of a RJ9 mount is used.
- A micro USB mount is used. A breakout board, or an extension cable can be used.
- Screw posts are moved inside. The holes are designed for TRISERT® thread inserts 145m3.
- The pro micro holder has been modified. Dupont cables can be used.

## Getting Started

If you'd like to challenge yourself and make one of these then head over to the [Case Files](https://github.com/tleytek/Smaller-Dactyl/tree/master/Case%20Files)

## License

Copyright © 2015-2018 Matthew Adereth, Tom Short and Leo Lou

The source code for generating the models is distributed under the [GNU AFFERO GENERAL PUBLIC LICENSE Version 3](LICENSE).

The generated models are distributed under the [Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)](LICENSE-models).
