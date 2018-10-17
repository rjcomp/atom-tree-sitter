#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 72
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_comments = 1,
  anon_sym_POUND_LTui_metadata_GT = 2,
  anon_sym_POUND_LT_SLASHui_metadata_GT = 3,
  anon_sym_POUND_LTspec_GT = 4,
  anon_sym_POUND_LT_SLASHspec_GT = 5,
  anon_sym_POUND_LTvariables_GT = 6,
  anon_sym_POUND_LT_SLASHvariables_GT = 7,
  anon_sym_POUND_LTvariable_GT = 8,
  anon_sym_POUND_LT_SLASHvariable_GT = 9,
  aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH = 10,
  anon_sym_LT_SLASHcheck_type_GT = 11,
  aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH = 12,
  anon_sym_LT_SLASHgroup_policy_GT = 13,
  anon_sym_LTcustom_item_GT = 14,
  anon_sym_LT_SLASHcustom_item_GT = 15,
  anon_sym_LTitem_GT = 16,
  anon_sym_LT_SLASHitem_GT = 17,
  aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH = 18,
  anon_sym_LT_SLASHreport_GT = 19,
  anon_sym_LTif_GT = 20,
  anon_sym_LT_SLASHif_GT = 21,
  aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH = 22,
  anon_sym_LT_SLASHcondition_GT = 23,
  anon_sym_LTthen_GT = 24,
  anon_sym_LT_SLASHthen_GT = 25,
  anon_sym_LTelse_GT = 26,
  anon_sym_LT_SLASHelse_GT = 27,
  sym_meta_displayname = 28,
  sym_meta_labels = 29,
  sym_meta_refs = 30,
  sym_spec_type = 31,
  sym_spec_name = 32,
  sym_spec_version = 33,
  sym_spec_link = 34,
  sym_variable_name = 35,
  sym_variable_default = 36,
  sym_variable_description = 37,
  sym_variable_info = 38,
  sym_variable_optional = 39,
  sym_check_string_element = 40,
  sym_check_nonstring_element = 41,
  sym_check_empty_element = 42,
  sym_audit = 43,
  sym__statement = 44,
  sym_ui_metadata = 45,
  sym_spec_block = 46,
  sym_variable_block = 47,
  sym_variable_instance = 48,
  sym_check_type = 49,
  sym_group_policy = 50,
  sym_custom_item = 51,
  sym_builtin_item = 52,
  sym_rept_item = 53,
  sym_if_block = 54,
  sym_condition_block = 55,
  sym_then_block = 56,
  sym_else_block = 57,
  aux_sym_audit_repeat1 = 58,
  aux_sym_ui_metadata_repeat1 = 59,
  aux_sym_spec_block_repeat1 = 60,
  aux_sym_variable_block_repeat1 = 61,
  aux_sym_variable_instance_repeat1 = 62,
  aux_sym_check_type_repeat1 = 63,
  aux_sym_custom_item_repeat1 = 64,
  aux_sym_rept_item_repeat1 = 65,
  aux_sym_condition_block_repeat1 = 66,
  aux_sym_then_block_repeat1 = 67,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_comments] = "comments",
  [anon_sym_POUND_LTui_metadata_GT] = "#<ui_metadata>",
  [anon_sym_POUND_LT_SLASHui_metadata_GT] = "#</ui_metadata>",
  [anon_sym_POUND_LTspec_GT] = "#<spec>",
  [anon_sym_POUND_LT_SLASHspec_GT] = "#</spec>",
  [anon_sym_POUND_LTvariables_GT] = "#<variables>",
  [anon_sym_POUND_LT_SLASHvariables_GT] = "#</variables>",
  [anon_sym_POUND_LTvariable_GT] = "#<variable>",
  [anon_sym_POUND_LT_SLASHvariable_GT] = "#</variable>",
  [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = "/<check_type:[^>]+>/",
  [anon_sym_LT_SLASHcheck_type_GT] = "</check_type>",
  [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = "/<group_policy:[^>]+>/",
  [anon_sym_LT_SLASHgroup_policy_GT] = "</group_policy>",
  [anon_sym_LTcustom_item_GT] = "<custom_item>",
  [anon_sym_LT_SLASHcustom_item_GT] = "</custom_item>",
  [anon_sym_LTitem_GT] = "<item>",
  [anon_sym_LT_SLASHitem_GT] = "</item>",
  [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = "/<report type:\"(PASSED|FAILED|WARNING)\">/",
  [anon_sym_LT_SLASHreport_GT] = "</report>",
  [anon_sym_LTif_GT] = "<if>",
  [anon_sym_LT_SLASHif_GT] = "</if>",
  [aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH] = "/<condition type:\"(AND|OR)\">/",
  [anon_sym_LT_SLASHcondition_GT] = "</condition>",
  [anon_sym_LTthen_GT] = "<then>",
  [anon_sym_LT_SLASHthen_GT] = "</then>",
  [anon_sym_LTelse_GT] = "<else>",
  [anon_sym_LT_SLASHelse_GT] = "</else>",
  [sym_meta_displayname] = "meta_displayname",
  [sym_meta_labels] = "meta_labels",
  [sym_meta_refs] = "meta_refs",
  [sym_spec_type] = "spec_type",
  [sym_spec_name] = "spec_name",
  [sym_spec_version] = "spec_version",
  [sym_spec_link] = "spec_link",
  [sym_variable_name] = "variable_name",
  [sym_variable_default] = "variable_default",
  [sym_variable_description] = "variable_description",
  [sym_variable_info] = "variable_info",
  [sym_variable_optional] = "variable_optional",
  [sym_check_string_element] = "check_string_element",
  [sym_check_nonstring_element] = "check_nonstring_element",
  [sym_check_empty_element] = "check_empty_element",
  [sym_audit] = "audit",
  [sym__statement] = "_statement",
  [sym_ui_metadata] = "ui_metadata",
  [sym_spec_block] = "spec_block",
  [sym_variable_block] = "variable_block",
  [sym_variable_instance] = "variable_instance",
  [sym_check_type] = "check_type",
  [sym_group_policy] = "group_policy",
  [sym_custom_item] = "custom_item",
  [sym_builtin_item] = "builtin_item",
  [sym_rept_item] = "rept_item",
  [sym_if_block] = "if_block",
  [sym_condition_block] = "condition_block",
  [sym_then_block] = "then_block",
  [sym_else_block] = "else_block",
  [aux_sym_audit_repeat1] = "audit_repeat1",
  [aux_sym_ui_metadata_repeat1] = "ui_metadata_repeat1",
  [aux_sym_spec_block_repeat1] = "spec_block_repeat1",
  [aux_sym_variable_block_repeat1] = "variable_block_repeat1",
  [aux_sym_variable_instance_repeat1] = "variable_instance_repeat1",
  [aux_sym_check_type_repeat1] = "check_type_repeat1",
  [aux_sym_custom_item_repeat1] = "custom_item_repeat1",
  [aux_sym_rept_item_repeat1] = "rept_item_repeat1",
  [aux_sym_condition_block_repeat1] = "condition_block_repeat1",
  [aux_sym_then_block_repeat1] = "then_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comments] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_LTui_metadata_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_SLASHui_metadata_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LTspec_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_SLASHspec_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LTvariables_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_SLASHvariables_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LTvariable_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LT_SLASHvariable_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHcheck_type_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHgroup_policy_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTcustom_item_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHcustom_item_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTitem_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHitem_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHreport_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTif_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHif_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHcondition_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTthen_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHthen_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTelse_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHelse_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_meta_displayname] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_labels] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_refs] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_type] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_name] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_version] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_link] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_default] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_description] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_info] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_check_string_element] = {
    .visible = true,
    .named = true,
  },
  [sym_check_nonstring_element] = {
    .visible = true,
    .named = true,
  },
  [sym_check_empty_element] = {
    .visible = true,
    .named = true,
  },
  [sym_audit] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_ui_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_spec_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_instance] = {
    .visible = true,
    .named = true,
  },
  [sym_check_type] = {
    .visible = true,
    .named = true,
  },
  [sym_group_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_item] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_item] = {
    .visible = true,
    .named = true,
  },
  [sym_rept_item] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_block] = {
    .visible = true,
    .named = true,
  },
  [sym_then_block] = {
    .visible = true,
    .named = true,
  },
  [sym_else_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_audit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ui_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_spec_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_instance_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_check_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rept_item_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_condition_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_then_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 3:
      if (lookahead == ' ')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == ' ')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(7);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == 'l')
        ADVANCE(8);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 't')
        ADVANCE(34);
      if (lookahead == 'v')
        ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'i')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'k')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '>')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == 'l')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == 'i')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == 'n')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == 'k')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_spec_link);
      if (lookahead == '<')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'a')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'm')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'e')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == '>')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == 'n')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == 'a')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == 'm')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 31:
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == 'e')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead == '>')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_spec_name);
      if (lookahead == '<')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'y')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'p')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '>')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '/')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead == 't')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead == 'y')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead == 'p')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead == 'e')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_spec_type);
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 's')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'i')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'o')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '>')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '/')
        ADVANCE(57);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 57:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 'v')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 'e')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 59:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 's')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 'i')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 'o')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 63:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '<')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == '/')
        ADVANCE(67);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(129);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'l')
        ADVANCE(214);
      if (lookahead == 'n')
        ADVANCE(231);
      if (lookahead == 'o')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(255);
      if (lookahead == 't')
        ADVANCE(34);
      if (lookahead == 'u')
        ADVANCE(260);
      if (lookahead == 'v')
        ADVANCE(272);
      END_STATE();
    case 67:
      if (lookahead == 's')
        ADVANCE(68);
      if (lookahead == 'u')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'p')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'e')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'c')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '>')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHspec_GT);
      END_STATE();
    case 73:
      if (lookahead == 'i')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '_')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'm')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == 'e')
        ADVANCE(77);
      END_STATE();
    case 77:
      if (lookahead == 't')
        ADVANCE(78);
      END_STATE();
    case 78:
      if (lookahead == 'a')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'd')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'a')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 't')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'a')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '>')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHui_metadata_GT);
      END_STATE();
    case 85:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'r')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'i')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'a')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'b')
        ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'l')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'e')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '>')
        ADVANCE(93);
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHvariable_GT);
      END_STATE();
    case 94:
      if (lookahead == '>')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHvariables_GT);
      END_STATE();
    case 96:
      if (lookahead == 'e')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'c')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'h')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'm')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'a')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'k')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == '_')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'r')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'e')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'f')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 's')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == '>')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == '/')
        ADVANCE(113);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 113:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'b')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 114:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 115:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'n')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 116:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'c')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 117:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'h')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'm')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 119:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'a')
        ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'r')
        ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 121:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'k')
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 122:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '_')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'r')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 124:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 125:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 'f')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 126:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == 's')
        ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead == '>')
        ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_meta_refs);
      if (lookahead == '<')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'e')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(173);
      END_STATE();
    case 130:
      if (lookahead == 'f')
        ADVANCE(131);
      if (lookahead == 's')
        ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'a')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'u')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'l')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 't')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == '>')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 138:
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 139:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 'd')
        ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 140:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 'e')
        ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 'f')
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 142:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 'a')
        ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 143:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 'u')
        ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 'l')
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 145:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == 't')
        ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 146:
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead == '>')
        ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_variable_default);
      if (lookahead == '<')
        ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(137);
      END_STATE();
    case 148:
      if (lookahead == 'c')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'r')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'i')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'p')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 't')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'i')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'o')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'n')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == '>')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '/')
        ADVANCE(160);
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 160:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'd')
        ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 161:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 's')
        ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 163:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 164:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 165:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'i')
        ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 166:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 167:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 't')
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 168:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'i')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 169:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'o')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 170:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == 'n')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 171:
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead == '>')
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_variable_description);
      if (lookahead == '<')
        ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(158);
      END_STATE();
    case 173:
      if (lookahead == 's')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'p')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'l')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'a')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'y')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == '_')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'n')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'a')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'm')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'e')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == '>')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 186:
      if (lookahead == '/')
        ADVANCE(187);
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 187:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'd')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 188:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'i')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 189:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 190:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'p')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 191:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'l')
        ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 192:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'a')
        ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 193:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'y')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 194:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == '_')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 195:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'n')
        ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 196:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'a')
        ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 197:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'm')
        ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 198:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == 'e')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 199:
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead == '>')
        ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_meta_displayname);
      if (lookahead == '<')
        ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 201:
      if (lookahead == 'n')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'f')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'o')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == '>')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 207:
      if (lookahead == '/')
        ADVANCE(208);
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 208:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead == 'i')
        ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 209:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead == 'n')
        ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 210:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead == 'f')
        ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 211:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead == 'o')
        ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 212:
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead == '>')
        ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_info);
      if (lookahead == '<')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 214:
      if (lookahead == 'a')
        ADVANCE(215);
      if (lookahead == 'i')
        ADVANCE(9);
      END_STATE();
    case 215:
      if (lookahead == 'b')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'e')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'l')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 's')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == '>')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 222:
      if (lookahead == '/')
        ADVANCE(223);
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 223:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == 'l')
        ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 224:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == 'a')
        ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 225:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == 'b')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 226:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 227:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == 'l')
        ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 228:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == 's')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 229:
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead == '>')
        ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_meta_labels);
      if (lookahead == '<')
        ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 231:
      if (lookahead == 'a')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == 'm')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'e')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == '>')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 237:
      if (lookahead == '/')
        ADVANCE(238);
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 238:
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead == 'n')
        ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 239:
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 240:
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 241:
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead == 'e')
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 242:
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead == '>')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_spec_name);
      if (lookahead == '<')
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(236);
      END_STATE();
    case 244:
      if (lookahead == 'p')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 't')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'i')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'o')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'n')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 'a')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'l')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == ' ')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == '/')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == '>')
        ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_optional);
      END_STATE();
    case 255:
      if (lookahead == 'p')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'e')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'c')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == '>')
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_POUND_LTspec_GT);
      END_STATE();
    case 260:
      if (lookahead == 'i')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == '_')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'm')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'e')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 't')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'a')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'd')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'a')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 't')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'a')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == '>')
        ADVANCE(271);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_POUND_LTui_metadata_GT);
      END_STATE();
    case 272:
      if (lookahead == 'a')
        ADVANCE(273);
      if (lookahead == 'e')
        ADVANCE(48);
      END_STATE();
    case 273:
      if (lookahead == 'r')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'i')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'a')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'b')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'l')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'e')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == '>')
        ADVANCE(280);
      if (lookahead == 's')
        ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_POUND_LTvariable_GT);
      END_STATE();
    case 281:
      if (lookahead == '>')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_POUND_LTvariables_GT);
      END_STATE();
    case 283:
      if (lookahead == '/')
        ADVANCE(284);
      if (lookahead == 'c')
        ADVANCE(353);
      if (lookahead == 'e')
        ADVANCE(398);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 284:
      if (lookahead == 'c')
        ADVANCE(285);
      if (lookahead == 'e')
        ADVANCE(316);
      if (lookahead == 'g')
        ADVANCE(321);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead == 'r')
        ADVANCE(341);
      if (lookahead == 't')
        ADVANCE(348);
      END_STATE();
    case 285:
      if (lookahead == 'h')
        ADVANCE(286);
      if (lookahead == 'o')
        ADVANCE(296);
      if (lookahead == 'u')
        ADVANCE(305);
      END_STATE();
    case 286:
      if (lookahead == 'e')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'c')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'k')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == '_')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 't')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'y')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'p')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'e')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == '>')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcheck_type_GT);
      END_STATE();
    case 296:
      if (lookahead == 'n')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'd')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'i')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 't')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'i')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'o')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 'n')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == '>')
        ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcondition_GT);
      END_STATE();
    case 305:
      if (lookahead == 's')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'o')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'm')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == '_')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'i')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 't')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 'e')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'm')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == '>')
        ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcustom_item_GT);
      END_STATE();
    case 316:
      if (lookahead == 'l')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 's')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 'e')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == '>')
        ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 321:
      if (lookahead == 'r')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'o')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'u')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'p')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == '_')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'p')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'o')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'l')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'i')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'c')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'y')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == '>')
        ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LT_SLASHgroup_policy_GT);
      END_STATE();
    case 334:
      if (lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 't')
        ADVANCE(337);
      END_STATE();
    case 335:
      if (lookahead == '>')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LT_SLASHif_GT);
      END_STATE();
    case 337:
      if (lookahead == 'e')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'm')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == '>')
        ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LT_SLASHitem_GT);
      END_STATE();
    case 341:
      if (lookahead == 'e')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'p')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'o')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'r')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 't')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == '>')
        ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_LT_SLASHreport_GT);
      END_STATE();
    case 348:
      if (lookahead == 'h')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'e')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'n')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == '>')
        ADVANCE(352);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 353:
      if (lookahead == 'h')
        ADVANCE(354);
      if (lookahead == 'o')
        ADVANCE(366);
      if (lookahead == 'u')
        ADVANCE(387);
      END_STATE();
    case 354:
      if (lookahead == 'e')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 'c')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'k')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == '_')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 't')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'y')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 'p')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'e')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == ':')
        ADVANCE(363);
      END_STATE();
    case 363:
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(364);
      END_STATE();
    case 364:
      if (lookahead == '>')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH);
      END_STATE();
    case 366:
      if (lookahead == 'n')
        ADVANCE(367);
      END_STATE();
    case 367:
      if (lookahead == 'd')
        ADVANCE(368);
      END_STATE();
    case 368:
      if (lookahead == 'i')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 't')
        ADVANCE(370);
      END_STATE();
    case 370:
      if (lookahead == 'i')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'o')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'n')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == ' ')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 't')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == 'y')
        ADVANCE(376);
      END_STATE();
    case 376:
      if (lookahead == 'p')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'e')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == ':')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == '\"')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'A')
        ADVANCE(381);
      if (lookahead == 'O')
        ADVANCE(386);
      END_STATE();
    case 381:
      if (lookahead == 'N')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'D')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == '\"')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == '>')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH);
      END_STATE();
    case 386:
      if (lookahead == 'R')
        ADVANCE(383);
      END_STATE();
    case 387:
      if (lookahead == 's')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 't')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'o')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'm')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == '_')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'i')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 't')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'e')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 'm')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == '>')
        ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LTcustom_item_GT);
      END_STATE();
    case 398:
      if (lookahead == 'l')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 's')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 'e')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == '>')
        ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 403:
      if (lookahead == 'r')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'o')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'u')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'p')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == '_')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'p')
        ADVANCE(409);
      END_STATE();
    case 409:
      if (lookahead == 'o')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'l')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'i')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'c')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'y')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == ':')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == '>')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(416);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH);
      END_STATE();
    case 418:
      if (lookahead == 'f')
        ADVANCE(419);
      if (lookahead == 't')
        ADVANCE(421);
      END_STATE();
    case 419:
      if (lookahead == '>')
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_LTif_GT);
      END_STATE();
    case 421:
      if (lookahead == 'e')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'm')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == '>')
        ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LTitem_GT);
      END_STATE();
    case 425:
      if (lookahead == 'e')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'p')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'o')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'r')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 't')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == ' ')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 't')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'y')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'p')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'e')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == ':')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == '\"')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'F')
        ADVANCE(438);
      if (lookahead == 'P')
        ADVANCE(446);
      if (lookahead == 'W')
        ADVANCE(449);
      END_STATE();
    case 438:
      if (lookahead == 'A')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'I')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'L')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'E')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'D')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == '\"')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == '>')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH);
      END_STATE();
    case 446:
      if (lookahead == 'A')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'S')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'S')
        ADVANCE(441);
      END_STATE();
    case 449:
      if (lookahead == 'A')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'R')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'N')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'I')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'N')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'G')
        ADVANCE(443);
      END_STATE();
    case 455:
      if (lookahead == 'h')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'e')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'n')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == '>')
        ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 460:
      if (lookahead == ' ')
        ADVANCE(461);
      if (lookahead == ':')
        ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 461:
      if (lookahead == ' ')
        ADVANCE(461);
      if (lookahead == ':')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == ' ')
        ADVANCE(462);
      if (lookahead == '\"')
        ADVANCE(463);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(467);
      END_STATE();
    case 463:
      if (lookahead == '\"')
        ADVANCE(464);
      if (lookahead != 0)
        ADVANCE(465);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_check_empty_element);
      END_STATE();
    case 465:
      if (lookahead == '\"')
        ADVANCE(466);
      if (lookahead != 0)
        ADVANCE(465);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_check_string_element);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_check_nonstring_element);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(467);
      END_STATE();
    case 468:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(469);
      if (lookahead == '#')
        ADVANCE(470);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 469:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(469);
      if (lookahead == '#')
        ADVANCE(470);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 470:
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '<')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(6);
      END_STATE();
    case 471:
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == 'l')
        ADVANCE(473);
      if (lookahead == 's')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(260);
      if (lookahead == 'v')
        ADVANCE(474);
      END_STATE();
    case 472:
      if (lookahead == 'i')
        ADVANCE(173);
      END_STATE();
    case 473:
      if (lookahead == 'a')
        ADVANCE(215);
      END_STATE();
    case 474:
      if (lookahead == 'a')
        ADVANCE(273);
      END_STATE();
    case 475:
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 476:
      if (lookahead == 'h')
        ADVANCE(354);
      if (lookahead == 'u')
        ADVANCE(387);
      END_STATE();
    case 477:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(478);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 478:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(478);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 479:
      if (lookahead == '<')
        ADVANCE(471);
      END_STATE();
    case 480:
      if (lookahead == '#')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(480);
      END_STATE();
    case 481:
      if (lookahead == '<')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == '/')
        ADVANCE(483);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == 'l')
        ADVANCE(473);
      if (lookahead == 's')
        ADVANCE(255);
      if (lookahead == 'v')
        ADVANCE(484);
      END_STATE();
    case 483:
      if (lookahead == 'u')
        ADVANCE(73);
      END_STATE();
    case 484:
      if (lookahead == 'a')
        ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'r')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'i')
        ADVANCE(487);
      END_STATE();
    case 487:
      if (lookahead == 'a')
        ADVANCE(488);
      END_STATE();
    case 488:
      if (lookahead == 'b')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'l')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'e')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 's')
        ADVANCE(281);
      END_STATE();
    case 492:
      if (lookahead == '#')
        ADVANCE(493);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(492);
      END_STATE();
    case 493:
      if (lookahead == ' ')
        ADVANCE(494);
      if (lookahead == '<')
        ADVANCE(495);
      END_STATE();
    case 494:
      if (lookahead == ' ')
        ADVANCE(494);
      if (lookahead == '<')
        ADVANCE(7);
      END_STATE();
    case 495:
      if (lookahead == '/')
        ADVANCE(496);
      if (lookahead == 'l')
        ADVANCE(8);
      if (lookahead == 'n')
        ADVANCE(21);
      if (lookahead == 't')
        ADVANCE(34);
      if (lookahead == 'v')
        ADVANCE(47);
      END_STATE();
    case 496:
      if (lookahead == 's')
        ADVANCE(68);
      END_STATE();
    case 497:
      if (lookahead == '#')
        ADVANCE(498);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(497);
      END_STATE();
    case 498:
      if (lookahead == '<')
        ADVANCE(499);
      END_STATE();
    case 499:
      if (lookahead == '/')
        ADVANCE(500);
      if (lookahead == 'v')
        ADVANCE(509);
      END_STATE();
    case 500:
      if (lookahead == 'v')
        ADVANCE(501);
      END_STATE();
    case 501:
      if (lookahead == 'a')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'r')
        ADVANCE(503);
      END_STATE();
    case 503:
      if (lookahead == 'i')
        ADVANCE(504);
      END_STATE();
    case 504:
      if (lookahead == 'a')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead == 'b')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == 'l')
        ADVANCE(507);
      END_STATE();
    case 507:
      if (lookahead == 'e')
        ADVANCE(508);
      END_STATE();
    case 508:
      if (lookahead == 's')
        ADVANCE(94);
      END_STATE();
    case 509:
      if (lookahead == 'a')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'r')
        ADVANCE(511);
      END_STATE();
    case 511:
      if (lookahead == 'i')
        ADVANCE(512);
      END_STATE();
    case 512:
      if (lookahead == 'a')
        ADVANCE(513);
      END_STATE();
    case 513:
      if (lookahead == 'b')
        ADVANCE(514);
      END_STATE();
    case 514:
      if (lookahead == 'l')
        ADVANCE(515);
      END_STATE();
    case 515:
      if (lookahead == 'e')
        ADVANCE(516);
      END_STATE();
    case 516:
      if (lookahead == '>')
        ADVANCE(280);
      END_STATE();
    case 517:
      if (lookahead == '#')
        ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(517);
      END_STATE();
    case 518:
      if (lookahead == '<')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == '/')
        ADVANCE(520);
      if (lookahead == 'd')
        ADVANCE(529);
      if (lookahead == 'i')
        ADVANCE(201);
      if (lookahead == 'n')
        ADVANCE(530);
      if (lookahead == 'o')
        ADVANCE(244);
      END_STATE();
    case 520:
      if (lookahead == 'v')
        ADVANCE(521);
      END_STATE();
    case 521:
      if (lookahead == 'a')
        ADVANCE(522);
      END_STATE();
    case 522:
      if (lookahead == 'r')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == 'i')
        ADVANCE(524);
      END_STATE();
    case 524:
      if (lookahead == 'a')
        ADVANCE(525);
      END_STATE();
    case 525:
      if (lookahead == 'b')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 'l')
        ADVANCE(527);
      END_STATE();
    case 527:
      if (lookahead == 'e')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == '>')
        ADVANCE(93);
      END_STATE();
    case 529:
      if (lookahead == 'e')
        ADVANCE(130);
      END_STATE();
    case 530:
      if (lookahead == 'a')
        ADVANCE(531);
      END_STATE();
    case 531:
      if (lookahead == 'm')
        ADVANCE(532);
      END_STATE();
    case 532:
      if (lookahead == 'e')
        ADVANCE(533);
      END_STATE();
    case 533:
      if (lookahead == '>')
        ADVANCE(534);
      END_STATE();
    case 534:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 535:
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 536:
      if (lookahead == '/')
        ADVANCE(537);
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 537:
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead == 'n')
        ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 538:
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead == 'a')
        ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 539:
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead == 'm')
        ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 540:
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead == 'e')
        ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 541:
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead == '>')
        ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '<')
        ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(535);
      END_STATE();
    case 543:
      if (lookahead == '<')
        ADVANCE(544);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(543);
      END_STATE();
    case 544:
      if (lookahead == '/')
        ADVANCE(545);
      if (lookahead == 'c')
        ADVANCE(547);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 545:
      if (lookahead == 'c')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == 'h')
        ADVANCE(286);
      END_STATE();
    case 547:
      if (lookahead == 'u')
        ADVANCE(387);
      END_STATE();
    case 548:
      if (lookahead == '<')
        ADVANCE(549);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(548);
      END_STATE();
    case 549:
      if (lookahead == '/')
        ADVANCE(550);
      if (lookahead == 'c')
        ADVANCE(547);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 550:
      if (lookahead == 'g')
        ADVANCE(321);
      END_STATE();
    case 551:
      if (lookahead == ' ')
        ADVANCE(552);
      if (lookahead == '<')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 552:
      if (lookahead == ' ')
        ADVANCE(552);
      if (lookahead == '<')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 553:
      if (lookahead == '/')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'c')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'u')
        ADVANCE(305);
      END_STATE();
    case 556:
      if (lookahead == ' ')
        ADVANCE(557);
      if (lookahead == '<')
        ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 557:
      if (lookahead == ' ')
        ADVANCE(557);
      if (lookahead == '<')
        ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 558:
      if (lookahead == '/')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'i')
        ADVANCE(560);
      END_STATE();
    case 560:
      if (lookahead == 't')
        ADVANCE(337);
      END_STATE();
    case 561:
      if (lookahead == ' ')
        ADVANCE(562);
      if (lookahead == '<')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(565);
      END_STATE();
    case 562:
      if (lookahead == ' ')
        ADVANCE(562);
      if (lookahead == '<')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(565);
      END_STATE();
    case 563:
      if (lookahead == '/')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'r')
        ADVANCE(341);
      END_STATE();
    case 565:
      if (lookahead == ' ')
        ADVANCE(566);
      if (lookahead == ':')
        ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(565);
      END_STATE();
    case 566:
      if (lookahead == ' ')
        ADVANCE(566);
      if (lookahead == ':')
        ADVANCE(567);
      END_STATE();
    case 567:
      if (lookahead == ' ')
        ADVANCE(567);
      if (lookahead == '\"')
        ADVANCE(568);
      END_STATE();
    case 568:
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(465);
      END_STATE();
    case 569:
      if (lookahead == '<')
        ADVANCE(570);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(569);
      END_STATE();
    case 570:
      if (lookahead == 'c')
        ADVANCE(571);
      END_STATE();
    case 571:
      if (lookahead == 'o')
        ADVANCE(366);
      END_STATE();
    case 572:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(572);
      END_STATE();
    case 573:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(574);
      if (lookahead == '#')
        ADVANCE(575);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 574:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(574);
      if (lookahead == '#')
        ADVANCE(575);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 575:
      if (lookahead == '<')
        ADVANCE(576);
      END_STATE();
    case 576:
      if (lookahead == '/')
        ADVANCE(483);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == 'l')
        ADVANCE(473);
      if (lookahead == 's')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(260);
      if (lookahead == 'v')
        ADVANCE(474);
      END_STATE();
    case 577:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(578);
      if (lookahead == '#')
        ADVANCE(579);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 578:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(578);
      if (lookahead == '#')
        ADVANCE(579);
      if (lookahead == '<')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 579:
      if (lookahead == '<')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == '/')
        ADVANCE(500);
      if (lookahead == 'b')
        ADVANCE(96);
      if (lookahead == 'd')
        ADVANCE(472);
      if (lookahead == 'l')
        ADVANCE(473);
      if (lookahead == 's')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(260);
      if (lookahead == 'v')
        ADVANCE(474);
      END_STATE();
    case 581:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(582);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 582:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(582);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 583:
      if (lookahead == '/')
        ADVANCE(584);
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 584:
      if (lookahead == 'c')
        ADVANCE(546);
      if (lookahead == 'g')
        ADVANCE(321);
      END_STATE();
    case 585:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(586);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 586:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(586);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 587:
      if (lookahead == '/')
        ADVANCE(588);
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 588:
      if (lookahead == 'c')
        ADVANCE(589);
      if (lookahead == 'e')
        ADVANCE(316);
      if (lookahead == 'g')
        ADVANCE(321);
      if (lookahead == 't')
        ADVANCE(348);
      END_STATE();
    case 589:
      if (lookahead == 'h')
        ADVANCE(286);
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 590:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 591:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(591);
      if (lookahead == '#')
        ADVANCE(479);
      if (lookahead == '<')
        ADVANCE(592);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(460);
      END_STATE();
    case 592:
      if (lookahead == '/')
        ADVANCE(593);
      if (lookahead == 'c')
        ADVANCE(476);
      if (lookahead == 'g')
        ADVANCE(403);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 593:
      if (lookahead == 'c')
        ADVANCE(546);
      if (lookahead == 'e')
        ADVANCE(316);
      if (lookahead == 'g')
        ADVANCE(321);
      if (lookahead == 't')
        ADVANCE(348);
      END_STATE();
    case 594:
      if (lookahead == '<')
        ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(594);
      END_STATE();
    case 595:
      if (lookahead == '/')
        ADVANCE(596);
      if (lookahead == 'c')
        ADVANCE(547);
      END_STATE();
    case 596:
      if (lookahead == 'c')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == 'o')
        ADVANCE(296);
      END_STATE();
    case 598:
      if (lookahead == '<')
        ADVANCE(599);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(598);
      END_STATE();
    case 599:
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 600:
      if (lookahead == '<')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(600);
      END_STATE();
    case 601:
      if (lookahead == '/')
        ADVANCE(602);
      if (lookahead == 'c')
        ADVANCE(547);
      if (lookahead == 'i')
        ADVANCE(603);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 602:
      if (lookahead == 't')
        ADVANCE(348);
      END_STATE();
    case 603:
      if (lookahead == 't')
        ADVANCE(421);
      END_STATE();
    case 604:
      if (lookahead == '<')
        ADVANCE(605);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(604);
      END_STATE();
    case 605:
      if (lookahead == 'e')
        ADVANCE(398);
      END_STATE();
    case 606:
      if (lookahead == '<')
        ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(606);
      END_STATE();
    case 607:
      if (lookahead == '/')
        ADVANCE(608);
      if (lookahead == 'c')
        ADVANCE(547);
      if (lookahead == 'i')
        ADVANCE(603);
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 608:
      if (lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 609:
      if (lookahead == '<')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(609);
      END_STATE();
    case 610:
      if (lookahead == '/')
        ADVANCE(611);
      END_STATE();
    case 611:
      if (lookahead == 'i')
        ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'f')
        ADVANCE(335);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 468},
  [2] = {.lex_state = 477},
  [3] = {.lex_state = 480},
  [4] = {.lex_state = 492},
  [5] = {.lex_state = 497},
  [6] = {.lex_state = 517},
  [7] = {.lex_state = 543},
  [8] = {.lex_state = 548},
  [9] = {.lex_state = 551},
  [10] = {.lex_state = 556},
  [11] = {.lex_state = 561},
  [12] = {.lex_state = 569},
  [13] = {.lex_state = 572},
  [14] = {.lex_state = 477},
  [15] = {.lex_state = 477},
  [16] = {.lex_state = 477},
  [17] = {.lex_state = 480},
  [18] = {.lex_state = 573},
  [19] = {.lex_state = 492},
  [20] = {.lex_state = 573},
  [21] = {.lex_state = 497},
  [22] = {.lex_state = 577},
  [23] = {.lex_state = 517},
  [24] = {.lex_state = 477},
  [25] = {.lex_state = 543},
  [26] = {.lex_state = 581},
  [27] = {.lex_state = 548},
  [28] = {.lex_state = 585},
  [29] = {.lex_state = 551},
  [30] = {.lex_state = 590},
  [31] = {.lex_state = 556},
  [32] = {.lex_state = 590},
  [33] = {.lex_state = 561},
  [34] = {.lex_state = 594},
  [35] = {.lex_state = 598},
  [36] = {.lex_state = 477},
  [37] = {.lex_state = 477},
  [38] = {.lex_state = 480},
  [39] = {.lex_state = 573},
  [40] = {.lex_state = 492},
  [41] = {.lex_state = 573},
  [42] = {.lex_state = 497},
  [43] = {.lex_state = 577},
  [44] = {.lex_state = 517},
  [45] = {.lex_state = 477},
  [46] = {.lex_state = 543},
  [47] = {.lex_state = 581},
  [48] = {.lex_state = 548},
  [49] = {.lex_state = 585},
  [50] = {.lex_state = 551},
  [51] = {.lex_state = 590},
  [52] = {.lex_state = 556},
  [53] = {.lex_state = 590},
  [54] = {.lex_state = 561},
  [55] = {.lex_state = 598},
  [56] = {.lex_state = 594},
  [57] = {.lex_state = 600},
  [58] = {.lex_state = 604},
  [59] = {.lex_state = 598},
  [60] = {.lex_state = 594},
  [61] = {.lex_state = 604},
  [62] = {.lex_state = 600},
  [63] = {.lex_state = 606},
  [64] = {.lex_state = 609},
  [65] = {.lex_state = 604},
  [66] = {.lex_state = 600},
  [67] = {.lex_state = 609},
  [68] = {.lex_state = 606},
  [69] = {.lex_state = 581},
  [70] = {.lex_state = 609},
  [71] = {.lex_state = 606},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comments] = ACTIONS(1),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(1),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(1),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(1),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(1),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(1),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(1),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(1),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(1),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(1),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(1),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(1),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(1),
    [anon_sym_LTcustom_item_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(1),
    [anon_sym_LTitem_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(1),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(1),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(1),
    [anon_sym_LTif_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHif_GT] = ACTIONS(1),
    [aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(1),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(1),
    [anon_sym_LTthen_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(1),
    [anon_sym_LTelse_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(1),
    [sym_meta_displayname] = ACTIONS(1),
    [sym_meta_labels] = ACTIONS(1),
    [sym_meta_refs] = ACTIONS(1),
    [sym_spec_type] = ACTIONS(1),
    [sym_spec_name] = ACTIONS(1),
    [sym_spec_version] = ACTIONS(1),
    [sym_spec_link] = ACTIONS(1),
    [sym_variable_name] = ACTIONS(3),
    [sym_variable_default] = ACTIONS(1),
    [sym_variable_description] = ACTIONS(1),
    [sym_variable_info] = ACTIONS(1),
    [sym_variable_optional] = ACTIONS(1),
    [sym_check_string_element] = ACTIONS(1),
    [sym_check_nonstring_element] = ACTIONS(1),
    [sym_check_empty_element] = ACTIONS(1),
  },
  [1] = {
    [sym_audit] = STATE(13),
    [sym__statement] = STATE(14),
    [sym_ui_metadata] = STATE(14),
    [sym_spec_block] = STATE(14),
    [sym_variable_block] = STATE(14),
    [sym_variable_instance] = STATE(14),
    [sym_check_type] = STATE(14),
    [sym_group_policy] = STATE(14),
    [sym_custom_item] = STATE(14),
    [sym_builtin_item] = STATE(14),
    [sym_rept_item] = STATE(14),
    [sym_if_block] = STATE(14),
    [aux_sym_audit_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comments] = ACTIONS(7),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(9),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(13),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(15),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
    [sym_meta_displayname] = ACTIONS(29),
    [sym_meta_labels] = ACTIONS(29),
    [sym_meta_refs] = ACTIONS(29),
    [sym_check_string_element] = ACTIONS(29),
    [sym_check_nonstring_element] = ACTIONS(29),
    [sym_check_empty_element] = ACTIONS(29),
  },
  [2] = {
    [sym__statement] = STATE(15),
    [sym_ui_metadata] = STATE(15),
    [sym_spec_block] = STATE(15),
    [sym_variable_block] = STATE(15),
    [sym_variable_instance] = STATE(15),
    [sym_check_type] = STATE(15),
    [sym_group_policy] = STATE(15),
    [sym_custom_item] = STATE(15),
    [sym_builtin_item] = STATE(15),
    [sym_rept_item] = STATE(15),
    [sym_if_block] = STATE(15),
    [aux_sym_audit_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(9),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(13),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(15),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
    [sym_meta_displayname] = ACTIONS(33),
    [sym_meta_labels] = ACTIONS(33),
    [sym_meta_refs] = ACTIONS(33),
    [sym_check_string_element] = ACTIONS(33),
    [sym_check_nonstring_element] = ACTIONS(33),
    [sym_check_empty_element] = ACTIONS(33),
  },
  [3] = {
    [sym_spec_block] = STATE(17),
    [sym_variable_block] = STATE(17),
    [aux_sym_ui_metadata_repeat1] = STATE(17),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(35),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(13),
    [sym_meta_displayname] = ACTIONS(37),
    [sym_meta_labels] = ACTIONS(37),
    [sym_meta_refs] = ACTIONS(37),
  },
  [4] = {
    [aux_sym_spec_block_repeat1] = STATE(19),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(39),
    [sym_spec_type] = ACTIONS(41),
    [sym_spec_name] = ACTIONS(41),
    [sym_spec_version] = ACTIONS(41),
    [sym_spec_link] = ACTIONS(41),
  },
  [5] = {
    [sym_variable_instance] = STATE(21),
    [aux_sym_variable_block_repeat1] = STATE(21),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(43),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(15),
  },
  [6] = {
    [aux_sym_variable_instance_repeat1] = STATE(23),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(45),
    [sym_variable_name] = ACTIONS(47),
    [sym_variable_default] = ACTIONS(47),
    [sym_variable_description] = ACTIONS(47),
    [sym_variable_info] = ACTIONS(47),
    [sym_variable_optional] = ACTIONS(47),
  },
  [7] = {
    [sym_group_policy] = STATE(25),
    [sym_custom_item] = STATE(25),
    [sym_builtin_item] = STATE(25),
    [sym_rept_item] = STATE(25),
    [sym_if_block] = STATE(25),
    [aux_sym_check_type_repeat1] = STATE(25),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(49),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
  },
  [8] = {
    [sym_group_policy] = STATE(27),
    [sym_custom_item] = STATE(27),
    [sym_builtin_item] = STATE(27),
    [sym_rept_item] = STATE(27),
    [sym_if_block] = STATE(27),
    [aux_sym_check_type_repeat1] = STATE(27),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(51),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
  },
  [9] = {
    [aux_sym_custom_item_repeat1] = STATE(29),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(53),
    [sym_check_string_element] = ACTIONS(55),
    [sym_check_nonstring_element] = ACTIONS(55),
    [sym_check_empty_element] = ACTIONS(55),
  },
  [10] = {
    [aux_sym_custom_item_repeat1] = STATE(31),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(57),
    [sym_check_string_element] = ACTIONS(59),
    [sym_check_nonstring_element] = ACTIONS(59),
    [sym_check_empty_element] = ACTIONS(59),
  },
  [11] = {
    [aux_sym_rept_item_repeat1] = STATE(33),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(61),
    [sym_check_string_element] = ACTIONS(63),
  },
  [12] = {
    [sym_condition_block] = STATE(35),
    [aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(65),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(67),
  },
  [14] = {
    [sym__statement] = STATE(36),
    [sym_ui_metadata] = STATE(36),
    [sym_spec_block] = STATE(36),
    [sym_variable_block] = STATE(36),
    [sym_variable_instance] = STATE(36),
    [sym_check_type] = STATE(36),
    [sym_group_policy] = STATE(36),
    [sym_custom_item] = STATE(36),
    [sym_builtin_item] = STATE(36),
    [sym_rept_item] = STATE(36),
    [sym_if_block] = STATE(36),
    [aux_sym_audit_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(9),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(13),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(15),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
    [sym_meta_displayname] = ACTIONS(69),
    [sym_meta_labels] = ACTIONS(69),
    [sym_meta_refs] = ACTIONS(69),
    [sym_check_string_element] = ACTIONS(69),
    [sym_check_nonstring_element] = ACTIONS(69),
    [sym_check_empty_element] = ACTIONS(69),
  },
  [15] = {
    [sym__statement] = STATE(36),
    [sym_ui_metadata] = STATE(36),
    [sym_spec_block] = STATE(36),
    [sym_variable_block] = STATE(36),
    [sym_variable_instance] = STATE(36),
    [sym_check_type] = STATE(36),
    [sym_group_policy] = STATE(36),
    [sym_custom_item] = STATE(36),
    [sym_builtin_item] = STATE(36),
    [sym_rept_item] = STATE(36),
    [sym_if_block] = STATE(36),
    [aux_sym_audit_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(9),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(13),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(15),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
    [sym_meta_displayname] = ACTIONS(69),
    [sym_meta_labels] = ACTIONS(69),
    [sym_meta_refs] = ACTIONS(69),
    [sym_check_string_element] = ACTIONS(69),
    [sym_check_nonstring_element] = ACTIONS(69),
    [sym_check_empty_element] = ACTIONS(69),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(73),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(73),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(73),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(73),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(73),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(73),
    [anon_sym_LTcustom_item_GT] = ACTIONS(73),
    [anon_sym_LTitem_GT] = ACTIONS(73),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(73),
    [anon_sym_LTif_GT] = ACTIONS(73),
    [sym_meta_displayname] = ACTIONS(73),
    [sym_meta_labels] = ACTIONS(73),
    [sym_meta_refs] = ACTIONS(73),
    [sym_check_string_element] = ACTIONS(73),
    [sym_check_nonstring_element] = ACTIONS(73),
    [sym_check_empty_element] = ACTIONS(73),
  },
  [17] = {
    [sym_spec_block] = STATE(38),
    [sym_variable_block] = STATE(38),
    [aux_sym_ui_metadata_repeat1] = STATE(38),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(75),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(13),
    [sym_meta_displayname] = ACTIONS(77),
    [sym_meta_labels] = ACTIONS(77),
    [sym_meta_refs] = ACTIONS(77),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(79),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(79),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(79),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(79),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(79),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(79),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(79),
    [anon_sym_LTcustom_item_GT] = ACTIONS(79),
    [anon_sym_LTitem_GT] = ACTIONS(79),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(79),
    [anon_sym_LTif_GT] = ACTIONS(79),
    [sym_meta_displayname] = ACTIONS(79),
    [sym_meta_labels] = ACTIONS(79),
    [sym_meta_refs] = ACTIONS(79),
    [sym_check_string_element] = ACTIONS(79),
    [sym_check_nonstring_element] = ACTIONS(79),
    [sym_check_empty_element] = ACTIONS(79),
  },
  [19] = {
    [aux_sym_spec_block_repeat1] = STATE(40),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(81),
    [sym_spec_type] = ACTIONS(83),
    [sym_spec_name] = ACTIONS(83),
    [sym_spec_version] = ACTIONS(83),
    [sym_spec_link] = ACTIONS(83),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(85),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(85),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(85),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(85),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(85),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(85),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(85),
    [anon_sym_LTcustom_item_GT] = ACTIONS(85),
    [anon_sym_LTitem_GT] = ACTIONS(85),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(85),
    [anon_sym_LTif_GT] = ACTIONS(85),
    [sym_meta_displayname] = ACTIONS(85),
    [sym_meta_labels] = ACTIONS(85),
    [sym_meta_refs] = ACTIONS(85),
    [sym_check_string_element] = ACTIONS(85),
    [sym_check_nonstring_element] = ACTIONS(85),
    [sym_check_empty_element] = ACTIONS(85),
  },
  [21] = {
    [sym_variable_instance] = STATE(42),
    [aux_sym_variable_block_repeat1] = STATE(42),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(87),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(15),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(89),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(89),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(89),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(89),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(89),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(89),
    [anon_sym_LTcustom_item_GT] = ACTIONS(89),
    [anon_sym_LTitem_GT] = ACTIONS(89),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(89),
    [anon_sym_LTif_GT] = ACTIONS(89),
    [sym_meta_displayname] = ACTIONS(89),
    [sym_meta_labels] = ACTIONS(89),
    [sym_meta_refs] = ACTIONS(89),
    [sym_check_string_element] = ACTIONS(89),
    [sym_check_nonstring_element] = ACTIONS(89),
    [sym_check_empty_element] = ACTIONS(89),
  },
  [23] = {
    [aux_sym_variable_instance_repeat1] = STATE(44),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(91),
    [sym_variable_name] = ACTIONS(93),
    [sym_variable_default] = ACTIONS(93),
    [sym_variable_description] = ACTIONS(93),
    [sym_variable_info] = ACTIONS(93),
    [sym_variable_optional] = ACTIONS(93),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(95),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(95),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(95),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(95),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(95),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(95),
    [anon_sym_LTcustom_item_GT] = ACTIONS(95),
    [anon_sym_LTitem_GT] = ACTIONS(95),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(95),
    [anon_sym_LTif_GT] = ACTIONS(95),
    [sym_meta_displayname] = ACTIONS(95),
    [sym_meta_labels] = ACTIONS(95),
    [sym_meta_refs] = ACTIONS(95),
    [sym_check_string_element] = ACTIONS(95),
    [sym_check_nonstring_element] = ACTIONS(95),
    [sym_check_empty_element] = ACTIONS(95),
  },
  [25] = {
    [sym_group_policy] = STATE(46),
    [sym_custom_item] = STATE(46),
    [sym_builtin_item] = STATE(46),
    [sym_rept_item] = STATE(46),
    [sym_if_block] = STATE(46),
    [aux_sym_check_type_repeat1] = STATE(46),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(97),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(99),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(99),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(99),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(99),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(99),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(99),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(99),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(99),
    [anon_sym_LTcustom_item_GT] = ACTIONS(99),
    [anon_sym_LTitem_GT] = ACTIONS(99),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(99),
    [anon_sym_LTif_GT] = ACTIONS(99),
    [sym_meta_displayname] = ACTIONS(99),
    [sym_meta_labels] = ACTIONS(99),
    [sym_meta_refs] = ACTIONS(99),
    [sym_check_string_element] = ACTIONS(99),
    [sym_check_nonstring_element] = ACTIONS(99),
    [sym_check_empty_element] = ACTIONS(99),
  },
  [27] = {
    [sym_group_policy] = STATE(48),
    [sym_custom_item] = STATE(48),
    [sym_builtin_item] = STATE(48),
    [sym_rept_item] = STATE(48),
    [sym_if_block] = STATE(48),
    [aux_sym_check_type_repeat1] = STATE(48),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(19),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(101),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LTif_GT] = ACTIONS(27),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(103),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(103),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(103),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(103),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(103),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(103),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(103),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(103),
    [anon_sym_LTcustom_item_GT] = ACTIONS(103),
    [anon_sym_LTitem_GT] = ACTIONS(103),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(103),
    [anon_sym_LTif_GT] = ACTIONS(103),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(103),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(103),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(103),
    [sym_meta_displayname] = ACTIONS(103),
    [sym_meta_labels] = ACTIONS(103),
    [sym_meta_refs] = ACTIONS(103),
    [sym_check_string_element] = ACTIONS(103),
    [sym_check_nonstring_element] = ACTIONS(103),
    [sym_check_empty_element] = ACTIONS(103),
  },
  [29] = {
    [aux_sym_custom_item_repeat1] = STATE(50),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(105),
    [sym_check_string_element] = ACTIONS(107),
    [sym_check_nonstring_element] = ACTIONS(107),
    [sym_check_empty_element] = ACTIONS(107),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(109),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(109),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(109),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(109),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(109),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(109),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(109),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(109),
    [anon_sym_LTcustom_item_GT] = ACTIONS(109),
    [anon_sym_LTitem_GT] = ACTIONS(109),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(109),
    [anon_sym_LTif_GT] = ACTIONS(109),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(109),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(109),
    [sym_meta_displayname] = ACTIONS(109),
    [sym_meta_labels] = ACTIONS(109),
    [sym_meta_refs] = ACTIONS(109),
    [sym_check_string_element] = ACTIONS(109),
    [sym_check_nonstring_element] = ACTIONS(109),
    [sym_check_empty_element] = ACTIONS(109),
  },
  [31] = {
    [aux_sym_custom_item_repeat1] = STATE(52),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(111),
    [sym_check_string_element] = ACTIONS(113),
    [sym_check_nonstring_element] = ACTIONS(113),
    [sym_check_empty_element] = ACTIONS(113),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(115),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(115),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(115),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(115),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(115),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(115),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(115),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(115),
    [anon_sym_LTcustom_item_GT] = ACTIONS(115),
    [anon_sym_LTitem_GT] = ACTIONS(115),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(115),
    [anon_sym_LTif_GT] = ACTIONS(115),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(115),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(115),
    [sym_meta_displayname] = ACTIONS(115),
    [sym_meta_labels] = ACTIONS(115),
    [sym_meta_refs] = ACTIONS(115),
    [sym_check_string_element] = ACTIONS(115),
    [sym_check_nonstring_element] = ACTIONS(115),
    [sym_check_empty_element] = ACTIONS(115),
  },
  [33] = {
    [aux_sym_rept_item_repeat1] = STATE(54),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(117),
    [sym_check_string_element] = ACTIONS(119),
  },
  [34] = {
    [sym_custom_item] = STATE(56),
    [aux_sym_condition_block_repeat1] = STATE(56),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(121),
  },
  [35] = {
    [sym_then_block] = STATE(58),
    [anon_sym_LTthen_GT] = ACTIONS(123),
  },
  [36] = {
    [sym__statement] = STATE(36),
    [sym_ui_metadata] = STATE(36),
    [sym_spec_block] = STATE(36),
    [sym_variable_block] = STATE(36),
    [sym_variable_instance] = STATE(36),
    [sym_check_type] = STATE(36),
    [sym_group_policy] = STATE(36),
    [sym_custom_item] = STATE(36),
    [sym_builtin_item] = STATE(36),
    [sym_rept_item] = STATE(36),
    [sym_if_block] = STATE(36),
    [aux_sym_audit_repeat1] = STATE(36),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(127),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(130),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(133),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(136),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(142),
    [anon_sym_LTcustom_item_GT] = ACTIONS(145),
    [anon_sym_LTitem_GT] = ACTIONS(148),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(151),
    [anon_sym_LTif_GT] = ACTIONS(154),
    [sym_meta_displayname] = ACTIONS(157),
    [sym_meta_labels] = ACTIONS(157),
    [sym_meta_refs] = ACTIONS(157),
    [sym_check_string_element] = ACTIONS(157),
    [sym_check_nonstring_element] = ACTIONS(157),
    [sym_check_empty_element] = ACTIONS(157),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(160),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(160),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(160),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(160),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(160),
    [anon_sym_LTcustom_item_GT] = ACTIONS(160),
    [anon_sym_LTitem_GT] = ACTIONS(160),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(160),
    [anon_sym_LTif_GT] = ACTIONS(160),
    [sym_meta_displayname] = ACTIONS(160),
    [sym_meta_labels] = ACTIONS(160),
    [sym_meta_refs] = ACTIONS(160),
    [sym_check_string_element] = ACTIONS(160),
    [sym_check_nonstring_element] = ACTIONS(160),
    [sym_check_empty_element] = ACTIONS(160),
  },
  [38] = {
    [sym_spec_block] = STATE(38),
    [sym_variable_block] = STATE(38),
    [aux_sym_ui_metadata_repeat1] = STATE(38),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(162),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(164),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(167),
    [sym_meta_displayname] = ACTIONS(170),
    [sym_meta_labels] = ACTIONS(170),
    [sym_meta_refs] = ACTIONS(170),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(173),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(173),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(173),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(173),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(173),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(173),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(173),
    [anon_sym_LTcustom_item_GT] = ACTIONS(173),
    [anon_sym_LTitem_GT] = ACTIONS(173),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(173),
    [anon_sym_LTif_GT] = ACTIONS(173),
    [sym_meta_displayname] = ACTIONS(173),
    [sym_meta_labels] = ACTIONS(173),
    [sym_meta_refs] = ACTIONS(173),
    [sym_check_string_element] = ACTIONS(173),
    [sym_check_nonstring_element] = ACTIONS(173),
    [sym_check_empty_element] = ACTIONS(173),
  },
  [40] = {
    [aux_sym_spec_block_repeat1] = STATE(40),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(175),
    [sym_spec_type] = ACTIONS(177),
    [sym_spec_name] = ACTIONS(177),
    [sym_spec_version] = ACTIONS(177),
    [sym_spec_link] = ACTIONS(177),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(180),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(180),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(180),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(180),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(180),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(180),
    [anon_sym_LTcustom_item_GT] = ACTIONS(180),
    [anon_sym_LTitem_GT] = ACTIONS(180),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(180),
    [anon_sym_LTif_GT] = ACTIONS(180),
    [sym_meta_displayname] = ACTIONS(180),
    [sym_meta_labels] = ACTIONS(180),
    [sym_meta_refs] = ACTIONS(180),
    [sym_check_string_element] = ACTIONS(180),
    [sym_check_nonstring_element] = ACTIONS(180),
    [sym_check_empty_element] = ACTIONS(180),
  },
  [42] = {
    [sym_variable_instance] = STATE(42),
    [aux_sym_variable_block_repeat1] = STATE(42),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(182),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(184),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(187),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(187),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(187),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(187),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(187),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(187),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(187),
    [anon_sym_LTcustom_item_GT] = ACTIONS(187),
    [anon_sym_LTitem_GT] = ACTIONS(187),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(187),
    [anon_sym_LTif_GT] = ACTIONS(187),
    [sym_meta_displayname] = ACTIONS(187),
    [sym_meta_labels] = ACTIONS(187),
    [sym_meta_refs] = ACTIONS(187),
    [sym_check_string_element] = ACTIONS(187),
    [sym_check_nonstring_element] = ACTIONS(187),
    [sym_check_empty_element] = ACTIONS(187),
  },
  [44] = {
    [aux_sym_variable_instance_repeat1] = STATE(44),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(189),
    [sym_variable_name] = ACTIONS(191),
    [sym_variable_default] = ACTIONS(191),
    [sym_variable_description] = ACTIONS(191),
    [sym_variable_info] = ACTIONS(191),
    [sym_variable_optional] = ACTIONS(191),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(194),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(194),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(194),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(194),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(194),
    [anon_sym_LTcustom_item_GT] = ACTIONS(194),
    [anon_sym_LTitem_GT] = ACTIONS(194),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(194),
    [anon_sym_LTif_GT] = ACTIONS(194),
    [sym_meta_displayname] = ACTIONS(194),
    [sym_meta_labels] = ACTIONS(194),
    [sym_meta_refs] = ACTIONS(194),
    [sym_check_string_element] = ACTIONS(194),
    [sym_check_nonstring_element] = ACTIONS(194),
    [sym_check_empty_element] = ACTIONS(194),
  },
  [46] = {
    [sym_group_policy] = STATE(46),
    [sym_custom_item] = STATE(46),
    [sym_builtin_item] = STATE(46),
    [sym_rept_item] = STATE(46),
    [sym_if_block] = STATE(46),
    [aux_sym_check_type_repeat1] = STATE(46),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(196),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(198),
    [anon_sym_LTcustom_item_GT] = ACTIONS(201),
    [anon_sym_LTitem_GT] = ACTIONS(204),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(207),
    [anon_sym_LTif_GT] = ACTIONS(210),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(213),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(213),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(213),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(213),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(213),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(213),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(213),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(213),
    [anon_sym_LTcustom_item_GT] = ACTIONS(213),
    [anon_sym_LTitem_GT] = ACTIONS(213),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(213),
    [anon_sym_LTif_GT] = ACTIONS(213),
    [sym_meta_displayname] = ACTIONS(213),
    [sym_meta_labels] = ACTIONS(213),
    [sym_meta_refs] = ACTIONS(213),
    [sym_check_string_element] = ACTIONS(213),
    [sym_check_nonstring_element] = ACTIONS(213),
    [sym_check_empty_element] = ACTIONS(213),
  },
  [48] = {
    [sym_group_policy] = STATE(48),
    [sym_custom_item] = STATE(48),
    [sym_builtin_item] = STATE(48),
    [sym_rept_item] = STATE(48),
    [sym_if_block] = STATE(48),
    [aux_sym_check_type_repeat1] = STATE(48),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(198),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(196),
    [anon_sym_LTcustom_item_GT] = ACTIONS(201),
    [anon_sym_LTitem_GT] = ACTIONS(204),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(207),
    [anon_sym_LTif_GT] = ACTIONS(210),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(215),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(215),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(215),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(215),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(215),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(215),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(215),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(215),
    [anon_sym_LTcustom_item_GT] = ACTIONS(215),
    [anon_sym_LTitem_GT] = ACTIONS(215),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(215),
    [anon_sym_LTif_GT] = ACTIONS(215),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(215),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(215),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(215),
    [sym_meta_displayname] = ACTIONS(215),
    [sym_meta_labels] = ACTIONS(215),
    [sym_meta_refs] = ACTIONS(215),
    [sym_check_string_element] = ACTIONS(215),
    [sym_check_nonstring_element] = ACTIONS(215),
    [sym_check_empty_element] = ACTIONS(215),
  },
  [50] = {
    [aux_sym_custom_item_repeat1] = STATE(50),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(217),
    [sym_check_string_element] = ACTIONS(219),
    [sym_check_nonstring_element] = ACTIONS(219),
    [sym_check_empty_element] = ACTIONS(219),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(222),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(222),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(222),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(222),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(222),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(222),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(222),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(222),
    [anon_sym_LTcustom_item_GT] = ACTIONS(222),
    [anon_sym_LTitem_GT] = ACTIONS(222),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(222),
    [anon_sym_LTif_GT] = ACTIONS(222),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(222),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(222),
    [sym_meta_displayname] = ACTIONS(222),
    [sym_meta_labels] = ACTIONS(222),
    [sym_meta_refs] = ACTIONS(222),
    [sym_check_string_element] = ACTIONS(222),
    [sym_check_nonstring_element] = ACTIONS(222),
    [sym_check_empty_element] = ACTIONS(222),
  },
  [52] = {
    [aux_sym_custom_item_repeat1] = STATE(52),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(217),
    [sym_check_string_element] = ACTIONS(224),
    [sym_check_nonstring_element] = ACTIONS(224),
    [sym_check_empty_element] = ACTIONS(224),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(227),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(227),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(227),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(227),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(227),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(227),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(227),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(227),
    [anon_sym_LTcustom_item_GT] = ACTIONS(227),
    [anon_sym_LTitem_GT] = ACTIONS(227),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(227),
    [anon_sym_LTif_GT] = ACTIONS(227),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(227),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(227),
    [sym_meta_displayname] = ACTIONS(227),
    [sym_meta_labels] = ACTIONS(227),
    [sym_meta_refs] = ACTIONS(227),
    [sym_check_string_element] = ACTIONS(227),
    [sym_check_nonstring_element] = ACTIONS(227),
    [sym_check_empty_element] = ACTIONS(227),
  },
  [54] = {
    [aux_sym_rept_item_repeat1] = STATE(54),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(229),
    [sym_check_string_element] = ACTIONS(231),
  },
  [55] = {
    [anon_sym_LTthen_GT] = ACTIONS(234),
  },
  [56] = {
    [sym_custom_item] = STATE(60),
    [aux_sym_condition_block_repeat1] = STATE(60),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(236),
  },
  [57] = {
    [sym_custom_item] = STATE(62),
    [sym_builtin_item] = STATE(62),
    [sym_rept_item] = STATE(62),
    [aux_sym_then_block_repeat1] = STATE(62),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(238),
  },
  [58] = {
    [sym_else_block] = STATE(64),
    [anon_sym_LTelse_GT] = ACTIONS(240),
  },
  [59] = {
    [anon_sym_LTthen_GT] = ACTIONS(242),
  },
  [60] = {
    [sym_custom_item] = STATE(60),
    [aux_sym_condition_block_repeat1] = STATE(60),
    [anon_sym_LTcustom_item_GT] = ACTIONS(244),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(247),
  },
  [61] = {
    [anon_sym_LTelse_GT] = ACTIONS(249),
  },
  [62] = {
    [sym_custom_item] = STATE(66),
    [sym_builtin_item] = STATE(66),
    [sym_rept_item] = STATE(66),
    [aux_sym_then_block_repeat1] = STATE(66),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(251),
  },
  [63] = {
    [sym_custom_item] = STATE(68),
    [sym_builtin_item] = STATE(68),
    [sym_rept_item] = STATE(68),
    [aux_sym_then_block_repeat1] = STATE(68),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(253),
  },
  [64] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(255),
  },
  [65] = {
    [anon_sym_LTelse_GT] = ACTIONS(257),
  },
  [66] = {
    [sym_custom_item] = STATE(66),
    [sym_builtin_item] = STATE(66),
    [sym_rept_item] = STATE(66),
    [aux_sym_then_block_repeat1] = STATE(66),
    [anon_sym_LTcustom_item_GT] = ACTIONS(259),
    [anon_sym_LTitem_GT] = ACTIONS(262),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(265),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(268),
  },
  [67] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(270),
  },
  [68] = {
    [sym_custom_item] = STATE(71),
    [sym_builtin_item] = STATE(71),
    [sym_rept_item] = STATE(71),
    [aux_sym_then_block_repeat1] = STATE(71),
    [anon_sym_LTcustom_item_GT] = ACTIONS(21),
    [anon_sym_LTitem_GT] = ACTIONS(23),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(25),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(272),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(274),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(274),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(274),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(274),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(274),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(274),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(274),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(274),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(274),
    [anon_sym_LTcustom_item_GT] = ACTIONS(274),
    [anon_sym_LTitem_GT] = ACTIONS(274),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(274),
    [anon_sym_LTif_GT] = ACTIONS(274),
    [sym_meta_displayname] = ACTIONS(274),
    [sym_meta_labels] = ACTIONS(274),
    [sym_meta_refs] = ACTIONS(274),
    [sym_check_string_element] = ACTIONS(274),
    [sym_check_nonstring_element] = ACTIONS(274),
    [sym_check_empty_element] = ACTIONS(274),
  },
  [70] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(276),
  },
  [71] = {
    [sym_custom_item] = STATE(71),
    [sym_builtin_item] = STATE(71),
    [sym_rept_item] = STATE(71),
    [aux_sym_then_block_repeat1] = STATE(71),
    [anon_sym_LTcustom_item_GT] = ACTIONS(259),
    [anon_sym_LTitem_GT] = ACTIONS(262),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(265),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(268),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_audit, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(6),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = true}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_audit, 1),
  [33] = {.count = 1, .reusable = true}, SHIFT(15),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, SHIFT(18),
  [41] = {.count = 1, .reusable = true}, SHIFT(19),
  [43] = {.count = 1, .reusable = true}, SHIFT(20),
  [45] = {.count = 1, .reusable = true}, SHIFT(22),
  [47] = {.count = 1, .reusable = true}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(28),
  [55] = {.count = 1, .reusable = true}, SHIFT(29),
  [57] = {.count = 1, .reusable = true}, SHIFT(30),
  [59] = {.count = 1, .reusable = true}, SHIFT(31),
  [61] = {.count = 1, .reusable = true}, SHIFT(32),
  [63] = {.count = 1, .reusable = true}, SHIFT(33),
  [65] = {.count = 1, .reusable = true}, SHIFT(34),
  [67] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [69] = {.count = 1, .reusable = true}, SHIFT(36),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_audit, 2),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_ui_metadata, 2),
  [75] = {.count = 1, .reusable = true}, SHIFT(37),
  [77] = {.count = 1, .reusable = true}, SHIFT(38),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_spec_block, 2),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_variable_block, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(41),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_variable_instance, 2),
  [91] = {.count = 1, .reusable = true}, SHIFT(43),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_check_type, 2),
  [97] = {.count = 1, .reusable = true}, SHIFT(45),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_group_policy, 2),
  [101] = {.count = 1, .reusable = true}, SHIFT(47),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_custom_item, 2),
  [105] = {.count = 1, .reusable = true}, SHIFT(49),
  [107] = {.count = 1, .reusable = true}, SHIFT(50),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_builtin_item, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(51),
  [113] = {.count = 1, .reusable = true}, SHIFT(52),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_rept_item, 2),
  [117] = {.count = 1, .reusable = true}, SHIFT(53),
  [119] = {.count = 1, .reusable = true}, SHIFT(54),
  [121] = {.count = 1, .reusable = true}, SHIFT(55),
  [123] = {.count = 1, .reusable = true}, SHIFT(57),
  [125] = {.count = 1, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(3),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(4),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(5),
  [136] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(6),
  [139] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(7),
  [142] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(8),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(9),
  [148] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(11),
  [154] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(12),
  [157] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(36),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_ui_metadata, 3),
  [162] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2),
  [164] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2), SHIFT_REPEAT(4),
  [167] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2), SHIFT_REPEAT(5),
  [170] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2), SHIFT_REPEAT(38),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_spec_block, 3),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym_spec_block_repeat1, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym_spec_block_repeat1, 2), SHIFT_REPEAT(40),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_variable_block, 3),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_block_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_block_repeat1, 2), SHIFT_REPEAT(6),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_variable_instance, 3),
  [189] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_instance_repeat1, 2),
  [191] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_instance_repeat1, 2), SHIFT_REPEAT(44),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_check_type, 3),
  [196] = {.count = 1, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(8),
  [201] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(9),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(10),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(11),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(12),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_group_policy, 3),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_custom_item, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2), SHIFT_REPEAT(50),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_builtin_item, 3),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2), SHIFT_REPEAT(52),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_rept_item, 3),
  [229] = {.count = 1, .reusable = true}, REDUCE(aux_sym_rept_item_repeat1, 2),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_rept_item_repeat1, 2), SHIFT_REPEAT(54),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_condition_block, 2),
  [236] = {.count = 1, .reusable = true}, SHIFT(59),
  [238] = {.count = 1, .reusable = true}, SHIFT(61),
  [240] = {.count = 1, .reusable = true}, SHIFT(63),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_condition_block, 3),
  [244] = {.count = 2, .reusable = true}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(9),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_condition_block_repeat1, 2),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_then_block, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(65),
  [253] = {.count = 1, .reusable = true}, SHIFT(67),
  [255] = {.count = 1, .reusable = true}, SHIFT(69),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_then_block, 3),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(9),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(10),
  [265] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(11),
  [268] = {.count = 1, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_else_block, 2),
  [272] = {.count = 1, .reusable = true}, SHIFT(70),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 5),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_else_block, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tenableaudits() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
