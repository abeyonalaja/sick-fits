let show = ReasonReact.string;

let component = ReasonReact.statelessComponent("Nav");

let make = _children => {
  ...component,
  render: _self => <div> <Link href="/sell"> {show("Sell")} </Link> <Link href="/"> {show("Home")} </Link> </div>,
};
