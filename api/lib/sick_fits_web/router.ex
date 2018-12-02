defmodule SickFitsWeb.Router do
  use SickFitsWeb, :router

  pipeline :api do
    plug :accepts, ["json"]
  end

  scope "/api", SickFitsWeb do
    pipe_through :api
  end
end
