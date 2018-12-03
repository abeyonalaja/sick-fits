let show = ReasonReact.string;

let component = ReasonReact.statelessComponent("Sell");

let make = _children => {
  ...component,
  render: _self => <div> {show("Sell Page")} <Link href="/"> {show("Go To Home Page")} </Link> </div>,
};
