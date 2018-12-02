# This file is responsible for configuring your application
# and its dependencies with the aid of the Mix.Config module.
#
# This configuration file is loaded before any dependency and
# is restricted to this project.

# General application configuration
use Mix.Config

config :sick_fits,
  ecto_repos: [SickFits.Repo]

# Configures the endpoint
config :sick_fits, SickFitsWeb.Endpoint,
  url: [host: "localhost"],
  secret_key_base: "bVaYp2Fb6i0ix5vDYVOj2zBAcfG93Ajj7Q+ch7plNOBR4CZRnHp9+hQPzM1eQo6T",
  render_errors: [view: SickFitsWeb.ErrorView, accepts: ~w(json)],
  pubsub: [name: SickFits.PubSub, adapter: Phoenix.PubSub.PG2]

# Configures Elixir's Logger
config :logger, :console,
  format: "$time $metadata[$level] $message\n",
  metadata: [:request_id]

# Use Jason for JSON parsing in Phoenix
config :phoenix, :json_library, Jason

# Import environment specific config. This must remain at the bottom
# of this file so it overrides the configuration defined above.
import_config "#{Mix.env()}.exs"
