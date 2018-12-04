open Css;

let logo =
  style([
    fontSize(rem(4.0)),
    marginLeft(rem(2.0)),
    position(relative),
    zIndex(2),
    transform(skewX(deg(-7))),
    selector(
      "& > a",
      [padding(rem(0.5)), background(Theme.red), color(white), textTransform(uppercase), textDecoration(none)],
    ),
    selector("@media (max-width: 1300px)", [margin(px(0)), textAlign(center)]),
  ]);
