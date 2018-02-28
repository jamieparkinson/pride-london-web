let component = ReasonReact.statelessComponent("Page");

module Styles = {
  open Css;
  let text =
    style([
      color(red),
      display(flexBox),
      justifyContent(center),
      alignContent(center)
    ]);
};

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className=Styles.text> (message |> ReasonReact.stringToElement) </div>
};