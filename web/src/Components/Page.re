open Css;

let page = style([backgroundColor(white), color(Theme.black)]);
let inner = style([maxWidth(px(1000)), margin2(~v=px(0), ~h=auto), padding(rem(2.))]);

let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("Page");

let make = children => {
  ...component,
  render: _self => <div className=page> <Header /> <div className=inner> ...children </div> </div>,
};
