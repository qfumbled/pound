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
        poundPkg = pkgs.callPackage ./pkgs/pound { src = self; };
        toolchain = with pkgs; [ gcc gnumake pkg-config ];
      in {
        packages.default = poundPkg;

        devShells.default = pkgs.mkShell {
          packages = toolchain;
          buildInputs = toolchain ++ poundPkg.buildInputs or [];
        };
      });
}
