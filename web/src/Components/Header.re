open Css;

let header =
  style([
    selector(
      "& .bar",
      [
        borderBottom(px(10), solid, Theme.black),
        display(grid),
        justifyContent(spaceBetween),
        alignItems(stretch),
        selector("@media (max-width: 1300px)", [justifyContent(center), gridTemplateColumns([fr(1.0)])]),
      ],
    ),
    selector(
      "& sub-bar",
      [display(grid), gridTemplateColumns([fr(1.0), auto]), borderBottom(px(10), solid, Theme.lightgrey)],
    ),
  ]);

let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("Header");

let make = _childern => {
  ...component,
  render: _self =>
    <div className=header>
      <div className="bar">
        <h1 className=Styles.logo> <Link href="/"> {show("Sick Fits")} </Link> </h1>
        <Nav />
      </div>
      <div className="sub-bar"> <p> {show("Search")} </p> </div>
      <div> {show("Cart")} </div>
    </div>,
};
