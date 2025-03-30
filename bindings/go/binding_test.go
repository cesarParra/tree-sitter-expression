package tree_sitter_expression_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_expression "github.com/cesarparra/expression/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_expression.Language())
	if language == nil {
		t.Errorf("Error loading Expression grammar")
	}
}
