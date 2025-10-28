{
  description = "Pound text editor";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-24.05";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;
          config.allowUnfree = false;
        };
        commonLibs = with pkgs; [
          libclipboard
          xorg.libX11
          xorg.libxcb
        ];
      in {
        packages.default = pkgs.stdenv.mkDerivation {
          pname = "pound";
          version = "0.1.0";
          src = self;
          nativeBuildInputs = with pkgs; [ gcc gnumake pkg-config ];
          buildInputs = commonLibs;
          buildPhase = ''
            make
          '';
          installPhase = ''
            mkdir -p $out/bin
            cp build/pound $out/bin/pound
          '';
          doCheck = false;
        };

        devShells.default = pkgs.mkShell {
          packages = with pkgs; [ gcc gnumake pkg-config ];
          buildInputs = commonLibs ++ [ pkgs.stdenv.cc.cc.lib ];
        };
      });
}
