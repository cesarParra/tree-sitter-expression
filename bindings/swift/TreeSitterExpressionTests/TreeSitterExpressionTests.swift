import XCTest
import SwiftTreeSitter
import TreeSitterExpression

final class TreeSitterExpressionTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_expression())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Expression grammar")
    }
}
