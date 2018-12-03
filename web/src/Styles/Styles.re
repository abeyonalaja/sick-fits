open Css;

let page = style([backgroundColor(white), color(black)]);
let inner =
  style([maxWidth(px(1000)), margin2(px(0), auto), padding(rem(2.)), background(Theme.red), Theme.bshadow]);
