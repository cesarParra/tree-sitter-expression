// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterExpression",
    products: [
        .library(name: "TreeSitterExpression", targets: ["TreeSitterExpression"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterExpression",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterExpressionTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterExpression",
            ],
            path: "bindings/swift/TreeSitterExpressionTests"
        )
    ],
    cLanguageStandard: .c11
)
