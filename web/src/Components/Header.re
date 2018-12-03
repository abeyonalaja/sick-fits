let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("Header");

let make = _childern => {
  ...component,
  render: _self =>
    <div>
      <div className="bar"> <Link href="/"> {show("Sick Fits")} </Link> </div>
      <Nav />
      <div className="sub-bar"> <p> {show("Search")} </p> </div>
      <div> {show("Cart")} </div>
    </div>,
};
