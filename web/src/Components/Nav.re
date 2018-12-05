module Styles = {
  open Css;
  let ul =
    style([
      margin(px(0)),
      padding(px(0)),
      display(flexBox),
      justifySelf(flexEnd),
      fontSize(rem(2.0)),
      media(
        "(max-width: 1300px)",
        [
          borderTop(px(1), solid, Theme.lightgrey),
          width(`percent(100.0)),
          justifyContent(center),
          fontSize(rem(1.5)),
        ],
      ),
    ]);
  let button =
    style([
      padding2(~v=rem(1.0), ~h=rem(3.0)),
      display(flexBox),
      alignItems(center),
      position(relative),
      textTransform(uppercase),
      fontWeight(100),
      fontSize(em(1.0)),
      background(none),
      border(px(0), solid, black),
      cursor(`pointer),
      selector("@media (max-width: 700px)", [fontSize(px(10)), padding2(~v=zero, ~h=px(10))]),
      before([
        contentRule(""),
        width(px(2)),
        background(Theme.lightgrey),
        height(`percent(100.0)),
        left(zero),
        position(`absolute),
        transform(skewX(deg(-20))),
        top(zero),
        bottom(zero),
      ]),
      after([
        height(px(2)),
        background(red),
        contentRule(""),
        width(zero),
        position(absolute),
        transform(translateX(`percent(-50.0))),
        transition("width 0.4s"),
        transitionTimingFunction(cubicBesier(1.0, -0.65, 0.0, 2.31)),
        left(`percent(50.0)),
        marginTop(rem(2.0)),
      ]),
      /*hover,*/
      /*hover([outline(zero), after([width(calc([sub, percent(100), px(60)]))])]),*/
      hover([outline(zero, none, `transparent), after([width(Calc.(`percent(100.0) - px(60)))])]),
      focus([outline(zero, none, `transparent), after([width(Calc.(`percent(100.0) - px(60)))])]),
    ]);
};

let show = ReasonReact.string;

let component = ReasonReact.statelessComponent("Nav");

let make = _children => {
  ...component,
  render: _self =>
    <div className=Styles.ul>
      <Link className=Styles.button href="/sell"> {show("Item")} </Link>
      <Link className=Styles.button href="/"> {show("Home")} </Link>
      <Link className=Styles.button href="/"> {show("Signup")} </Link>
      <Link className=Styles.button href="/"> {show("Orders")} </Link>
      <Link className=Styles.button href="/"> {show("Account")} </Link>
    </div>,
};
