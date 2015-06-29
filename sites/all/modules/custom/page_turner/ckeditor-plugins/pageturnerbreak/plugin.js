/*
 * Insert page breaks into document
 * For use with Page Turner module
 *
 * Mike Widner <mikewidner@stanford.edu>
 */

// There's an existing plugin called "pagebreak", so we name ours something else
CKEDITOR.plugins.add('pageturnerbreak', {
    icons: 'pageturnerbreak',
    init: function(editor) {
        editor.addCommand('insertBreak', {
            exec: function(editor) {
                // Must match what's in page_turner.module
                editor.insertHTML('<br class="page-turner-break"/>');
            }
        });
        editor.ui.addButton('PageTurnerBreak', {
            label: 'Insert Page Break',
            command: 'insertBreak',
            toolbar: 'presentation',
        });
    }
});