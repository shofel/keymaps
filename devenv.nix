{ pkgs, lib, config, inputs, ... }:

{
  # https://devenv.sh/packages/
  packages = [ pkgs.gnumake ];

  enterShell = ''
  '';
}
