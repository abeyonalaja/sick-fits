open Css;

let page = style([backgroundColor(white), color(Theme.black)]);
let inner = style([maxWidth(px(1000)), margin2(~v=px(0), ~h=auto), padding(rem(2.))]);

let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("Page");
let radnika = Css.(fontFace(~fontFamily="radnika_next", ~src=[localUrl("./radnikanext-medium-webfont.woff")], ()));
Css.(
  global("html", [boxSizing(borderBox), fontSize(px(10))]),
  global("*, *:before, *after", [boxSizing(inherit_)]),
  global(
    "body",
    [padding(px(0)), margin(px(0)), fontSize(rem(1.5)), lineHeight(em(2.0)), fontFamily("radnika_next")],
  ),
);

Css.(global("a", [color(Theme.black), textDecoration(none)]));

let make = children => {
  ...component,
  render: _self => <div className=page> <Header /> <div className=inner> ...children </div> </div>,
};
