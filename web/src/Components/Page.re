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
  render: _self => <div className=Styles.page> <Header /> <div className=Styles.inner> ...children </div> </div>,
};
