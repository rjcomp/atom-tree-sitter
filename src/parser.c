#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 93
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND_LTui_metadata_GT = 1,
  anon_sym_POUND_LT_SLASHui_metadata_GT = 2,
  anon_sym_POUND_LTspec_GT = 3,
  anon_sym_POUND_LT_SLASHspec_GT = 4,
  anon_sym_POUND_LTvariables_GT = 5,
  anon_sym_POUND_LT_SLASHvariables_GT = 6,
  anon_sym_POUND_LTvariable_GT = 7,
  anon_sym_POUND_LT_SLASHvariable_GT = 8,
  aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH = 9,
  anon_sym_LT_SLASHcheck_type_GT = 10,
  aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH = 11,
  anon_sym_LT_SLASHgroup_policy_GT = 12,
  anon_sym_LTcustom_item_GT = 13,
  anon_sym_LT_SLASHcustom_item_GT = 14,
  anon_sym_LTitem_GT = 15,
  anon_sym_LT_SLASHitem_GT = 16,
  aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH = 17,
  anon_sym_LT_SLASHreport_GT = 18,
  anon_sym_LTif_GT = 19,
  anon_sym_LT_SLASHif_GT = 20,
  aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH = 21,
  anon_sym_LT_SLASHcondition_GT = 22,
  anon_sym_LTthen_GT = 23,
  anon_sym_LT_SLASHthen_GT = 24,
  anon_sym_LTelse_GT = 25,
  anon_sym_LT_SLASHelse_GT = 26,
  sym_comments = 27,
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
  sym_check_string_element_1 = 40,
  sym_check_string_element_2 = 41,
  sym_check_nonstring_element = 42,
  sym_check_empty_element = 43,
  sym_audit = 44,
  sym__statement = 45,
  sym_ui_metadata = 46,
  sym_spec_block = 47,
  sym_variable_block = 48,
  sym_variable_instance = 49,
  sym_check_type = 50,
  sym_group_policy = 51,
  sym_custom_item = 52,
  sym_builtin_item = 53,
  sym_report_item = 54,
  sym_if_block = 55,
  sym_condition_block = 56,
  sym_then_block = 57,
  sym_else_block = 58,
  aux_sym_audit_repeat1 = 59,
  aux_sym_ui_metadata_repeat1 = 60,
  aux_sym_spec_block_repeat1 = 61,
  aux_sym_variable_block_repeat1 = 62,
  aux_sym_variable_instance_repeat1 = 63,
  aux_sym_check_type_repeat1 = 64,
  aux_sym_custom_item_repeat1 = 65,
  aux_sym_condition_block_repeat1 = 66,
  aux_sym_then_block_repeat1 = 67,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
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
  [sym_comments] = "comments",
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
  [sym_check_string_element_1] = "check_string_element_1",
  [sym_check_string_element_2] = "check_string_element_2",
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
  [sym_report_item] = "report_item",
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
  [aux_sym_condition_block_repeat1] = "condition_block_repeat1",
  [aux_sym_then_block_repeat1] = "then_block_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_comments] = {
    .visible = true,
    .named = true,
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
  [sym_check_string_element_1] = {
    .visible = true,
    .named = true,
  },
  [sym_check_string_element_2] = {
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
  [sym_report_item] = {
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
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
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
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comments);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'b')
        ADVANCE(7);
      if (lookahead == 'd')
        ADVANCE(40);
      if (lookahead == 'l')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(86);
      if (lookahead == 'u')
        ADVANCE(91);
      if (lookahead == 'v')
        ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == 'e')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'n')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'c')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 'h')
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'm')
        ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'a')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'r')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'k')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '_')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'r')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'e')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'f')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 's')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '/')
        ADVANCE(24);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'b')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'n')
        ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'c')
        ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'h')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'm')
        ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'k')
        ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '_')
        ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 'f')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead == '>')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_meta_refs);
      if (lookahead == '<')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 'i')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 's')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'p')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'l')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'a')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'y')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == '_')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'n')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'm')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == '>')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 54:
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'd')
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'i')
        ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 57:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 's')
        ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'l')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 60:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'a')
        ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'y')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == '_')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'n')
        ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 64:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'm')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == 'e')
        ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 67:
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead == '>')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_meta_displayname);
      if (lookahead == '<')
        ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(53);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'b')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'e')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'l')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 's')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == '>')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 76:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '/')
        ADVANCE(78);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == 'l')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 79:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == 'a')
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == 'b')
        ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == 'l')
        ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == 's')
        ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 84:
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead == '>')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_meta_labels);
      if (lookahead == '<')
        ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(76);
      END_STATE();
    case 86:
      if (lookahead == 'p')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'e')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'c')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '>')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_POUND_LTspec_GT);
      END_STATE();
    case 91:
      if (lookahead == 'i')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == '_')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'm')
        ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'e')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 't')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'a')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'd')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'a')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 't')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'a')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == '>')
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_POUND_LTui_metadata_GT);
      END_STATE();
    case 103:
      if (lookahead == 'a')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'r')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'a')
        ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'b')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'l')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_POUND_LTvariable_GT);
      END_STATE();
    case 112:
      if (lookahead == '>')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND_LTvariables_GT);
      END_STATE();
    case 114:
      if (lookahead == '/')
        ADVANCE(115);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == 'e')
        ADVANCE(229);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      if (lookahead == 't')
        ADVANCE(286);
      END_STATE();
    case 115:
      if (lookahead == 'c')
        ADVANCE(116);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'g')
        ADVANCE(152);
      if (lookahead == 'i')
        ADVANCE(165);
      if (lookahead == 'r')
        ADVANCE(172);
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 116:
      if (lookahead == 'h')
        ADVANCE(117);
      if (lookahead == 'o')
        ADVANCE(127);
      if (lookahead == 'u')
        ADVANCE(136);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'c')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'k')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == '_')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'y')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'p')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == '>')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcheck_type_GT);
      END_STATE();
    case 127:
      if (lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'd')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'i')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 't')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'i')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'o')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'n')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == '>')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcondition_GT);
      END_STATE();
    case 136:
      if (lookahead == 's')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 't')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'o')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'm')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '_')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 'i')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 't')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'e')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'm')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == '>')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_SLASHcustom_item_GT);
      END_STATE();
    case 147:
      if (lookahead == 'l')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 's')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'e')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == '>')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT_SLASHelse_GT);
      END_STATE();
    case 152:
      if (lookahead == 'r')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'o')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'u')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'p')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == '_')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'p')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'o')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'l')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'i')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'c')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'y')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == '>')
        ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_SLASHgroup_policy_GT);
      END_STATE();
    case 165:
      if (lookahead == 'f')
        ADVANCE(166);
      if (lookahead == 't')
        ADVANCE(168);
      END_STATE();
    case 166:
      if (lookahead == '>')
        ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_SLASHif_GT);
      END_STATE();
    case 168:
      if (lookahead == 'e')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'm')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == '>')
        ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT_SLASHitem_GT);
      END_STATE();
    case 172:
      if (lookahead == 'e')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'p')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 'o')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 't')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '>')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_SLASHreport_GT);
      END_STATE();
    case 179:
      if (lookahead == 'h')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'e')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'n')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == '>')
        ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT_SLASHthen_GT);
      END_STATE();
    case 184:
      if (lookahead == 'h')
        ADVANCE(185);
      if (lookahead == 'o')
        ADVANCE(197);
      if (lookahead == 'u')
        ADVANCE(218);
      END_STATE();
    case 185:
      if (lookahead == 'e')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 'c')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'k')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == '_')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 't')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'y')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'p')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == ':')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == '>')
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH);
      END_STATE();
    case 197:
      if (lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'd')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 't')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'i')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'o')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'n')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == ' ')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 't')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'y')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'p')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'e')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == ':')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == '\"')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'A')
        ADVANCE(212);
      if (lookahead == 'O')
        ADVANCE(217);
      END_STATE();
    case 212:
      if (lookahead == 'N')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 'D')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == '\"')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == '>')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH);
      END_STATE();
    case 217:
      if (lookahead == 'R')
        ADVANCE(214);
      END_STATE();
    case 218:
      if (lookahead == 's')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 't')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 'o')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'm')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == '_')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'i')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 't')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'e')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'm')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == '>')
        ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_LTcustom_item_GT);
      END_STATE();
    case 229:
      if (lookahead == 'l')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 's')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'e')
        ADVANCE(232);
      END_STATE();
    case 232:
      if (lookahead == '>')
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LTelse_GT);
      END_STATE();
    case 234:
      if (lookahead == 'r')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'u')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'p')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == '_')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 'p')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'o')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'l')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'i')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'c')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'y')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == ':')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead != 0 &&
          lookahead != '>')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == '>')
        ADVANCE(248);
      if (lookahead != 0)
        ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH);
      END_STATE();
    case 249:
      if (lookahead == 'f')
        ADVANCE(250);
      if (lookahead == 't')
        ADVANCE(252);
      END_STATE();
    case 250:
      if (lookahead == '>')
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LTif_GT);
      END_STATE();
    case 252:
      if (lookahead == 'e')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'm')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == '>')
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LTitem_GT);
      END_STATE();
    case 256:
      if (lookahead == 'e')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'p')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'o')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'r')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 't')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == ' ')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 't')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'y')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'p')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'e')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == ':')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == '\"')
        ADVANCE(268);
      END_STATE();
    case 268:
      if (lookahead == 'F')
        ADVANCE(269);
      if (lookahead == 'P')
        ADVANCE(277);
      if (lookahead == 'W')
        ADVANCE(280);
      END_STATE();
    case 269:
      if (lookahead == 'A')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'I')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'L')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'E')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'D')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == '\"')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == '>')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH);
      END_STATE();
    case 277:
      if (lookahead == 'A')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'S')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'S')
        ADVANCE(272);
      END_STATE();
    case 280:
      if (lookahead == 'A')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'R')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'N')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'I')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'N')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'G')
        ADVANCE(274);
      END_STATE();
    case 286:
      if (lookahead == 'h')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'e')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'n')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == '>')
        ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LTthen_GT);
      END_STATE();
    case 291:
      if (lookahead == ' ')
        ADVANCE(292);
      if (lookahead == ':')
        ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == ' ')
        ADVANCE(292);
      if (lookahead == ':')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == ' ')
        ADVANCE(293);
      if (lookahead == '\"')
        ADVANCE(294);
      if (lookahead == '\'')
        ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 294:
      if (lookahead == '\"')
        ADVANCE(295);
      if (lookahead == '\\')
        ADVANCE(296);
      if (lookahead != 0)
        ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_check_empty_element);
      END_STATE();
    case 296:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\"')
        ADVANCE(301);
      if (lookahead != 0)
        ADVANCE(300);
      END_STATE();
    case 297:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\"')
        ADVANCE(298);
      if (lookahead != 0)
        ADVANCE(300);
      END_STATE();
    case 298:
      if (lookahead == '\"')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_check_string_element_1);
      if (lookahead == '\"')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(298);
      END_STATE();
    case 300:
      if (lookahead == '\n')
        ADVANCE(297);
      if (lookahead == '\"')
        ADVANCE(299);
      if (lookahead != 0)
        ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == '\"')
        ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(298);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_check_string_element_1);
      if (lookahead == '\"')
        ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(298);
      END_STATE();
    case 303:
      if (lookahead == '\\')
        ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(305);
      END_STATE();
    case 304:
      if (lookahead == '\n')
        ADVANCE(305);
      if (lookahead == '\'')
        ADVANCE(309);
      if (lookahead != 0)
        ADVANCE(308);
      END_STATE();
    case 305:
      if (lookahead == '\n')
        ADVANCE(305);
      if (lookahead == '\'')
        ADVANCE(306);
      if (lookahead != 0)
        ADVANCE(308);
      END_STATE();
    case 306:
      if (lookahead == '\'')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_check_string_element_2);
      if (lookahead == '\'')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(306);
      END_STATE();
    case 308:
      if (lookahead == '\n')
        ADVANCE(305);
      if (lookahead == '\'')
        ADVANCE(307);
      if (lookahead != 0)
        ADVANCE(308);
      END_STATE();
    case 309:
      if (lookahead == '\'')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(306);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_check_string_element_2);
      if (lookahead == '\'')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(306);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_check_nonstring_element);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(311);
      END_STATE();
    case 312:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(313);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 313:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(313);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 314:
      if (lookahead == 'c')
        ADVANCE(315);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 315:
      if (lookahead == 'h')
        ADVANCE(185);
      if (lookahead == 'u')
        ADVANCE(218);
      END_STATE();
    case 316:
      if (lookahead == '#')
        ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(316);
      END_STATE();
    case 317:
      if (lookahead == '<')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == '/')
        ADVANCE(319);
      if (lookahead == 'b')
        ADVANCE(7);
      if (lookahead == 'd')
        ADVANCE(40);
      if (lookahead == 'l')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(86);
      if (lookahead == 'v')
        ADVANCE(332);
      END_STATE();
    case 319:
      if (lookahead == 'u')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'i')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == '_')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'm')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'e')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 't')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'a')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'd')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'a')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'a')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == '>')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHui_metadata_GT);
      END_STATE();
    case 332:
      if (lookahead == 'a')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'r')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'i')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'a')
        ADVANCE(336);
      END_STATE();
    case 336:
      if (lookahead == 'b')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'l')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'e')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 's')
        ADVANCE(112);
      END_STATE();
    case 340:
      if (lookahead == '#')
        ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(340);
      END_STATE();
    case 341:
      if (lookahead == ' ')
        ADVANCE(342);
      if (lookahead == '<')
        ADVANCE(402);
      END_STATE();
    case 342:
      if (lookahead == ' ')
        ADVANCE(342);
      if (lookahead == '<')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'l')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(357);
      if (lookahead == 't')
        ADVANCE(370);
      if (lookahead == 'v')
        ADVANCE(383);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'n')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'k')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == '>')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 350:
      if (lookahead == '/')
        ADVANCE(351);
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead == 'l')
        ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 352:
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead == 'i')
        ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 353:
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead == 'n')
        ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 354:
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead == 'k')
        ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 355:
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead == '>')
        ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_spec_link);
      if (lookahead == '<')
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(349);
      END_STATE();
    case 357:
      if (lookahead == 'a')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'm')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == 'e')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == '>')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 362:
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 363:
      if (lookahead == '/')
        ADVANCE(364);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 364:
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == 'n')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 365:
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 366:
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == 'm')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 367:
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 368:
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead == '>')
        ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_spec_name);
      if (lookahead == '<')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(362);
      END_STATE();
    case 370:
      if (lookahead == 'y')
        ADVANCE(371);
      END_STATE();
    case 371:
      if (lookahead == 'p')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'e')
        ADVANCE(373);
      END_STATE();
    case 373:
      if (lookahead == '>')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 375:
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 376:
      if (lookahead == '/')
        ADVANCE(377);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 377:
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == 't')
        ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 378:
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == 'y')
        ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 379:
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == 'p')
        ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 380:
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == 'e')
        ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 381:
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead == '>')
        ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_spec_type);
      if (lookahead == '<')
        ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(375);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'r')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 's')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'i')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'o')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'n')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == '>')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 392:
      if (lookahead == '/')
        ADVANCE(393);
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 393:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 'v')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 394:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 'e')
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 395:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 'r')
        ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 396:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 's')
        ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 397:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 'i')
        ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 398:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 'o')
        ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 399:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == 'n')
        ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 400:
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead == '>')
        ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_spec_version);
      if (lookahead == '<')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(391);
      END_STATE();
    case 402:
      if (lookahead == '/')
        ADVANCE(403);
      if (lookahead == 'l')
        ADVANCE(344);
      if (lookahead == 'n')
        ADVANCE(357);
      if (lookahead == 't')
        ADVANCE(370);
      if (lookahead == 'v')
        ADVANCE(383);
      END_STATE();
    case 403:
      if (lookahead == 's')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 'p')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'e')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'c')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == '>')
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHspec_GT);
      END_STATE();
    case 409:
      if (lookahead == '#')
        ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(409);
      END_STATE();
    case 410:
      if (lookahead == '<')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == '/')
        ADVANCE(412);
      if (lookahead == 'v')
        ADVANCE(423);
      END_STATE();
    case 412:
      if (lookahead == 'v')
        ADVANCE(413);
      END_STATE();
    case 413:
      if (lookahead == 'a')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'r')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'i')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'a')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'b')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'l')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'e')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 's')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == '>')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHvariables_GT);
      END_STATE();
    case 423:
      if (lookahead == 'a')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'r')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'i')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'a')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'b')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'l')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'e')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == '>')
        ADVANCE(111);
      END_STATE();
    case 431:
      if (lookahead == '#')
        ADVANCE(432);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(431);
      END_STATE();
    case 432:
      if (lookahead == '<')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == '/')
        ADVANCE(434);
      if (lookahead == 'd')
        ADVANCE(444);
      if (lookahead == 'i')
        ADVANCE(488);
      if (lookahead == 'n')
        ADVANCE(501);
      if (lookahead == 'o')
        ADVANCE(514);
      END_STATE();
    case 434:
      if (lookahead == 'v')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'a')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'r')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'i')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'a')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'b')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'l')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == '>')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_POUND_LT_SLASHvariable_GT);
      END_STATE();
    case 444:
      if (lookahead == 'e')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'f')
        ADVANCE(446);
      if (lookahead == 's')
        ADVANCE(463);
      END_STATE();
    case 446:
      if (lookahead == 'a')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'u')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'l')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 't')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == '>')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 453:
      if (lookahead == '/')
        ADVANCE(454);
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 454:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 'd')
        ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 455:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 'e')
        ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 456:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 'f')
        ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 457:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 458:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 'u')
        ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 459:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 'l')
        ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 460:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == 't')
        ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 461:
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead == '>')
        ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_default);
      if (lookahead == '<')
        ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(452);
      END_STATE();
    case 463:
      if (lookahead == 'c')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'r')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'i')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'p')
        ADVANCE(467);
      END_STATE();
    case 467:
      if (lookahead == 't')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'i')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'o')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 'n')
        ADVANCE(471);
      END_STATE();
    case 471:
      if (lookahead == '>')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 474:
      if (lookahead == '/')
        ADVANCE(475);
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 475:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'd')
        ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 476:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'e')
        ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 477:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 's')
        ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 478:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'c')
        ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 479:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'r')
        ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 480:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'i')
        ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 481:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'p')
        ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 482:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 't')
        ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 483:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'i')
        ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 484:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'o')
        ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 485:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == 'n')
        ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 486:
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead == '>')
        ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_variable_description);
      if (lookahead == '<')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(473);
      END_STATE();
    case 488:
      if (lookahead == 'n')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'f')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'o')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == '>')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 494:
      if (lookahead == '/')
        ADVANCE(495);
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 495:
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead == 'i')
        ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 496:
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead == 'n')
        ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 497:
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead == 'f')
        ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 498:
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead == 'o')
        ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 499:
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead == '>')
        ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_variable_info);
      if (lookahead == '<')
        ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(493);
      END_STATE();
    case 501:
      if (lookahead == 'a')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'm')
        ADVANCE(503);
      END_STATE();
    case 503:
      if (lookahead == 'e')
        ADVANCE(504);
      END_STATE();
    case 504:
      if (lookahead == '>')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 506:
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 507:
      if (lookahead == '/')
        ADVANCE(508);
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 508:
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 509:
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead == 'a')
        ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 510:
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead == 'm')
        ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 511:
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead == 'e')
        ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 512:
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead == '>')
        ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '<')
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(506);
      END_STATE();
    case 514:
      if (lookahead == 'p')
        ADVANCE(515);
      END_STATE();
    case 515:
      if (lookahead == 't')
        ADVANCE(516);
      END_STATE();
    case 516:
      if (lookahead == 'i')
        ADVANCE(517);
      END_STATE();
    case 517:
      if (lookahead == 'o')
        ADVANCE(518);
      END_STATE();
    case 518:
      if (lookahead == 'n')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 'a')
        ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == 'l')
        ADVANCE(521);
      END_STATE();
    case 521:
      if (lookahead == ' ')
        ADVANCE(522);
      END_STATE();
    case 522:
      if (lookahead == '/')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == '>')
        ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_variable_optional);
      END_STATE();
    case 525:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(526);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(525);
      END_STATE();
    case 526:
      if (lookahead == '/')
        ADVANCE(527);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 527:
      if (lookahead == 'c')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == 'h')
        ADVANCE(117);
      END_STATE();
    case 529:
      if (lookahead == 'u')
        ADVANCE(218);
      END_STATE();
    case 530:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(531);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(530);
      END_STATE();
    case 531:
      if (lookahead == '/')
        ADVANCE(532);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 532:
      if (lookahead == 'g')
        ADVANCE(152);
      END_STATE();
    case 533:
      if (lookahead == ' ')
        ADVANCE(534);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 534:
      if (lookahead == ' ')
        ADVANCE(534);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 535:
      if (lookahead == '/')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 'c')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 'u')
        ADVANCE(136);
      END_STATE();
    case 538:
      if (lookahead == ' ')
        ADVANCE(539);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 539:
      if (lookahead == ' ')
        ADVANCE(539);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 540:
      if (lookahead == '/')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'i')
        ADVANCE(542);
      END_STATE();
    case 542:
      if (lookahead == 't')
        ADVANCE(168);
      END_STATE();
    case 543:
      if (lookahead == ' ')
        ADVANCE(544);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 544:
      if (lookahead == ' ')
        ADVANCE(544);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 545:
      if (lookahead == '/')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 547:
      if (lookahead == '<')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(547);
      END_STATE();
    case 548:
      if (lookahead == 'c')
        ADVANCE(549);
      END_STATE();
    case 549:
      if (lookahead == 'o')
        ADVANCE(197);
      END_STATE();
    case 550:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(551);
      if (lookahead == '#')
        ADVANCE(552);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 551:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(551);
      if (lookahead == '#')
        ADVANCE(552);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 552:
      if (lookahead == '<')
        ADVANCE(6);
      END_STATE();
    case 553:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(553);
      END_STATE();
    case 554:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(555);
      if (lookahead == '#')
        ADVANCE(556);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 555:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(555);
      if (lookahead == '#')
        ADVANCE(556);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 556:
      if (lookahead == '<')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == '/')
        ADVANCE(319);
      if (lookahead == 'b')
        ADVANCE(7);
      if (lookahead == 'd')
        ADVANCE(40);
      if (lookahead == 'l')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(86);
      if (lookahead == 'u')
        ADVANCE(91);
      if (lookahead == 'v')
        ADVANCE(103);
      END_STATE();
    case 558:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(559);
      if (lookahead == '#')
        ADVANCE(560);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 559:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == ' ')
        ADVANCE(559);
      if (lookahead == '#')
        ADVANCE(560);
      if (lookahead == '<')
        ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r')
        SKIP(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(291);
      END_STATE();
    case 560:
      if (lookahead == '<')
        ADVANCE(561);
      END_STATE();
    case 561:
      if (lookahead == '/')
        ADVANCE(412);
      if (lookahead == 'b')
        ADVANCE(7);
      if (lookahead == 'd')
        ADVANCE(40);
      if (lookahead == 'l')
        ADVANCE(69);
      if (lookahead == 's')
        ADVANCE(86);
      if (lookahead == 'u')
        ADVANCE(91);
      if (lookahead == 'v')
        ADVANCE(103);
      END_STATE();
    case 562:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(562);
      END_STATE();
    case 563:
      if (lookahead == '/')
        ADVANCE(564);
      if (lookahead == 'c')
        ADVANCE(529);
      END_STATE();
    case 564:
      if (lookahead == 'c')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 566:
      if (lookahead == '<')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(566);
      END_STATE();
    case 567:
      if (lookahead == 't')
        ADVANCE(286);
      END_STATE();
    case 568:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(568);
      END_STATE();
    case 569:
      if (lookahead == '/')
        ADVANCE(570);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 570:
      if (lookahead == 'c')
        ADVANCE(528);
      if (lookahead == 'g')
        ADVANCE(152);
      END_STATE();
    case 571:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(571);
      END_STATE();
    case 572:
      if (lookahead == '/')
        ADVANCE(573);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 573:
      if (lookahead == 'c')
        ADVANCE(574);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'g')
        ADVANCE(152);
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 574:
      if (lookahead == 'h')
        ADVANCE(117);
      if (lookahead == 'o')
        ADVANCE(127);
      END_STATE();
    case 575:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(575);
      END_STATE();
    case 576:
      if (lookahead == '/')
        ADVANCE(577);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'g')
        ADVANCE(234);
      if (lookahead == 'i')
        ADVANCE(249);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 577:
      if (lookahead == 'c')
        ADVANCE(528);
      if (lookahead == 'e')
        ADVANCE(147);
      if (lookahead == 'g')
        ADVANCE(152);
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 578:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(578);
      END_STATE();
    case 579:
      if (lookahead == '/')
        ADVANCE(580);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'i')
        ADVANCE(581);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 580:
      if (lookahead == 't')
        ADVANCE(179);
      END_STATE();
    case 581:
      if (lookahead == 't')
        ADVANCE(252);
      END_STATE();
    case 582:
      if (lookahead == '<')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(582);
      END_STATE();
    case 583:
      if (lookahead == 'e')
        ADVANCE(229);
      END_STATE();
    case 584:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '<')
        ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(584);
      END_STATE();
    case 585:
      if (lookahead == '/')
        ADVANCE(586);
      if (lookahead == 'c')
        ADVANCE(529);
      if (lookahead == 'i')
        ADVANCE(581);
      if (lookahead == 'r')
        ADVANCE(256);
      END_STATE();
    case 586:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 587:
      if (lookahead == '<')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(587);
      END_STATE();
    case 588:
      if (lookahead == '/')
        ADVANCE(589);
      END_STATE();
    case 589:
      if (lookahead == 'i')
        ADVANCE(590);
      END_STATE();
    case 590:
      if (lookahead == 'f')
        ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 312},
  [2] = {.lex_state = 316},
  [3] = {.lex_state = 340},
  [4] = {.lex_state = 409},
  [5] = {.lex_state = 431},
  [6] = {.lex_state = 525},
  [7] = {.lex_state = 530},
  [8] = {.lex_state = 533},
  [9] = {.lex_state = 538},
  [10] = {.lex_state = 543},
  [11] = {.lex_state = 547},
  [12] = {.lex_state = 550},
  [13] = {.lex_state = 553},
  [14] = {.lex_state = 550},
  [15] = {.lex_state = 550},
  [16] = {.lex_state = 316},
  [17] = {.lex_state = 554},
  [18] = {.lex_state = 340},
  [19] = {.lex_state = 554},
  [20] = {.lex_state = 409},
  [21] = {.lex_state = 558},
  [22] = {.lex_state = 431},
  [23] = {.lex_state = 550},
  [24] = {.lex_state = 530},
  [25] = {.lex_state = 533},
  [26] = {.lex_state = 538},
  [27] = {.lex_state = 543},
  [28] = {.lex_state = 547},
  [29] = {.lex_state = 525},
  [30] = {.lex_state = 550},
  [31] = {.lex_state = 530},
  [32] = {.lex_state = 550},
  [33] = {.lex_state = 533},
  [34] = {.lex_state = 550},
  [35] = {.lex_state = 538},
  [36] = {.lex_state = 550},
  [37] = {.lex_state = 543},
  [38] = {.lex_state = 562},
  [39] = {.lex_state = 566},
  [40] = {.lex_state = 550},
  [41] = {.lex_state = 550},
  [42] = {.lex_state = 550},
  [43] = {.lex_state = 316},
  [44] = {.lex_state = 554},
  [45] = {.lex_state = 340},
  [46] = {.lex_state = 554},
  [47] = {.lex_state = 409},
  [48] = {.lex_state = 558},
  [49] = {.lex_state = 431},
  [50] = {.lex_state = 568},
  [51] = {.lex_state = 530},
  [52] = {.lex_state = 571},
  [53] = {.lex_state = 533},
  [54] = {.lex_state = 575},
  [55] = {.lex_state = 538},
  [56] = {.lex_state = 575},
  [57] = {.lex_state = 543},
  [58] = {.lex_state = 566},
  [59] = {.lex_state = 550},
  [60] = {.lex_state = 525},
  [61] = {.lex_state = 550},
  [62] = {.lex_state = 530},
  [63] = {.lex_state = 550},
  [64] = {.lex_state = 533},
  [65] = {.lex_state = 550},
  [66] = {.lex_state = 538},
  [67] = {.lex_state = 550},
  [68] = {.lex_state = 543},
  [69] = {.lex_state = 566},
  [70] = {.lex_state = 562},
  [71] = {.lex_state = 578},
  [72] = {.lex_state = 582},
  [73] = {.lex_state = 568},
  [74] = {.lex_state = 571},
  [75] = {.lex_state = 575},
  [76] = {.lex_state = 575},
  [77] = {.lex_state = 582},
  [78] = {.lex_state = 566},
  [79] = {.lex_state = 562},
  [80] = {.lex_state = 582},
  [81] = {.lex_state = 578},
  [82] = {.lex_state = 584},
  [83] = {.lex_state = 587},
  [84] = {.lex_state = 587},
  [85] = {.lex_state = 582},
  [86] = {.lex_state = 578},
  [87] = {.lex_state = 587},
  [88] = {.lex_state = 584},
  [89] = {.lex_state = 550},
  [90] = {.lex_state = 568},
  [91] = {.lex_state = 587},
  [92] = {.lex_state = 584},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(1),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(1),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(1),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(1),
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
    [sym_comments] = ACTIONS(3),
    [sym_meta_displayname] = ACTIONS(1),
    [sym_meta_labels] = ACTIONS(1),
    [sym_meta_refs] = ACTIONS(1),
    [sym_check_string_element_1] = ACTIONS(1),
    [sym_check_string_element_2] = ACTIONS(1),
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
    [sym_report_item] = STATE(14),
    [sym_if_block] = STATE(14),
    [aux_sym_audit_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(7),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(9),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(13),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [anon_sym_LTcustom_item_GT] = ACTIONS(19),
    [anon_sym_LTitem_GT] = ACTIONS(21),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(23),
    [anon_sym_LTif_GT] = ACTIONS(25),
    [sym_comments] = ACTIONS(27),
    [sym_meta_displayname] = ACTIONS(29),
    [sym_meta_labels] = ACTIONS(29),
    [sym_meta_refs] = ACTIONS(29),
    [sym_check_string_element_1] = ACTIONS(29),
    [sym_check_string_element_2] = ACTIONS(29),
    [sym_check_nonstring_element] = ACTIONS(29),
    [sym_check_empty_element] = ACTIONS(29),
  },
  [2] = {
    [sym_spec_block] = STATE(16),
    [sym_variable_block] = STATE(16),
    [aux_sym_ui_metadata_repeat1] = STATE(16),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(31),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(9),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(11),
    [sym_meta_displayname] = ACTIONS(33),
    [sym_meta_labels] = ACTIONS(33),
    [sym_meta_refs] = ACTIONS(33),
  },
  [3] = {
    [aux_sym_spec_block_repeat1] = STATE(18),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(35),
    [sym_spec_type] = ACTIONS(37),
    [sym_spec_name] = ACTIONS(37),
    [sym_spec_version] = ACTIONS(37),
    [sym_spec_link] = ACTIONS(37),
  },
  [4] = {
    [sym_variable_instance] = STATE(20),
    [aux_sym_variable_block_repeat1] = STATE(20),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(39),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(13),
  },
  [5] = {
    [aux_sym_variable_instance_repeat1] = STATE(22),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(41),
    [sym_variable_name] = ACTIONS(43),
    [sym_variable_default] = ACTIONS(43),
    [sym_variable_description] = ACTIONS(43),
    [sym_variable_info] = ACTIONS(43),
    [sym_variable_optional] = ACTIONS(43),
  },
  [6] = {
    [sym_group_policy] = STATE(29),
    [sym_custom_item] = STATE(29),
    [sym_builtin_item] = STATE(29),
    [sym_report_item] = STATE(29),
    [sym_if_block] = STATE(29),
    [aux_sym_check_type_repeat1] = STATE(29),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(45),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(47),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LTif_GT] = ACTIONS(55),
    [sym_comments] = ACTIONS(57),
  },
  [7] = {
    [sym_group_policy] = STATE(31),
    [sym_custom_item] = STATE(31),
    [sym_builtin_item] = STATE(31),
    [sym_report_item] = STATE(31),
    [sym_if_block] = STATE(31),
    [aux_sym_check_type_repeat1] = STATE(31),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(47),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(59),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LTif_GT] = ACTIONS(55),
    [sym_comments] = ACTIONS(61),
  },
  [8] = {
    [aux_sym_custom_item_repeat1] = STATE(33),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(63),
    [sym_comments] = ACTIONS(65),
    [sym_check_string_element_1] = ACTIONS(65),
    [sym_check_string_element_2] = ACTIONS(65),
    [sym_check_nonstring_element] = ACTIONS(65),
    [sym_check_empty_element] = ACTIONS(65),
  },
  [9] = {
    [aux_sym_custom_item_repeat1] = STATE(35),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(67),
    [sym_comments] = ACTIONS(69),
    [sym_check_string_element_1] = ACTIONS(69),
    [sym_check_string_element_2] = ACTIONS(69),
    [sym_check_nonstring_element] = ACTIONS(69),
    [sym_check_empty_element] = ACTIONS(69),
  },
  [10] = {
    [aux_sym_custom_item_repeat1] = STATE(37),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(71),
    [sym_comments] = ACTIONS(73),
    [sym_check_string_element_1] = ACTIONS(73),
    [sym_check_string_element_2] = ACTIONS(73),
    [sym_check_nonstring_element] = ACTIONS(73),
    [sym_check_empty_element] = ACTIONS(73),
  },
  [11] = {
    [sym_condition_block] = STATE(39),
    [aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(75),
  },
  [12] = {
    [sym__statement] = STATE(40),
    [sym_ui_metadata] = STATE(40),
    [sym_spec_block] = STATE(40),
    [sym_variable_block] = STATE(40),
    [sym_variable_instance] = STATE(40),
    [sym_check_type] = STATE(40),
    [sym_group_policy] = STATE(40),
    [sym_custom_item] = STATE(40),
    [sym_builtin_item] = STATE(40),
    [sym_report_item] = STATE(40),
    [sym_if_block] = STATE(40),
    [aux_sym_audit_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(7),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(9),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(13),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [anon_sym_LTcustom_item_GT] = ACTIONS(19),
    [anon_sym_LTitem_GT] = ACTIONS(21),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(23),
    [anon_sym_LTif_GT] = ACTIONS(25),
    [sym_meta_displayname] = ACTIONS(79),
    [sym_meta_labels] = ACTIONS(79),
    [sym_meta_refs] = ACTIONS(79),
    [sym_check_string_element_1] = ACTIONS(79),
    [sym_check_string_element_2] = ACTIONS(79),
    [sym_check_nonstring_element] = ACTIONS(79),
    [sym_check_empty_element] = ACTIONS(79),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(81),
  },
  [14] = {
    [sym__statement] = STATE(41),
    [sym_ui_metadata] = STATE(41),
    [sym_spec_block] = STATE(41),
    [sym_variable_block] = STATE(41),
    [sym_variable_instance] = STATE(41),
    [sym_check_type] = STATE(41),
    [sym_group_policy] = STATE(41),
    [sym_custom_item] = STATE(41),
    [sym_builtin_item] = STATE(41),
    [sym_report_item] = STATE(41),
    [sym_if_block] = STATE(41),
    [aux_sym_audit_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(7),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(9),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(13),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [anon_sym_LTcustom_item_GT] = ACTIONS(19),
    [anon_sym_LTitem_GT] = ACTIONS(21),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(23),
    [anon_sym_LTif_GT] = ACTIONS(25),
    [sym_meta_displayname] = ACTIONS(83),
    [sym_meta_labels] = ACTIONS(83),
    [sym_meta_refs] = ACTIONS(83),
    [sym_check_string_element_1] = ACTIONS(83),
    [sym_check_string_element_2] = ACTIONS(83),
    [sym_check_nonstring_element] = ACTIONS(83),
    [sym_check_empty_element] = ACTIONS(83),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(85),
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
    [sym_check_string_element_1] = ACTIONS(85),
    [sym_check_string_element_2] = ACTIONS(85),
    [sym_check_nonstring_element] = ACTIONS(85),
    [sym_check_empty_element] = ACTIONS(85),
  },
  [16] = {
    [sym_spec_block] = STATE(43),
    [sym_variable_block] = STATE(43),
    [aux_sym_ui_metadata_repeat1] = STATE(43),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(87),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(9),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(11),
    [sym_meta_displayname] = ACTIONS(89),
    [sym_meta_labels] = ACTIONS(89),
    [sym_meta_refs] = ACTIONS(89),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(91),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(91),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(91),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(91),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(91),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(91),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(91),
    [anon_sym_LTcustom_item_GT] = ACTIONS(91),
    [anon_sym_LTitem_GT] = ACTIONS(91),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(91),
    [anon_sym_LTif_GT] = ACTIONS(91),
    [sym_meta_displayname] = ACTIONS(91),
    [sym_meta_labels] = ACTIONS(91),
    [sym_meta_refs] = ACTIONS(91),
    [sym_check_string_element_1] = ACTIONS(91),
    [sym_check_string_element_2] = ACTIONS(91),
    [sym_check_nonstring_element] = ACTIONS(91),
    [sym_check_empty_element] = ACTIONS(91),
  },
  [18] = {
    [aux_sym_spec_block_repeat1] = STATE(45),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(93),
    [sym_spec_type] = ACTIONS(95),
    [sym_spec_name] = ACTIONS(95),
    [sym_spec_version] = ACTIONS(95),
    [sym_spec_link] = ACTIONS(95),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(97),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(97),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(97),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(97),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(97),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(97),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(97),
    [anon_sym_LTcustom_item_GT] = ACTIONS(97),
    [anon_sym_LTitem_GT] = ACTIONS(97),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(97),
    [anon_sym_LTif_GT] = ACTIONS(97),
    [sym_meta_displayname] = ACTIONS(97),
    [sym_meta_labels] = ACTIONS(97),
    [sym_meta_refs] = ACTIONS(97),
    [sym_check_string_element_1] = ACTIONS(97),
    [sym_check_string_element_2] = ACTIONS(97),
    [sym_check_nonstring_element] = ACTIONS(97),
    [sym_check_empty_element] = ACTIONS(97),
  },
  [20] = {
    [sym_variable_instance] = STATE(47),
    [aux_sym_variable_block_repeat1] = STATE(47),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(99),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(13),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(101),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(101),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(101),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(101),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(101),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(101),
    [anon_sym_LTcustom_item_GT] = ACTIONS(101),
    [anon_sym_LTitem_GT] = ACTIONS(101),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(101),
    [anon_sym_LTif_GT] = ACTIONS(101),
    [sym_meta_displayname] = ACTIONS(101),
    [sym_meta_labels] = ACTIONS(101),
    [sym_meta_refs] = ACTIONS(101),
    [sym_check_string_element_1] = ACTIONS(101),
    [sym_check_string_element_2] = ACTIONS(101),
    [sym_check_nonstring_element] = ACTIONS(101),
    [sym_check_empty_element] = ACTIONS(101),
  },
  [22] = {
    [aux_sym_variable_instance_repeat1] = STATE(49),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(103),
    [sym_variable_name] = ACTIONS(105),
    [sym_variable_default] = ACTIONS(105),
    [sym_variable_description] = ACTIONS(105),
    [sym_variable_info] = ACTIONS(105),
    [sym_variable_optional] = ACTIONS(105),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(107),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(107),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(107),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(107),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(107),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(107),
    [anon_sym_LTcustom_item_GT] = ACTIONS(107),
    [anon_sym_LTitem_GT] = ACTIONS(107),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(107),
    [anon_sym_LTif_GT] = ACTIONS(107),
    [sym_meta_displayname] = ACTIONS(107),
    [sym_meta_labels] = ACTIONS(107),
    [sym_meta_refs] = ACTIONS(107),
    [sym_check_string_element_1] = ACTIONS(107),
    [sym_check_string_element_2] = ACTIONS(107),
    [sym_check_nonstring_element] = ACTIONS(107),
    [sym_check_empty_element] = ACTIONS(107),
  },
  [24] = {
    [sym_group_policy] = STATE(51),
    [sym_custom_item] = STATE(51),
    [sym_builtin_item] = STATE(51),
    [sym_report_item] = STATE(51),
    [sym_if_block] = STATE(51),
    [aux_sym_check_type_repeat1] = STATE(51),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(47),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(109),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LTif_GT] = ACTIONS(55),
    [sym_comments] = ACTIONS(111),
  },
  [25] = {
    [aux_sym_custom_item_repeat1] = STATE(53),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(113),
    [sym_comments] = ACTIONS(115),
    [sym_check_string_element_1] = ACTIONS(115),
    [sym_check_string_element_2] = ACTIONS(115),
    [sym_check_nonstring_element] = ACTIONS(115),
    [sym_check_empty_element] = ACTIONS(115),
  },
  [26] = {
    [aux_sym_custom_item_repeat1] = STATE(55),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(117),
    [sym_comments] = ACTIONS(119),
    [sym_check_string_element_1] = ACTIONS(119),
    [sym_check_string_element_2] = ACTIONS(119),
    [sym_check_nonstring_element] = ACTIONS(119),
    [sym_check_empty_element] = ACTIONS(119),
  },
  [27] = {
    [aux_sym_custom_item_repeat1] = STATE(57),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(121),
    [sym_comments] = ACTIONS(123),
    [sym_check_string_element_1] = ACTIONS(123),
    [sym_check_string_element_2] = ACTIONS(123),
    [sym_check_nonstring_element] = ACTIONS(123),
    [sym_check_empty_element] = ACTIONS(123),
  },
  [28] = {
    [sym_condition_block] = STATE(58),
    [aux_sym_SLASH_LTconditiontype_COLON_DQUOTE_LPARENAND_PIPEOR_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(75),
  },
  [29] = {
    [sym_group_policy] = STATE(60),
    [sym_custom_item] = STATE(60),
    [sym_builtin_item] = STATE(60),
    [sym_report_item] = STATE(60),
    [sym_if_block] = STATE(60),
    [aux_sym_check_type_repeat1] = STATE(60),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(125),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(47),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LTif_GT] = ACTIONS(55),
    [sym_comments] = ACTIONS(127),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(129),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(129),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(129),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(129),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(129),
    [anon_sym_LTcustom_item_GT] = ACTIONS(129),
    [anon_sym_LTitem_GT] = ACTIONS(129),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(129),
    [anon_sym_LTif_GT] = ACTIONS(129),
    [sym_meta_displayname] = ACTIONS(129),
    [sym_meta_labels] = ACTIONS(129),
    [sym_meta_refs] = ACTIONS(129),
    [sym_check_string_element_1] = ACTIONS(129),
    [sym_check_string_element_2] = ACTIONS(129),
    [sym_check_nonstring_element] = ACTIONS(129),
    [sym_check_empty_element] = ACTIONS(129),
  },
  [31] = {
    [sym_group_policy] = STATE(62),
    [sym_custom_item] = STATE(62),
    [sym_builtin_item] = STATE(62),
    [sym_report_item] = STATE(62),
    [sym_if_block] = STATE(62),
    [aux_sym_check_type_repeat1] = STATE(62),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(47),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(131),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LTif_GT] = ACTIONS(55),
    [sym_comments] = ACTIONS(133),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(135),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(135),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(135),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(135),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(135),
    [anon_sym_LTcustom_item_GT] = ACTIONS(135),
    [anon_sym_LTitem_GT] = ACTIONS(135),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(135),
    [anon_sym_LTif_GT] = ACTIONS(135),
    [sym_meta_displayname] = ACTIONS(135),
    [sym_meta_labels] = ACTIONS(135),
    [sym_meta_refs] = ACTIONS(135),
    [sym_check_string_element_1] = ACTIONS(135),
    [sym_check_string_element_2] = ACTIONS(135),
    [sym_check_nonstring_element] = ACTIONS(135),
    [sym_check_empty_element] = ACTIONS(135),
  },
  [33] = {
    [aux_sym_custom_item_repeat1] = STATE(64),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(137),
    [sym_comments] = ACTIONS(139),
    [sym_check_string_element_1] = ACTIONS(139),
    [sym_check_string_element_2] = ACTIONS(139),
    [sym_check_nonstring_element] = ACTIONS(139),
    [sym_check_empty_element] = ACTIONS(139),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(141),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(141),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(141),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(141),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(141),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(141),
    [anon_sym_LTcustom_item_GT] = ACTIONS(141),
    [anon_sym_LTitem_GT] = ACTIONS(141),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(141),
    [anon_sym_LTif_GT] = ACTIONS(141),
    [sym_meta_displayname] = ACTIONS(141),
    [sym_meta_labels] = ACTIONS(141),
    [sym_meta_refs] = ACTIONS(141),
    [sym_check_string_element_1] = ACTIONS(141),
    [sym_check_string_element_2] = ACTIONS(141),
    [sym_check_nonstring_element] = ACTIONS(141),
    [sym_check_empty_element] = ACTIONS(141),
  },
  [35] = {
    [aux_sym_custom_item_repeat1] = STATE(66),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(143),
    [sym_comments] = ACTIONS(145),
    [sym_check_string_element_1] = ACTIONS(145),
    [sym_check_string_element_2] = ACTIONS(145),
    [sym_check_nonstring_element] = ACTIONS(145),
    [sym_check_empty_element] = ACTIONS(145),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(147),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(147),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(147),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(147),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(147),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(147),
    [anon_sym_LTcustom_item_GT] = ACTIONS(147),
    [anon_sym_LTitem_GT] = ACTIONS(147),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(147),
    [anon_sym_LTif_GT] = ACTIONS(147),
    [sym_meta_displayname] = ACTIONS(147),
    [sym_meta_labels] = ACTIONS(147),
    [sym_meta_refs] = ACTIONS(147),
    [sym_check_string_element_1] = ACTIONS(147),
    [sym_check_string_element_2] = ACTIONS(147),
    [sym_check_nonstring_element] = ACTIONS(147),
    [sym_check_empty_element] = ACTIONS(147),
  },
  [37] = {
    [aux_sym_custom_item_repeat1] = STATE(68),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(149),
    [sym_comments] = ACTIONS(151),
    [sym_check_string_element_1] = ACTIONS(151),
    [sym_check_string_element_2] = ACTIONS(151),
    [sym_check_nonstring_element] = ACTIONS(151),
    [sym_check_empty_element] = ACTIONS(151),
  },
  [38] = {
    [sym_custom_item] = STATE(70),
    [aux_sym_condition_block_repeat1] = STATE(70),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(153),
    [sym_comments] = ACTIONS(155),
  },
  [39] = {
    [sym_then_block] = STATE(72),
    [anon_sym_LTthen_GT] = ACTIONS(157),
  },
  [40] = {
    [sym__statement] = STATE(41),
    [sym_ui_metadata] = STATE(41),
    [sym_spec_block] = STATE(41),
    [sym_variable_block] = STATE(41),
    [sym_variable_instance] = STATE(41),
    [sym_check_type] = STATE(41),
    [sym_group_policy] = STATE(41),
    [sym_custom_item] = STATE(41),
    [sym_builtin_item] = STATE(41),
    [sym_report_item] = STATE(41),
    [sym_if_block] = STATE(41),
    [aux_sym_audit_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(7),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(9),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(11),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(13),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(17),
    [anon_sym_LTcustom_item_GT] = ACTIONS(19),
    [anon_sym_LTitem_GT] = ACTIONS(21),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(23),
    [anon_sym_LTif_GT] = ACTIONS(25),
    [sym_meta_displayname] = ACTIONS(83),
    [sym_meta_labels] = ACTIONS(83),
    [sym_meta_refs] = ACTIONS(83),
    [sym_check_string_element_1] = ACTIONS(83),
    [sym_check_string_element_2] = ACTIONS(83),
    [sym_check_nonstring_element] = ACTIONS(83),
    [sym_check_empty_element] = ACTIONS(83),
  },
  [41] = {
    [sym__statement] = STATE(41),
    [sym_ui_metadata] = STATE(41),
    [sym_spec_block] = STATE(41),
    [sym_variable_block] = STATE(41),
    [sym_variable_instance] = STATE(41),
    [sym_check_type] = STATE(41),
    [sym_group_policy] = STATE(41),
    [sym_custom_item] = STATE(41),
    [sym_builtin_item] = STATE(41),
    [sym_report_item] = STATE(41),
    [sym_if_block] = STATE(41),
    [aux_sym_audit_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(163),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(166),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(169),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(172),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(175),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(178),
    [anon_sym_LTcustom_item_GT] = ACTIONS(181),
    [anon_sym_LTitem_GT] = ACTIONS(184),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(187),
    [anon_sym_LTif_GT] = ACTIONS(190),
    [sym_meta_displayname] = ACTIONS(193),
    [sym_meta_labels] = ACTIONS(193),
    [sym_meta_refs] = ACTIONS(193),
    [sym_check_string_element_1] = ACTIONS(193),
    [sym_check_string_element_2] = ACTIONS(193),
    [sym_check_nonstring_element] = ACTIONS(193),
    [sym_check_empty_element] = ACTIONS(193),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(196),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(196),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(196),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(196),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(196),
    [anon_sym_LTcustom_item_GT] = ACTIONS(196),
    [anon_sym_LTitem_GT] = ACTIONS(196),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(196),
    [anon_sym_LTif_GT] = ACTIONS(196),
    [sym_meta_displayname] = ACTIONS(196),
    [sym_meta_labels] = ACTIONS(196),
    [sym_meta_refs] = ACTIONS(196),
    [sym_check_string_element_1] = ACTIONS(196),
    [sym_check_string_element_2] = ACTIONS(196),
    [sym_check_nonstring_element] = ACTIONS(196),
    [sym_check_empty_element] = ACTIONS(196),
  },
  [43] = {
    [sym_spec_block] = STATE(43),
    [sym_variable_block] = STATE(43),
    [aux_sym_ui_metadata_repeat1] = STATE(43),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(198),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(200),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(203),
    [sym_meta_displayname] = ACTIONS(206),
    [sym_meta_labels] = ACTIONS(206),
    [sym_meta_refs] = ACTIONS(206),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(209),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(209),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(209),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(209),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(209),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(209),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(209),
    [anon_sym_LTcustom_item_GT] = ACTIONS(209),
    [anon_sym_LTitem_GT] = ACTIONS(209),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(209),
    [anon_sym_LTif_GT] = ACTIONS(209),
    [sym_meta_displayname] = ACTIONS(209),
    [sym_meta_labels] = ACTIONS(209),
    [sym_meta_refs] = ACTIONS(209),
    [sym_check_string_element_1] = ACTIONS(209),
    [sym_check_string_element_2] = ACTIONS(209),
    [sym_check_nonstring_element] = ACTIONS(209),
    [sym_check_empty_element] = ACTIONS(209),
  },
  [45] = {
    [aux_sym_spec_block_repeat1] = STATE(45),
    [anon_sym_POUND_LT_SLASHspec_GT] = ACTIONS(211),
    [sym_spec_type] = ACTIONS(213),
    [sym_spec_name] = ACTIONS(213),
    [sym_spec_version] = ACTIONS(213),
    [sym_spec_link] = ACTIONS(213),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(216),
    [anon_sym_POUND_LT_SLASHui_metadata_GT] = ACTIONS(216),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(216),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(216),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(216),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(216),
    [anon_sym_LTcustom_item_GT] = ACTIONS(216),
    [anon_sym_LTitem_GT] = ACTIONS(216),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(216),
    [anon_sym_LTif_GT] = ACTIONS(216),
    [sym_meta_displayname] = ACTIONS(216),
    [sym_meta_labels] = ACTIONS(216),
    [sym_meta_refs] = ACTIONS(216),
    [sym_check_string_element_1] = ACTIONS(216),
    [sym_check_string_element_2] = ACTIONS(216),
    [sym_check_nonstring_element] = ACTIONS(216),
    [sym_check_empty_element] = ACTIONS(216),
  },
  [47] = {
    [sym_variable_instance] = STATE(47),
    [aux_sym_variable_block_repeat1] = STATE(47),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(218),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(220),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(223),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(223),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(223),
    [anon_sym_POUND_LT_SLASHvariables_GT] = ACTIONS(223),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(223),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(223),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(223),
    [anon_sym_LTcustom_item_GT] = ACTIONS(223),
    [anon_sym_LTitem_GT] = ACTIONS(223),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(223),
    [anon_sym_LTif_GT] = ACTIONS(223),
    [sym_meta_displayname] = ACTIONS(223),
    [sym_meta_labels] = ACTIONS(223),
    [sym_meta_refs] = ACTIONS(223),
    [sym_check_string_element_1] = ACTIONS(223),
    [sym_check_string_element_2] = ACTIONS(223),
    [sym_check_nonstring_element] = ACTIONS(223),
    [sym_check_empty_element] = ACTIONS(223),
  },
  [49] = {
    [aux_sym_variable_instance_repeat1] = STATE(49),
    [anon_sym_POUND_LT_SLASHvariable_GT] = ACTIONS(225),
    [sym_variable_name] = ACTIONS(227),
    [sym_variable_default] = ACTIONS(227),
    [sym_variable_description] = ACTIONS(227),
    [sym_variable_info] = ACTIONS(227),
    [sym_variable_optional] = ACTIONS(227),
  },
  [50] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(129),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(129),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(129),
    [anon_sym_LTcustom_item_GT] = ACTIONS(129),
    [anon_sym_LTitem_GT] = ACTIONS(129),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(129),
    [anon_sym_LTif_GT] = ACTIONS(129),
    [sym_comments] = ACTIONS(129),
  },
  [51] = {
    [sym_group_policy] = STATE(62),
    [sym_custom_item] = STATE(62),
    [sym_builtin_item] = STATE(62),
    [sym_report_item] = STATE(62),
    [sym_if_block] = STATE(62),
    [aux_sym_check_type_repeat1] = STATE(62),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(47),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(230),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LTif_GT] = ACTIONS(55),
    [sym_comments] = ACTIONS(133),
  },
  [52] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(135),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(135),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(135),
    [anon_sym_LTcustom_item_GT] = ACTIONS(135),
    [anon_sym_LTitem_GT] = ACTIONS(135),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(135),
    [anon_sym_LTif_GT] = ACTIONS(135),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(135),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(135),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(135),
    [sym_comments] = ACTIONS(135),
  },
  [53] = {
    [aux_sym_custom_item_repeat1] = STATE(64),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(232),
    [sym_comments] = ACTIONS(139),
    [sym_check_string_element_1] = ACTIONS(139),
    [sym_check_string_element_2] = ACTIONS(139),
    [sym_check_nonstring_element] = ACTIONS(139),
    [sym_check_empty_element] = ACTIONS(139),
  },
  [54] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(141),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(141),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(141),
    [anon_sym_LTcustom_item_GT] = ACTIONS(141),
    [anon_sym_LTitem_GT] = ACTIONS(141),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(141),
    [anon_sym_LTif_GT] = ACTIONS(141),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(141),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(141),
    [sym_comments] = ACTIONS(141),
  },
  [55] = {
    [aux_sym_custom_item_repeat1] = STATE(66),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(234),
    [sym_comments] = ACTIONS(145),
    [sym_check_string_element_1] = ACTIONS(145),
    [sym_check_string_element_2] = ACTIONS(145),
    [sym_check_nonstring_element] = ACTIONS(145),
    [sym_check_empty_element] = ACTIONS(145),
  },
  [56] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(147),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(147),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(147),
    [anon_sym_LTcustom_item_GT] = ACTIONS(147),
    [anon_sym_LTitem_GT] = ACTIONS(147),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(147),
    [anon_sym_LTif_GT] = ACTIONS(147),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(147),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(147),
    [sym_comments] = ACTIONS(147),
  },
  [57] = {
    [aux_sym_custom_item_repeat1] = STATE(68),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(236),
    [sym_comments] = ACTIONS(151),
    [sym_check_string_element_1] = ACTIONS(151),
    [sym_check_string_element_2] = ACTIONS(151),
    [sym_check_nonstring_element] = ACTIONS(151),
    [sym_check_empty_element] = ACTIONS(151),
  },
  [58] = {
    [sym_then_block] = STATE(77),
    [anon_sym_LTthen_GT] = ACTIONS(157),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(238),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(238),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(238),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(238),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(238),
    [anon_sym_LTcustom_item_GT] = ACTIONS(238),
    [anon_sym_LTitem_GT] = ACTIONS(238),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(238),
    [anon_sym_LTif_GT] = ACTIONS(238),
    [sym_meta_displayname] = ACTIONS(238),
    [sym_meta_labels] = ACTIONS(238),
    [sym_meta_refs] = ACTIONS(238),
    [sym_check_string_element_1] = ACTIONS(238),
    [sym_check_string_element_2] = ACTIONS(238),
    [sym_check_nonstring_element] = ACTIONS(238),
    [sym_check_empty_element] = ACTIONS(238),
  },
  [60] = {
    [sym_group_policy] = STATE(60),
    [sym_custom_item] = STATE(60),
    [sym_builtin_item] = STATE(60),
    [sym_report_item] = STATE(60),
    [sym_if_block] = STATE(60),
    [aux_sym_check_type_repeat1] = STATE(60),
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(240),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(242),
    [anon_sym_LTcustom_item_GT] = ACTIONS(245),
    [anon_sym_LTitem_GT] = ACTIONS(248),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(251),
    [anon_sym_LTif_GT] = ACTIONS(254),
    [sym_comments] = ACTIONS(257),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(260),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(260),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(260),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(260),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(260),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(260),
    [anon_sym_LTcustom_item_GT] = ACTIONS(260),
    [anon_sym_LTitem_GT] = ACTIONS(260),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(260),
    [anon_sym_LTif_GT] = ACTIONS(260),
    [sym_meta_displayname] = ACTIONS(260),
    [sym_meta_labels] = ACTIONS(260),
    [sym_meta_refs] = ACTIONS(260),
    [sym_check_string_element_1] = ACTIONS(260),
    [sym_check_string_element_2] = ACTIONS(260),
    [sym_check_nonstring_element] = ACTIONS(260),
    [sym_check_empty_element] = ACTIONS(260),
  },
  [62] = {
    [sym_group_policy] = STATE(62),
    [sym_custom_item] = STATE(62),
    [sym_builtin_item] = STATE(62),
    [sym_report_item] = STATE(62),
    [sym_if_block] = STATE(62),
    [aux_sym_check_type_repeat1] = STATE(62),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(242),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(240),
    [anon_sym_LTcustom_item_GT] = ACTIONS(245),
    [anon_sym_LTitem_GT] = ACTIONS(248),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(251),
    [anon_sym_LTif_GT] = ACTIONS(254),
    [sym_comments] = ACTIONS(262),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(265),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(265),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(265),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(265),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(265),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(265),
    [anon_sym_LTcustom_item_GT] = ACTIONS(265),
    [anon_sym_LTitem_GT] = ACTIONS(265),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(265),
    [anon_sym_LTif_GT] = ACTIONS(265),
    [sym_meta_displayname] = ACTIONS(265),
    [sym_meta_labels] = ACTIONS(265),
    [sym_meta_refs] = ACTIONS(265),
    [sym_check_string_element_1] = ACTIONS(265),
    [sym_check_string_element_2] = ACTIONS(265),
    [sym_check_nonstring_element] = ACTIONS(265),
    [sym_check_empty_element] = ACTIONS(265),
  },
  [64] = {
    [aux_sym_custom_item_repeat1] = STATE(64),
    [anon_sym_LT_SLASHcustom_item_GT] = ACTIONS(267),
    [sym_comments] = ACTIONS(269),
    [sym_check_string_element_1] = ACTIONS(269),
    [sym_check_string_element_2] = ACTIONS(269),
    [sym_check_nonstring_element] = ACTIONS(269),
    [sym_check_empty_element] = ACTIONS(269),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(272),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(272),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(272),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(272),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(272),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(272),
    [anon_sym_LTcustom_item_GT] = ACTIONS(272),
    [anon_sym_LTitem_GT] = ACTIONS(272),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(272),
    [anon_sym_LTif_GT] = ACTIONS(272),
    [sym_meta_displayname] = ACTIONS(272),
    [sym_meta_labels] = ACTIONS(272),
    [sym_meta_refs] = ACTIONS(272),
    [sym_check_string_element_1] = ACTIONS(272),
    [sym_check_string_element_2] = ACTIONS(272),
    [sym_check_nonstring_element] = ACTIONS(272),
    [sym_check_empty_element] = ACTIONS(272),
  },
  [66] = {
    [aux_sym_custom_item_repeat1] = STATE(66),
    [anon_sym_LT_SLASHitem_GT] = ACTIONS(267),
    [sym_comments] = ACTIONS(274),
    [sym_check_string_element_1] = ACTIONS(274),
    [sym_check_string_element_2] = ACTIONS(274),
    [sym_check_nonstring_element] = ACTIONS(274),
    [sym_check_empty_element] = ACTIONS(274),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(277),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(277),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(277),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(277),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(277),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(277),
    [anon_sym_LTcustom_item_GT] = ACTIONS(277),
    [anon_sym_LTitem_GT] = ACTIONS(277),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(277),
    [anon_sym_LTif_GT] = ACTIONS(277),
    [sym_meta_displayname] = ACTIONS(277),
    [sym_meta_labels] = ACTIONS(277),
    [sym_meta_refs] = ACTIONS(277),
    [sym_check_string_element_1] = ACTIONS(277),
    [sym_check_string_element_2] = ACTIONS(277),
    [sym_check_nonstring_element] = ACTIONS(277),
    [sym_check_empty_element] = ACTIONS(277),
  },
  [68] = {
    [aux_sym_custom_item_repeat1] = STATE(68),
    [anon_sym_LT_SLASHreport_GT] = ACTIONS(267),
    [sym_comments] = ACTIONS(279),
    [sym_check_string_element_1] = ACTIONS(279),
    [sym_check_string_element_2] = ACTIONS(279),
    [sym_check_nonstring_element] = ACTIONS(279),
    [sym_check_empty_element] = ACTIONS(279),
  },
  [69] = {
    [anon_sym_LTthen_GT] = ACTIONS(282),
  },
  [70] = {
    [sym_custom_item] = STATE(79),
    [aux_sym_condition_block_repeat1] = STATE(79),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(284),
    [sym_comments] = ACTIONS(286),
  },
  [71] = {
    [sym_custom_item] = STATE(81),
    [sym_builtin_item] = STATE(81),
    [sym_report_item] = STATE(81),
    [aux_sym_then_block_repeat1] = STATE(81),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(288),
    [sym_comments] = ACTIONS(290),
  },
  [72] = {
    [sym_else_block] = STATE(83),
    [anon_sym_LTelse_GT] = ACTIONS(292),
  },
  [73] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(260),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(260),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(260),
    [anon_sym_LTcustom_item_GT] = ACTIONS(260),
    [anon_sym_LTitem_GT] = ACTIONS(260),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(260),
    [anon_sym_LTif_GT] = ACTIONS(260),
    [sym_comments] = ACTIONS(260),
  },
  [74] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(265),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(265),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(265),
    [anon_sym_LTcustom_item_GT] = ACTIONS(265),
    [anon_sym_LTitem_GT] = ACTIONS(265),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(265),
    [anon_sym_LTif_GT] = ACTIONS(265),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(265),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(265),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(265),
    [sym_comments] = ACTIONS(265),
  },
  [75] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(272),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(272),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(272),
    [anon_sym_LTcustom_item_GT] = ACTIONS(272),
    [anon_sym_LTitem_GT] = ACTIONS(272),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(272),
    [anon_sym_LTif_GT] = ACTIONS(272),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(272),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(272),
    [sym_comments] = ACTIONS(272),
  },
  [76] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(277),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(277),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(277),
    [anon_sym_LTcustom_item_GT] = ACTIONS(277),
    [anon_sym_LTitem_GT] = ACTIONS(277),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(277),
    [anon_sym_LTif_GT] = ACTIONS(277),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(277),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(277),
    [sym_comments] = ACTIONS(277),
  },
  [77] = {
    [sym_else_block] = STATE(84),
    [anon_sym_LTelse_GT] = ACTIONS(292),
  },
  [78] = {
    [anon_sym_LTthen_GT] = ACTIONS(294),
  },
  [79] = {
    [sym_custom_item] = STATE(79),
    [aux_sym_condition_block_repeat1] = STATE(79),
    [anon_sym_LTcustom_item_GT] = ACTIONS(296),
    [anon_sym_LT_SLASHcondition_GT] = ACTIONS(299),
    [sym_comments] = ACTIONS(301),
  },
  [80] = {
    [anon_sym_LTelse_GT] = ACTIONS(304),
  },
  [81] = {
    [sym_custom_item] = STATE(86),
    [sym_builtin_item] = STATE(86),
    [sym_report_item] = STATE(86),
    [aux_sym_then_block_repeat1] = STATE(86),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(306),
    [sym_comments] = ACTIONS(308),
  },
  [82] = {
    [sym_custom_item] = STATE(88),
    [sym_builtin_item] = STATE(88),
    [sym_report_item] = STATE(88),
    [aux_sym_then_block_repeat1] = STATE(88),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(310),
    [sym_comments] = ACTIONS(312),
  },
  [83] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(314),
  },
  [84] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(316),
  },
  [85] = {
    [anon_sym_LTelse_GT] = ACTIONS(318),
  },
  [86] = {
    [sym_custom_item] = STATE(86),
    [sym_builtin_item] = STATE(86),
    [sym_report_item] = STATE(86),
    [aux_sym_then_block_repeat1] = STATE(86),
    [anon_sym_LTcustom_item_GT] = ACTIONS(320),
    [anon_sym_LTitem_GT] = ACTIONS(323),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(326),
    [anon_sym_LT_SLASHthen_GT] = ACTIONS(329),
    [sym_comments] = ACTIONS(331),
  },
  [87] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(334),
  },
  [88] = {
    [sym_custom_item] = STATE(92),
    [sym_builtin_item] = STATE(92),
    [sym_report_item] = STATE(92),
    [aux_sym_then_block_repeat1] = STATE(92),
    [anon_sym_LTcustom_item_GT] = ACTIONS(49),
    [anon_sym_LTitem_GT] = ACTIONS(51),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(53),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(336),
    [sym_comments] = ACTIONS(338),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [anon_sym_POUND_LTui_metadata_GT] = ACTIONS(340),
    [anon_sym_POUND_LTspec_GT] = ACTIONS(340),
    [anon_sym_POUND_LTvariables_GT] = ACTIONS(340),
    [anon_sym_POUND_LTvariable_GT] = ACTIONS(340),
    [aux_sym_SLASH_LTcheck_type_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(340),
    [anon_sym_LTcustom_item_GT] = ACTIONS(340),
    [anon_sym_LTitem_GT] = ACTIONS(340),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(340),
    [anon_sym_LTif_GT] = ACTIONS(340),
    [sym_meta_displayname] = ACTIONS(340),
    [sym_meta_labels] = ACTIONS(340),
    [sym_meta_refs] = ACTIONS(340),
    [sym_check_string_element_1] = ACTIONS(340),
    [sym_check_string_element_2] = ACTIONS(340),
    [sym_check_nonstring_element] = ACTIONS(340),
    [sym_check_empty_element] = ACTIONS(340),
  },
  [90] = {
    [anon_sym_LT_SLASHcheck_type_GT] = ACTIONS(340),
    [aux_sym_SLASH_LTgroup_policy_COLON_LBRACK_CARET_GT_RBRACK_PLUS_GT_SLASH] = ACTIONS(340),
    [anon_sym_LT_SLASHgroup_policy_GT] = ACTIONS(340),
    [anon_sym_LTcustom_item_GT] = ACTIONS(340),
    [anon_sym_LTitem_GT] = ACTIONS(340),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(340),
    [anon_sym_LTif_GT] = ACTIONS(340),
    [sym_comments] = ACTIONS(340),
  },
  [91] = {
    [anon_sym_LT_SLASHif_GT] = ACTIONS(342),
  },
  [92] = {
    [sym_custom_item] = STATE(92),
    [sym_builtin_item] = STATE(92),
    [sym_report_item] = STATE(92),
    [aux_sym_then_block_repeat1] = STATE(92),
    [anon_sym_LTcustom_item_GT] = ACTIONS(320),
    [anon_sym_LTitem_GT] = ACTIONS(323),
    [aux_sym_SLASH_LTreporttype_COLON_DQUOTE_LPARENPASSED_PIPEFAILED_PIPEWARNING_RPAREN_DQUOTE_GT_SLASH] = ACTIONS(326),
    [anon_sym_LT_SLASHelse_GT] = ACTIONS(329),
    [sym_comments] = ACTIONS(344),
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
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, SHIFT(14),
  [31] = {.count = 1, .reusable = true}, SHIFT(15),
  [33] = {.count = 1, .reusable = true}, SHIFT(16),
  [35] = {.count = 1, .reusable = true}, SHIFT(17),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = true}, SHIFT(24),
  [49] = {.count = 1, .reusable = true}, SHIFT(25),
  [51] = {.count = 1, .reusable = true}, SHIFT(26),
  [53] = {.count = 1, .reusable = true}, SHIFT(27),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, SHIFT(30),
  [61] = {.count = 1, .reusable = true}, SHIFT(31),
  [63] = {.count = 1, .reusable = true}, SHIFT(32),
  [65] = {.count = 1, .reusable = true}, SHIFT(33),
  [67] = {.count = 1, .reusable = true}, SHIFT(34),
  [69] = {.count = 1, .reusable = true}, SHIFT(35),
  [71] = {.count = 1, .reusable = true}, SHIFT(36),
  [73] = {.count = 1, .reusable = true}, SHIFT(37),
  [75] = {.count = 1, .reusable = true}, SHIFT(38),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_audit, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(40),
  [81] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [83] = {.count = 1, .reusable = true}, SHIFT(41),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_ui_metadata, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(42),
  [89] = {.count = 1, .reusable = true}, SHIFT(43),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_spec_block, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(44),
  [95] = {.count = 1, .reusable = true}, SHIFT(45),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_variable_block, 2),
  [99] = {.count = 1, .reusable = true}, SHIFT(46),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_variable_instance, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(48),
  [105] = {.count = 1, .reusable = true}, SHIFT(49),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_check_type, 2),
  [109] = {.count = 1, .reusable = true}, SHIFT(50),
  [111] = {.count = 1, .reusable = true}, SHIFT(51),
  [113] = {.count = 1, .reusable = true}, SHIFT(52),
  [115] = {.count = 1, .reusable = true}, SHIFT(53),
  [117] = {.count = 1, .reusable = true}, SHIFT(54),
  [119] = {.count = 1, .reusable = true}, SHIFT(55),
  [121] = {.count = 1, .reusable = true}, SHIFT(56),
  [123] = {.count = 1, .reusable = true}, SHIFT(57),
  [125] = {.count = 1, .reusable = true}, SHIFT(59),
  [127] = {.count = 1, .reusable = true}, SHIFT(60),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_group_policy, 2),
  [131] = {.count = 1, .reusable = true}, SHIFT(61),
  [133] = {.count = 1, .reusable = true}, SHIFT(62),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_custom_item, 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(63),
  [139] = {.count = 1, .reusable = true}, SHIFT(64),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_builtin_item, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(65),
  [145] = {.count = 1, .reusable = true}, SHIFT(66),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_report_item, 2),
  [149] = {.count = 1, .reusable = true}, SHIFT(67),
  [151] = {.count = 1, .reusable = true}, SHIFT(68),
  [153] = {.count = 1, .reusable = true}, SHIFT(69),
  [155] = {.count = 1, .reusable = true}, SHIFT(70),
  [157] = {.count = 1, .reusable = true}, SHIFT(71),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_audit, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2),
  [163] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(2),
  [166] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(4),
  [172] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(5),
  [175] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(6),
  [178] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(7),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(8),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(9),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(10),
  [190] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(11),
  [193] = {.count = 2, .reusable = true}, REDUCE(aux_sym_audit_repeat1, 2), SHIFT_REPEAT(41),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_ui_metadata, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2),
  [200] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2), SHIFT_REPEAT(3),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2), SHIFT_REPEAT(4),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ui_metadata_repeat1, 2), SHIFT_REPEAT(43),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_spec_block, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(aux_sym_spec_block_repeat1, 2),
  [213] = {.count = 2, .reusable = true}, REDUCE(aux_sym_spec_block_repeat1, 2), SHIFT_REPEAT(45),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_variable_block, 3),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_block_repeat1, 2),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_block_repeat1, 2), SHIFT_REPEAT(5),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_variable_instance, 3),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym_variable_instance_repeat1, 2),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_variable_instance_repeat1, 2), SHIFT_REPEAT(49),
  [230] = {.count = 1, .reusable = true}, SHIFT(73),
  [232] = {.count = 1, .reusable = true}, SHIFT(74),
  [234] = {.count = 1, .reusable = true}, SHIFT(75),
  [236] = {.count = 1, .reusable = true}, SHIFT(76),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_check_type, 3),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2),
  [242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(24),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(25),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(26),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(27),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(28),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(60),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_group_policy, 3),
  [262] = {.count = 2, .reusable = true}, REDUCE(aux_sym_check_type_repeat1, 2), SHIFT_REPEAT(62),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_custom_item, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2), SHIFT_REPEAT(64),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_builtin_item, 3),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2), SHIFT_REPEAT(66),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_report_item, 3),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_custom_item_repeat1, 2), SHIFT_REPEAT(68),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_condition_block, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(78),
  [286] = {.count = 1, .reusable = true}, SHIFT(79),
  [288] = {.count = 1, .reusable = true}, SHIFT(80),
  [290] = {.count = 1, .reusable = true}, SHIFT(81),
  [292] = {.count = 1, .reusable = true}, SHIFT(82),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_condition_block, 3),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(25),
  [299] = {.count = 1, .reusable = true}, REDUCE(aux_sym_condition_block_repeat1, 2),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_condition_block_repeat1, 2), SHIFT_REPEAT(79),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_then_block, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(85),
  [308] = {.count = 1, .reusable = true}, SHIFT(86),
  [310] = {.count = 1, .reusable = true}, SHIFT(87),
  [312] = {.count = 1, .reusable = true}, SHIFT(88),
  [314] = {.count = 1, .reusable = true}, SHIFT(89),
  [316] = {.count = 1, .reusable = true}, SHIFT(90),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_then_block, 3),
  [320] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(25),
  [323] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(26),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(27),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(86),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_else_block, 2),
  [336] = {.count = 1, .reusable = true}, SHIFT(91),
  [338] = {.count = 1, .reusable = true}, SHIFT(92),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_if_block, 5),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_else_block, 3),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_then_block_repeat1, 2), SHIFT_REPEAT(92),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_tenableAudits() {
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
