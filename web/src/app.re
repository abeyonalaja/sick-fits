[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo: string = "./logo.svg";

type route =
  | Home
  | Sell
  | NotFound;

type state = {route};

type action =
  | ChangeRoute(route);

let reducer = (action, _state) =>
  switch (action) {
  | ChangeRoute(route) => ReasonReact.Update({route: route})
  };

let mapUrlToRoute = (url: ReasonReact.Router.url) =>
  switch (url.path) {
  | [] => Home
  | ["sell"] => Sell
  | _ => NotFound
  };

let component = ReasonReact.reducerComponent("App");
let make = _children => {
  ...component,
  reducer,
  initialState: () => {route: ReasonReact.Router.dangerouslyGetInitialUrl() |> mapUrlToRoute},
  didMount: self => {
    let watchid = ReasonReact.Router.watchUrl(url => self.send(ChangeRoute(url |> mapUrlToRoute)));
    self.onUnmount(() => ReasonReact.Router.unwatchUrl(watchid));
  },

  render: ({state}) =>
    <div className="conatiner">
      <Page>
        {
          switch (state.route) {
          | Home => <Home />
          | Sell => <Sell />
          | NotFound => <NotFound />
          }
        }
      </Page>
    </div>,
};
