let show = ReasonReact.string;
let component = ReasonReact.statelessComponent("Page");

let make = children => {
  ...component,
  render: _self => <div className=Styles.page> <Header /> <div className=Styles.inner> ...children </div> </div>,
};
