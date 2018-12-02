defmodule SickFits.Repo do
  use Ecto.Repo,
    otp_app: :sick_fits,
    adapter: Ecto.Adapters.Postgres
end
