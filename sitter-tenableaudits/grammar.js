module.exports = grammar({
  name: 'tenableaudits',

  rules: {
    audit: $ => seq(
      optional($.comments),
      repeat($._statement)
    ),

    comments: $ => /(#[^<]+$|#$)/,

    _statement: $ => choice(
      $.ui_metadata,
      $.meta_displayname,
      $.spec_block,
      $.variable_block,
      $.meta_labels,
      $.meta_refs,
      $.variable_instance,
      $.check_type,
      $.group_policy,
      $.custom_item,
      $.builtin_item,
      $.rept_item,
      $.check_string_element,
      $.check_nonstring_element,
      $.check_empty_element,
      //$.check_range_element,
      //$.check_integer_element,
      //$.check_url_element,
      //$.check_type_element,
      //$.check_parameter_element,
      $.if_block
    ),

    ui_metadata: $ => seq(
      '#<ui_metadata>',
      repeat(choice(
        $.meta_displayname,
        $.spec_block,
        $.variable_block,
        $.meta_labels,
        $.meta_refs
      )),
      '#</ui_metadata>'
    ),

    spec_block: $ => seq(
      '#<spec>',
      repeat(choice(
        $.spec_name,
        $.spec_type,
        $.spec_version,
        $.spec_link
      )),
      '#</spec>'
    ),

    variable_block: $ => seq(
      '#<variables>',
      repeat($.variable_instance),
      '#</variables>'
    ),

    variable_instance: $ => seq(
      '#<variable>',
      repeat(choice(
        $.variable_name,
        $.variable_default,
        $.variable_description,
        $.variable_info,
        $.variable_optional
      )),
      '#</variable>'
    ),

    check_type: $ => seq(
      /<check_type:[^>]+>/,
      repeat(choice(
        $.group_policy,
        $.if_block,
        $.custom_item,
        $.builtin_item,
        $.rept_item
      )),
      '</check_type>'
    ),

    group_policy: $ => seq(
      /<group_policy:[^>]+>/,
      repeat(choice(
        $.group_policy,
        $.if_block,
        $.custom_item,
        $.builtin_item,
        $.rept_item
      )),
      '</group_policy>'
    ),

    custom_item: $ => seq(
      '<custom_item>',
      repeat(choice(
        $.check_string_element,
        $.check_nonstring_element,
        $.check_empty_element
        //$.check_range_element,
        //$.check_integer_element,
        //$.check_url_element,
        //$.check_type_element,
        //$.check_parameter_element
      )),
      '</custom_item>'
    ),

    builtin_item: $ => seq(
      '<item>',
      repeat(choice(
        $.check_string_element,
        $.check_nonstring_element,
        $.check_empty_element
        //$.check_range_element,
        //$.check_integer_element,
        //$.check_url_element,
        //$.check_type_element,
        //$.check_parameter_element
      )),
      '</item>'
    ),

    rept_item: $ => seq(
      /<report type:"(PASSED|FAILED|WARNING)">/,
      repeat(
        $.check_string_element,
        $.check_nonstring_element,
        $.check_empty_element
        //$.check_url_element
      ),
      '</report>'
    ),

    // Conditionals

    if_block: $ => seq(
      '<if>',
      $.condition_block,
      $.then_block,
      $.else_block,
      '</if>'
    ),

    condition_block: $ => seq(
      /<condition type:"(AND|OR)">/,
      repeat(choice(
        $.custom_item
      )),
      '</condition>'
    ),

    then_block: $ => seq(
      '<then>',
      repeat(choice(
        $.custom_item,
        $.builtin_item,
        $.rept_item
      )),
      '</then>'
    ),

    else_block: $ => seq(
      '<else>',
      repeat(choice(
        $.custom_item,
        $.builtin_item,
        $.rept_item
      )),
      '</else>'
    ),

    // Metadata Elements
    meta_displayname: $ => /#<display_name>.+<\/display_name>/,
    meta_labels: $ => /#<labels>.+<\/labels>/,
    meta_refs: $ => /#<benchmark_refs>.+<\/benchmark_refs>/,

    spec_type: $ => /#[ ]*<type>.+<\/type>/,
    spec_name: $ => /#[ ]*<name>.+<\/name>/,
    spec_version: $ => /#[ ]*<version>.+<\/version>/,
    spec_link: $ => /#[ ]*<link>.+<\/link>/,

    variable_name: $ => /#<name>.+<\/name>/,
    variable_default: $ => /#<default>.+<\/default>/,
    variable_description: $ => /#<description>.+<\/description>/,
    variable_info: $ => /#<info>.+<\/info>/,
    variable_optional: $ => /#<optional \/>/,

    // Check Elements - Non Functional

    //check_range_element: $ => /.+[ ]*:[ ]*\[[0-9A-Z]+\.\.[0-9A-Z]+\]/,
    //check_integer_element: $ => /.+[ ]*:[ ]*[0-9]+/,
    //check_url_element: $ => /see_also[ ]*:[ ]*["']http.+['"]\n/,
    //check_type_element: $ => /type[ ]*:[ ]*[A-Z_]+/,
    //check_parameter_element: $ => /[^t][^y][^p][^e][ ]*:[ ]*[A-Z_]+/,
    //check_reference_element: $ => /reference[ ]*:[ ]*".+"\n/,
    check_string_element: $ => /[ ]*[A-Za-z0-9_-]+[ ]*:[ ]*"[^"]+"/gm,
    check_nonstring_element: $ => /[ ]*[A-Za-z0-9_-]+[ ]*:[ ]*[A-Za-z_\[\]0-9.]+/,
    check_empty_element: $ => /[ ]*[A-Za-z0-9_-]+[ ]*:[ ]*""/


 }
});

