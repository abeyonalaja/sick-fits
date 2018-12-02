let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("NotFound");

let make = _children => {...component, render: _self => <div> {show("Route not found")} </div>};
