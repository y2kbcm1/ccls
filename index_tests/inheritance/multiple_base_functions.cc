struct Base0 {
  virtual ~Base0() { }
};
struct Base1 {
  virtual ~Base1() { }
};
struct Derived : Base0, Base1 {
  ~Derived() override { }
};

/*
OUTPUT:
{
  "includes": [],
  "skipped_ranges": [],
  "usr2func": [{
      "usr": 8401779086123965305,
      "detailed_name": "virtual Base1::~Base1() noexcept",
      "qual_name_offset": 8,
      "short_name": "~Base1",
      "kind": 6,
      "storage": 0,
      "declarations": [],
      "spell": "5:11-5:12|15826803741381445676|2|1090",
      "extent": "5:3-5:23|15826803741381445676|2|0",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }, {
      "usr": 13164726294460837993,
      "detailed_name": "Derived::~Derived() noexcept",
      "qual_name_offset": 0,
      "short_name": "~Derived",
      "kind": 6,
      "storage": 0,
      "declarations": [],
      "spell": "8:3-8:4|10963370434658308541|2|5186",
      "extent": "8:3-8:26|10963370434658308541|2|0",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }, {
      "usr": 16347272523198263017,
      "detailed_name": "virtual Base0::~Base0() noexcept",
      "qual_name_offset": 8,
      "short_name": "~Base0",
      "kind": 6,
      "storage": 0,
      "declarations": [],
      "spell": "2:11-2:12|11628904180681204356|2|1090",
      "extent": "2:3-2:23|11628904180681204356|2|0",
      "bases": [],
      "derived": [],
      "vars": [],
      "uses": [],
      "callees": []
    }],
  "usr2type": [{
      "usr": 10963370434658308541,
      "detailed_name": "struct Derived : Base0, Base1 {}",
      "qual_name_offset": 7,
      "short_name": "Derived",
      "kind": 23,
      "declarations": [],
      "spell": "7:8-7:15|0|1|2",
      "extent": "7:1-9:2|0|1|0",
      "alias_of": 0,
      "bases": [11628904180681204356, 15826803741381445676],
      "derived": [],
      "types": [],
      "funcs": [13164726294460837993],
      "vars": [],
      "instances": [],
      "uses": ["8:4-8:11|0|1|4"]
    }, {
      "usr": 11628904180681204356,
      "detailed_name": "struct Base0 {}",
      "qual_name_offset": 7,
      "short_name": "Base0",
      "kind": 23,
      "declarations": [],
      "spell": "1:8-1:13|0|1|2",
      "extent": "1:1-3:2|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [10963370434658308541],
      "types": [],
      "funcs": [16347272523198263017],
      "vars": [],
      "instances": [],
      "uses": ["2:12-2:17|0|1|4", "7:18-7:23|0|1|2052"]
    }, {
      "usr": 15826803741381445676,
      "detailed_name": "struct Base1 {}",
      "qual_name_offset": 7,
      "short_name": "Base1",
      "kind": 23,
      "declarations": [],
      "spell": "4:8-4:13|0|1|2",
      "extent": "4:1-6:2|0|1|0",
      "alias_of": 0,
      "bases": [],
      "derived": [10963370434658308541],
      "types": [],
      "funcs": [8401779086123965305],
      "vars": [],
      "instances": [],
      "uses": ["5:12-5:17|0|1|4", "7:25-7:30|0|1|2052"]
    }],
  "usr2var": []
}
*/