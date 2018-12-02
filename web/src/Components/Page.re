let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("Page");

let make = children => {
  ...component,
  render: _self => <div> <p> {show("This is on every page")} </p> <div> ...children </div> </div>,
};
