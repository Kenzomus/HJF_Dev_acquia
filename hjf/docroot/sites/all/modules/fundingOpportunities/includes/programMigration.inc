<?php
/**
*inplementing my base classs base.inc that extends the migration class. 
*/
 class programMigration extends Mybase {
  public function __construct($arguments) {

  parent::__construct($arguments);

 $this->description = t('importing Pograms from a reference in opportubity in filemaker json file to drupal');

 $fields = array(

      'title' => 'title',
      'description'=>'body',
            );
    $json_file = 'data/sources/program.json';
    //$mjason = file_get_contents('data/sources/funding_jsonlintverified.json');
 $this->source = new MigrateSourceJSON($json_file , array(), $fields);

 $this->destination = new MigrateDestinationNode('program');
$source_key = array(
      'program_id' => array('type' => 'int',
                      'unsigned' => TRUE,
                      'not null' => TRUE,
                      'description'=>'program_sourceID',
                     )
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key,
      MigrateDestinationNode::getKeySchema()
);

 $this->addFieldMapping('title', 'title');
  $this->addFieldMapping('body', 'description');


}
}

