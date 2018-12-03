let show = ReasonReact.string;

let component = ReasonReact.statelessComponent("Home");

let make = _children => {...component, render: _self => <div> {show("Home page ")} </div>};
