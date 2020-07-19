window.BENCHMARK_DATA = {
  "lastUpdate": 1595191515215,
  "repoUrl": "https://github.com/bernedom/SI",
  "entries": {
    "Catch2 Benchmark": [
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "933f143e69dcf13e9389e4c683cc0dcbd1eb660d",
          "message": "Merge pull request #33 from bernedom/building/continous-benchmarking\n\nBuilding/continous benchmarking",
          "timestamp": "2020-01-22T08:06:32+01:00",
          "tree_id": "95821986b244a62cfdc9cae14f19c4d4e6b9229f",
          "url": "https://github.com/bernedom/SI/commit/933f143e69dcf13e9389e4c683cc0dcbd1eb660d"
        },
        "date": 1579676871785,
        "tool": "catch2",
        "benches": [
          {
            "name": "Raw number assignment (reference)",
            "value": 8.074,
            "range": "+/- 2.252",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 10.54,
            "range": "+/- 11.374",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.691,
            "range": "+/- 2.79",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "f65255dea7f6f0b6275675c5e2a6af26589666b3",
          "message": "Merge pull request #34 from bernedom/testing/more-benchmarks\n\nTesting/more benchmarks",
          "timestamp": "2020-01-24T10:15:34+01:00",
          "tree_id": "e44a4d0b86a3f2c9c50e613bd97af11afad4680b",
          "url": "https://github.com/bernedom/SI/commit/f65255dea7f6f0b6275675c5e2a6af26589666b3"
        },
        "date": 1579857438711,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29508 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43353 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40966 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42683 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.946,
            "range": "+/- 887",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.552,
            "range": "+/- 1.537",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.499,
            "range": "+/- 350",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.493,
            "range": "+/- 1.57",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.53,
            "range": "+/- 295",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.628,
            "range": "+/- 1.902",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.415,
            "range": "+/- 280",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.766,
            "range": "+/- 1.655",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.204,
            "range": "+/- 358",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 414.39,
            "range": "+/- 31.43",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 43.333,
            "range": "+/- 2.787",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.618,
            "range": "+/- 477",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.285,
            "range": "+/- 1.405",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "fad2d8e39b1ef47afc6f798dd617f93c097a17f5",
          "message": "Testing hints in CONTRIBUTING.md",
          "timestamp": "2020-01-25T16:22:18+01:00",
          "tree_id": "b9864c573463aa7be0a6866379ada1f023c4029e",
          "url": "https://github.com/bernedom/SI/commit/fad2d8e39b1ef47afc6f798dd617f93c097a17f5"
        },
        "date": 1579965832356,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26674 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38278 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37888 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38335 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.055,
            "range": "+/- 842",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.476,
            "range": "+/- 759",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 7.67,
            "range": "+/- 810",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.167,
            "range": "+/- 1.219",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 7.137,
            "range": "+/- 1.077",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.115,
            "range": "+/- 1.195",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.529,
            "range": "+/- 929",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.546,
            "range": "+/- 1.199",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 7.721,
            "range": "+/- 889",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 349.172,
            "range": "+/- 47.785",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 40.671,
            "range": "+/- 6.036",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.134,
            "range": "+/- 865",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.335,
            "range": "+/- 1.041",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "404f2152d5e430190bb1d5f31093a74502a1c03c",
          "message": "Add hint about continous benchmarks",
          "timestamp": "2020-01-25T16:25:20+01:00",
          "tree_id": "f8d24daab23cb249b38e821405a2b7e94cc7413d",
          "url": "https://github.com/bernedom/SI/commit/404f2152d5e430190bb1d5f31093a74502a1c03c"
        },
        "date": 1579966020205,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31175 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45044 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42791 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44994 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.237,
            "range": "+/- 1.261",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.652,
            "range": "+/- 1.217",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.166,
            "range": "+/- 1.798",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.363,
            "range": "+/- 2.571",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.783,
            "range": "+/- 2.474",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.434,
            "range": "+/- 2.7",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.103,
            "range": "+/- 2.054",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.176,
            "range": "+/- 2.242",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.525,
            "range": "+/- 6.42",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 485.37,
            "range": "+/- 36.734",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 48.635,
            "range": "+/- 7.982",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.616,
            "range": "+/- 1.311",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.324,
            "range": "+/- 3.101",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "bd525cca6e676e50bd117779f50b74b1e75e4fd8",
          "message": "Typos fixed",
          "timestamp": "2020-01-25T16:27:27+01:00",
          "tree_id": "aab7bb0feda8161a3b06ab232d9418f94fda7c3a",
          "url": "https://github.com/bernedom/SI/commit/bd525cca6e676e50bd117779f50b74b1e75e4fd8"
        },
        "date": 1579966124745,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23958 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n35740 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n34655 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n35391 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.548,
            "range": "+/- 1.057",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 5.35,
            "range": "+/- 489",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.309,
            "range": "+/- 1.609",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.308,
            "range": "+/- 985",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 6.083,
            "range": "+/- 46",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 7.969,
            "range": "+/- 538",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 6.429,
            "range": "+/- 144",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 6.347,
            "range": "+/- 119",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 8.307,
            "range": "+/- 554",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 330.373,
            "range": "+/- 38.432",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 32.56,
            "range": "+/- 638",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.105,
            "range": "+/- 620",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.837,
            "range": "+/- 1.126",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "d5e8ab33bc9c250564c44490842b24a532153ed2",
          "message": "Liniting markdown",
          "timestamp": "2020-01-27T12:28:04+01:00",
          "tree_id": "4a0366d27e70fd15914043d8d3bb2a5baf8474c9",
          "url": "https://github.com/bernedom/SI/commit/d5e8ab33bc9c250564c44490842b24a532153ed2"
        },
        "date": 1580124586134,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31670 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44285 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42619 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44915 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.896,
            "range": "+/- 1.765",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.84,
            "range": "+/- 1.399",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.419,
            "range": "+/- 2.382",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.31,
            "range": "+/- 2.047",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.767,
            "range": "+/- 3.215",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.59,
            "range": "+/- 2.304",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.549,
            "range": "+/- 3.88",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.073,
            "range": "+/- 1.426",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.205,
            "range": "+/- 2.548",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 475.996,
            "range": "+/- 33.301",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.183,
            "range": "+/- 8.65",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.729,
            "range": "+/- 1.502",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.479,
            "range": "+/- 2.952",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "1f01ded9efd09c527ad80915c8ee558b94c3065f",
          "message": "Typos in readme",
          "timestamp": "2020-01-28T07:51:15+01:00",
          "tree_id": "2cf0d6dfe061b04169a2fc9bf98bb0b8bd77c980",
          "url": "https://github.com/bernedom/SI/commit/1f01ded9efd09c527ad80915c8ee558b94c3065f"
        },
        "date": 1580194291143,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30290 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46798 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43704 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46875 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.094,
            "range": "+/- 1.66",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.493,
            "range": "+/- 1.982",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.189,
            "range": "+/- 3.366",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.884,
            "range": "+/- 2.717",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.478,
            "range": "+/- 1.635",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.298,
            "range": "+/- 3.152",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.669,
            "range": "+/- 1.755",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.645,
            "range": "+/- 1.366",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.27,
            "range": "+/- 2.106",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 454.736,
            "range": "+/- 21.504",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 50.221,
            "range": "+/- 15.525",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.605,
            "range": "+/- 1.91",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.616,
            "range": "+/- 2.594",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "c0f93e0eb39313bd4b6954bbbb3851c0997e9d0f",
          "message": "Updated path for benchmark executable",
          "timestamp": "2020-02-05T11:45:35+01:00",
          "tree_id": "5265c40cd78ee1cc482f6d21e6eaec6fa69a3450",
          "url": "https://github.com/bernedom/SI/commit/c0f93e0eb39313bd4b6954bbbb3851c0997e9d0f"
        },
        "date": 1580899630779,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30552 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43084 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41193 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43767 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.146,
            "range": "+/- 199",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.192,
            "range": "+/- 302",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.217,
            "range": "+/- 267",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.833,
            "range": "+/- 2.801",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.478,
            "range": "+/- 379",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.702,
            "range": "+/- 1.729",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.675,
            "range": "+/- 280",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.692,
            "range": "+/- 248",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.135,
            "range": "+/- 238",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 476.447,
            "range": "+/- 226.216",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 45.289,
            "range": "+/- 1.873",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.89,
            "range": "+/- 323",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.53,
            "range": "+/- 2.552",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "4e610208e23a93227d654db62b5904a160ee5e5c",
          "message": "Merge pull request #36 from bernedom/feature/divide-and-multiply-assignment-operators\n\nFeature/divide and multiply assignment operators",
          "timestamp": "2020-02-14T09:54:28+01:00",
          "tree_id": "19b311bceeb25064f2032b1171c499663cf2f17c",
          "url": "https://github.com/bernedom/SI/commit/4e610208e23a93227d654db62b5904a160ee5e5c"
        },
        "date": 1581670543910,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20462 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28944 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26606 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27947 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.726,
            "range": "+/- 2.51",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.813,
            "range": "+/- 2.42",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.827,
            "range": "+/- 5.583",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.718,
            "range": "+/- 566",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.5,
            "range": "+/- 2.073",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.943,
            "range": "+/- 3.171",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.423,
            "range": "+/- 1.697",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.732,
            "range": "+/- 2.254",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.423,
            "range": "+/- 3.617",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 480.054,
            "range": "+/- 137.834",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 45.513,
            "range": "+/- 12.623",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.473,
            "range": "+/- 2.833",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.435,
            "range": "+/- 811",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "83242e301c50c67777b68ff452339ed9a4595eb5",
          "message": "Merge pull request #37 from bernedom/building/osx-installation-tests\n\nBuilding/osx installation tests",
          "timestamp": "2020-02-17T21:32:13+01:00",
          "tree_id": "0447cfe4cff5fca5b877f7f2958b29d3b9e3578b",
          "url": "https://github.com/bernedom/SI/commit/83242e301c50c67777b68ff452339ed9a4595eb5"
        },
        "date": 1581971630043,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n21864 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26506 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24834 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25038 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 9.728,
            "range": "+/- 3.479",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 8.701,
            "range": "+/- 1.422",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.666,
            "range": "+/- 1.259",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.079,
            "range": "+/- 519",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.194,
            "range": "+/- 904",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.387,
            "range": "+/- 2.533",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.143,
            "range": "+/- 791",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.02,
            "range": "+/- 420",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.49,
            "range": "+/- 417",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 495.276,
            "range": "+/- 33.985",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 57.584,
            "range": "+/- 17.496",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.532,
            "range": "+/- 478",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.852,
            "range": "+/- 2.193",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "26eb0f0e2c262193480ec788f12dab8f6e9b9c14",
          "message": "Merge pull request #44 from bernedom/bugfix/comparison_operator\n\nBugfix/comparison operator",
          "timestamp": "2020-02-21T23:02:05+01:00",
          "tree_id": "708c21665232a3a00e38015cab2347085d926636",
          "url": "https://github.com/bernedom/SI/commit/26eb0f0e2c262193480ec788f12dab8f6e9b9c14"
        },
        "date": 1582322616151,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31004 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45083 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43944 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46610 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.303,
            "range": "+/- 275",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.527,
            "range": "+/- 627",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.001,
            "range": "+/- 608",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.717,
            "range": "+/- 310",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.979,
            "range": "+/- 1.32",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.087,
            "range": "+/- 1.745",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.814,
            "range": "+/- 267",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.924,
            "range": "+/- 282",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 13.795,
            "range": "+/- 20.657",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 465.255,
            "range": "+/- 80.587",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.257,
            "range": "+/- 2.294",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.424,
            "range": "+/- 573",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.568,
            "range": "+/- 468",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "a52726e4a0b29f777e54861646e17bf1f7a9352b",
          "message": "Merge pull request #45 from bernedom/building/compilation-tests-in-osx-and-windows\n\nBuilding/compilation tests in osx and windows",
          "timestamp": "2020-02-26T13:44:20+01:00",
          "tree_id": "c03d4e90f36e0c19e8a7364d90fd6147c58963bc",
          "url": "https://github.com/bernedom/SI/commit/a52726e4a0b29f777e54861646e17bf1f7a9352b"
        },
        "date": 1582721140250,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n19668 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24696 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26290 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26119 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.54,
            "range": "+/- 2.505",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.621,
            "range": "+/- 2.224",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.12,
            "range": "+/- 2.801",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.271,
            "range": "+/- 2.552",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.629,
            "range": "+/- 6.106",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.499,
            "range": "+/- 3.025",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.275,
            "range": "+/- 2.379",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.132,
            "range": "+/- 2.332",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.444,
            "range": "+/- 3.906",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 448.914,
            "range": "+/- 51.151",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.225,
            "range": "+/- 12.566",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.052,
            "range": "+/- 2.985",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.839,
            "range": "+/- 2.165",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "18e7bc784fa683d6776881d034fcc8ceab20de99",
          "message": "Merge pull request #46 from bernedom/feature/adding-str-method\n\nFeature/adding str method",
          "timestamp": "2020-02-26T19:19:28+01:00",
          "tree_id": "417103a494eefd70d7b10bcbf011c59ef2453799",
          "url": "https://github.com/bernedom/SI/commit/18e7bc784fa683d6776881d034fcc8ceab20de99"
        },
        "date": 1582741253501,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n19393 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25308 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26711 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25870 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.53,
            "range": "+/- 2.016",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.172,
            "range": "+/- 1.005",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 7.809,
            "range": "+/- 967",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 6.922,
            "range": "+/- 1.263",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.676,
            "range": "+/- 1.283",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.553,
            "range": "+/- 3.977",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 11.256,
            "range": "+/- 15.141",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.137,
            "range": "+/- 825",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.221,
            "range": "+/- 2.939",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 437.145,
            "range": "+/- 69.24",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 43.523,
            "range": "+/- 11.147",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.992,
            "range": "+/- 697",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.36,
            "range": "+/- 2.153",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 107,
            "range": "+/- 212",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 391,
            "range": "+/- 92",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 91,
            "range": "+/- 14",
            "unit": "ns",
            "extra": "100 samples\n353 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "c5f650ba95b67e91961ce68ddd5e9edb93046941",
          "message": "Merge pull request #47 from bernedom/building/updating-catch\n\nBuilding/updating catch",
          "timestamp": "2020-02-28T07:25:11+01:00",
          "tree_id": "9d73940975d1d422e20055f3e13d04ed210347d6",
          "url": "https://github.com/bernedom/SI/commit/c5f650ba95b67e91961ce68ddd5e9edb93046941"
        },
        "date": 1582871198591,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30391 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43902 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41106 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43284 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.894,
            "range": "+/- 321",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.791,
            "range": "+/- 568",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.98,
            "range": "+/- 530",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.75,
            "range": "+/- 1.176",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.506,
            "range": "+/- 637",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.939,
            "range": "+/- 764",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.367,
            "range": "+/- 503",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.215,
            "range": "+/- 672",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.924,
            "range": "+/- 1.019",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 432.898,
            "range": "+/- 24.436",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.115,
            "range": "+/- 1.946",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.342,
            "range": "+/- 470",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.704,
            "range": "+/- 883",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 88,
            "range": "+/- 70",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 514,
            "range": "+/- 132",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 88,
            "range": "+/- 7",
            "unit": "ns",
            "extra": "100 samples\n423 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "65aa3ee991501e1bb34498b62340a6f7ec4d8f2c",
          "message": "Documentation for",
          "timestamp": "2020-03-14T22:29:59+01:00",
          "tree_id": "32aee3a528c25554f35eb290b8dacb50336efca1",
          "url": "https://github.com/bernedom/SI/commit/65aa3ee991501e1bb34498b62340a6f7ec4d8f2c"
        },
        "date": 1584221491702,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27112 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40035 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n36629 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37180 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.558,
            "range": "+/- 437",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.633,
            "range": "+/- 853",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 8.895,
            "range": "+/- 852",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.24,
            "range": "+/- 1.123",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.107,
            "range": "+/- 706",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.253,
            "range": "+/- 1.748",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.354,
            "range": "+/- 863",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.564,
            "range": "+/- 2.144",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.372,
            "range": "+/- 1.396",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 385.553,
            "range": "+/- 55.72",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.015,
            "range": "+/- 7.548",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.886,
            "range": "+/- 552",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.682,
            "range": "+/- 1.563",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 87,
            "range": "+/- 149",
            "unit": "ns",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 411,
            "range": "+/- 70",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 82,
            "range": "+/- 8",
            "unit": "ns",
            "extra": "100 samples\n376 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "c5f650ba95b67e91961ce68ddd5e9edb93046941",
          "message": "Merge pull request #47 from bernedom/building/updating-catch\n\nBuilding/updating catch",
          "timestamp": "2020-02-28T07:25:11+01:00",
          "tree_id": "9d73940975d1d422e20055f3e13d04ed210347d6",
          "url": "https://github.com/bernedom/SI/commit/c5f650ba95b67e91961ce68ddd5e9edb93046941"
        },
        "date": 1584221632475,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23902 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28774 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30110 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28024 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 9.39,
            "range": "+/- 564",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 10.103,
            "range": "+/- 2.674",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.754,
            "range": "+/- 2.539",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 10.731,
            "range": "+/- 2.778",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 10.121,
            "range": "+/- 1.181",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.927,
            "range": "+/- 3.586",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.929,
            "range": "+/- 1.059",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 10.023,
            "range": "+/- 949",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.524,
            "range": "+/- 1.774",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 498.617,
            "range": "+/- 41.102",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 52.929,
            "range": "+/- 21.602",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 9.548,
            "range": "+/- 589",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.631,
            "range": "+/- 1.88",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 184,
            "range": "+/- 423",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 486,
            "range": "+/- 17",
            "unit": "ns",
            "extra": "100 samples\n71 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 106,
            "range": "+/- 48",
            "unit": "ns",
            "extra": "100 samples\n349 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "ef4f6c090d16813440143b6394dc634b63fd0ad1",
          "message": "Merge pull request #48 from bernedom/feature/implicit-conversions\n\nFeature/implicit conversions",
          "timestamp": "2020-03-21T11:24:56+01:00",
          "tree_id": "08a979e72ad9127c23c032440ea7d3ba64cca4db",
          "url": "https://github.com/bernedom/SI/commit/ef4f6c090d16813440143b6394dc634b63fd0ad1"
        },
        "date": 1584786375581,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28265 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45295 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41616 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44511 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.291,
            "range": "+/- 687",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.606,
            "range": "+/- 619",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 8.678,
            "range": "+/- 1.082",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.106,
            "range": "+/- 1.647",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 7.522,
            "range": "+/- 984",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.923,
            "range": "+/- 1.341",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.278,
            "range": "+/- 1.126",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.552,
            "range": "+/- 803",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.679,
            "range": "+/- 1.752",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 335.232,
            "range": "+/- 52.97",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 40.458,
            "range": "+/- 6.576",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.569,
            "range": "+/- 476",
            "unit": "us",
            "extra": "100 samples\n9 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.472,
            "range": "+/- 753",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 65,
            "range": "+/- 65",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 348,
            "range": "+/- 52",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 63,
            "range": "+/- 6",
            "unit": "ns",
            "extra": "100 samples\n471 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "673a3ce906329e5d7766e0acafaf829d26f3df3d",
          "message": "Merge pull request #52 from bladan/master\n\nImplemented issue #49 and #50",
          "timestamp": "2020-03-23T07:41:03+01:00",
          "tree_id": "6dc7d73a3b869edf3afaf80e1b1f159a87ddb7e7",
          "url": "https://github.com/bernedom/SI/commit/673a3ce906329e5d7766e0acafaf829d26f3df3d"
        },
        "date": 1584945760272,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n22723 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26080 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26585 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26098 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.065,
            "range": "+/- 947",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 8.292,
            "range": "+/- 805",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.597,
            "range": "+/- 1.336",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.358,
            "range": "+/- 1.227",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.867,
            "range": "+/- 2.403",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.713,
            "range": "+/- 1.773",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.373,
            "range": "+/- 718",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.607,
            "range": "+/- 812",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.964,
            "range": "+/- 1.232",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 480.062,
            "range": "+/- 32.086",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 52.768,
            "range": "+/- 4.412",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.499,
            "range": "+/- 1.88",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.004,
            "range": "+/- 2.386",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 109,
            "range": "+/- 99",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 487,
            "range": "+/- 51",
            "unit": "ns",
            "extra": "100 samples\n70 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 96,
            "range": "+/- 5",
            "unit": "ns",
            "extra": "100 samples\n347 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "ae2a68a985f74c75536a4a4e1c87e9c295c96508",
          "message": "Merge pull request #51 from bernedom/feature/narrowing-down\n\nFeature/narrowing down",
          "timestamp": "2020-03-23T08:18:00+01:00",
          "tree_id": "cb659f5f8911bef89b4e61165001aa84c602d800",
          "url": "https://github.com/bernedom/SI/commit/ae2a68a985f74c75536a4a4e1c87e9c295c96508"
        },
        "date": 1584947973586,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20065 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26183 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25638 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25170 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.741,
            "range": "+/- 2.444",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 8.556,
            "range": "+/- 2.418",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.233,
            "range": "+/- 1.473",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.209,
            "range": "+/- 2.756",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.418,
            "range": "+/- 1.346",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.562,
            "range": "+/- 1.273",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.254,
            "range": "+/- 1.255",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.564,
            "range": "+/- 2.163",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.103,
            "range": "+/- 4.073",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 494.1,
            "range": "+/- 66.793",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 54.083,
            "range": "+/- 13.23",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 9.132,
            "range": "+/- 2.577",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.215,
            "range": "+/- 1.981",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 82,
            "range": "+/- 82",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 498,
            "range": "+/- 181",
            "unit": "ns",
            "extra": "100 samples\n65 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 95,
            "range": "+/- 28",
            "unit": "ns",
            "extra": "100 samples\n341 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "2a7be08944659a8e3ae13f46a7b2107426e1c746",
          "message": "Merge pull request #53 from bernedom/doc/release-documentation-for_1.6.0\n\nDoc/release documentation for 1.6.0",
          "timestamp": "2020-03-24T07:47:20+01:00",
          "tree_id": "c017dbaf13bcdd134b4f2dfc0e7959d9a7c11b64",
          "url": "https://github.com/bernedom/SI/commit/2a7be08944659a8e3ae13f46a7b2107426e1c746"
        },
        "date": 1585032529195,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n19894 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27544 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23375 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25687 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.767,
            "range": "+/- 2.316",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 8.397,
            "range": "+/- 3.329",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.188,
            "range": "+/- 1.957",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.651,
            "range": "+/- 2.38",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 10.041,
            "range": "+/- 9.877",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 8.63,
            "range": "+/- 1.559",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.485,
            "range": "+/- 2.123",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.021,
            "range": "+/- 1.904",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.346,
            "range": "+/- 3.068",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 399.224,
            "range": "+/- 76.919",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 44.226,
            "range": "+/- 8.619",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.133,
            "range": "+/- 2.45",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.461,
            "range": "+/- 2.655",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 72,
            "range": "+/- 81",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 429,
            "range": "+/- 130",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 75,
            "range": "+/- 13",
            "unit": "ns",
            "extra": "100 samples\n372 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "400f2e105e5a6cf82b25638b7a4a136c7b892232",
          "message": "Mentioning bladan as contributor",
          "timestamp": "2020-03-24T07:50:34+01:00",
          "tree_id": "4d966fe1061ed881478f8fe6b621f869ba1ecfb4",
          "url": "https://github.com/bernedom/SI/commit/400f2e105e5a6cf82b25638b7a4a136c7b892232"
        },
        "date": 1585032703902,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n17878 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25294 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24386 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24105 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.897,
            "range": "+/- 2.875",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.174,
            "range": "+/- 450",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 8.014,
            "range": "+/- 1.657",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 6.695,
            "range": "+/- 729",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 6.566,
            "range": "+/- 218",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 7.783,
            "range": "+/- 271",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 6.533,
            "range": "+/- 171",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 6.546,
            "range": "+/- 165",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 8.411,
            "range": "+/- 255",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 346.773,
            "range": "+/- 23.623",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 39.36,
            "range": "+/- 2.222",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.083,
            "range": "+/- 159",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.929,
            "range": "+/- 3.538",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 68,
            "range": "+/- 26",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 350,
            "range": "+/- 6",
            "unit": "ns",
            "extra": "100 samples\n71 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 69,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n323 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "f0a11079314c2010cbab75d61f7136c6a87fa739",
          "message": "Merge pull request #54 from bernedom/feature/unary-increment-operators\n\nFeature/unary increment operators",
          "timestamp": "2020-03-29T17:27:17+02:00",
          "tree_id": "e6b6935d9569e40131d0c677f62032359c17e57b",
          "url": "https://github.com/bernedom/SI/commit/f0a11079314c2010cbab75d61f7136c6a87fa739"
        },
        "date": 1585495736564,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n22160 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30142 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30356 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30586 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 9.306,
            "range": "+/- 3.545",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 8.607,
            "range": "+/- 1.808",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.607,
            "range": "+/- 1.821",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.703,
            "range": "+/- 1.62",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.177,
            "range": "+/- 2.27",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.68,
            "range": "+/- 325",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.11,
            "range": "+/- 694",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.471,
            "range": "+/- 4.824",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.929,
            "range": "+/- 2.388",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 455.52,
            "range": "+/- 49.297",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.194,
            "range": "+/- 6.918",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.011,
            "range": "+/- 1.548",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.555,
            "range": "+/- 2.096",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 84,
            "range": "+/- 75",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 476,
            "range": "+/- 106",
            "unit": "ns",
            "extra": "100 samples\n67 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 88,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n350 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "ef17b44e5f569434692b21d63f92a1d32ad5fb58",
          "message": "Merge pull request #55 from bernedom/building/subdirectory-installation-test\n\nBuilding/subdirectory installation test",
          "timestamp": "2020-04-07T07:49:21+02:00",
          "tree_id": "d95ec027d606acec6a020f15d376813d58242aa1",
          "url": "https://github.com/bernedom/SI/commit/ef17b44e5f569434692b21d63f92a1d32ad5fb58"
        },
        "date": 1586238650891,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20356 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26958 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25421 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25446 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.673,
            "range": "+/- 2.098",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.522,
            "range": "+/- 2.029",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.183,
            "range": "+/- 2.996",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.289,
            "range": "+/- 2.885",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 10.091,
            "range": "+/- 3.784",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.94,
            "range": "+/- 3.005",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.616,
            "range": "+/- 4.003",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.016,
            "range": "+/- 1.752",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.37,
            "range": "+/- 1.681",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 468.606,
            "range": "+/- 58.926",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 55.122,
            "range": "+/- 29.715",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.973,
            "range": "+/- 2.371",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.406,
            "range": "+/- 2.635",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 77,
            "range": "+/- 69",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 455,
            "range": "+/- 139",
            "unit": "ns",
            "extra": "100 samples\n63 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 80,
            "range": "+/- 36",
            "unit": "ns",
            "extra": "100 samples\n357 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "54fb6db60e294326a99ab5ca297d877998933917",
          "message": "Merge pull request #56 from bernedom/feature/adding-common-derived-units\n\nFeature/adding common derived units",
          "timestamp": "2020-04-29T19:52:43+02:00",
          "tree_id": "b96721aac09a4a275cdeed0241a23441fe7bd0c9",
          "url": "https://github.com/bernedom/SI/commit/54fb6db60e294326a99ab5ca297d877998933917"
        },
        "date": 1588182848171,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n18543 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24699 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24115 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25908 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.67,
            "range": "+/- 2.247",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.627,
            "range": "+/- 1.076",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 8.394,
            "range": "+/- 1.605",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.675,
            "range": "+/- 2.924",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.5,
            "range": "+/- 3.6",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.646,
            "range": "+/- 3.528",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.348,
            "range": "+/- 2.229",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.149,
            "range": "+/- 3.061",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.323,
            "range": "+/- 2.75",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 471.061,
            "range": "+/- 122.576",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 41.551,
            "range": "+/- 9.252",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.304,
            "range": "+/- 2.727",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.778,
            "range": "+/- 3.468",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 72,
            "range": "+/- 60",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 426,
            "range": "+/- 125",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 76,
            "range": "+/- 19",
            "unit": "ns",
            "extra": "100 samples\n358 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "c066dea96583e9872e636d6d9241e50d95ccf182",
          "message": "Merge pull request #59 from bernedom/feature/astronomic-units\n\nFeature/astronomic units",
          "timestamp": "2020-05-12T21:47:31+02:00",
          "tree_id": "28770e94168a79748792edd6de62dc74161a1571",
          "url": "https://github.com/bernedom/SI/commit/c066dea96583e9872e636d6d9241e50d95ccf182"
        },
        "date": 1589312951349,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31743 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46739 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43874 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44257 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.337,
            "range": "+/- 884",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.614,
            "range": "+/- 641",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.762,
            "range": "+/- 6.333",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.946,
            "range": "+/- 231",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.182,
            "range": "+/- 5.334",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.935,
            "range": "+/- 284",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.04,
            "range": "+/- 828",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.773,
            "range": "+/- 192",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.572,
            "range": "+/- 315",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 447.396,
            "range": "+/- 6.04",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 51.653,
            "range": "+/- 1.889",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.449,
            "range": "+/- 212",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.88,
            "range": "+/- 251",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 91,
            "range": "+/- 50",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 487,
            "range": "+/- 15",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 92,
            "range": "+/- 10",
            "unit": "ns",
            "extra": "100 samples\n422 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "da7142ee8b2dc3863ec7c54c9eb1c373eaff58ce",
          "message": "Merge pull request #60 from bernedom/building/api-documentation-to-gh-pages\n\nBuilding/api documentation to gh pages",
          "timestamp": "2020-05-13T22:52:59+02:00",
          "tree_id": "7e1b36f1b5571ff78162624da10b616ab9d4b4c9",
          "url": "https://github.com/bernedom/SI/commit/da7142ee8b2dc3863ec7c54c9eb1c373eaff58ce"
        },
        "date": 1589403266894,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31082 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46964 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44451 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n47031 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.139,
            "range": "+/- 545",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.939,
            "range": "+/- 329",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.011,
            "range": "+/- 502",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.367,
            "range": "+/- 616",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.507,
            "range": "+/- 1.093",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.669,
            "range": "+/- 418",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.513,
            "range": "+/- 565",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.198,
            "range": "+/- 438",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.09,
            "range": "+/- 2.956",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 425.527,
            "range": "+/- 12.894",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.25,
            "range": "+/- 2.02",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.004,
            "range": "+/- 518",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.565,
            "range": "+/- 798",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 90,
            "range": "+/- 55",
            "unit": "ns",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 478,
            "range": "+/- 98",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 88,
            "range": "+/- 7",
            "unit": "ns",
            "extra": "100 samples\n424 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "d8ec37f10dee772a91f0357169a04cea0afab416",
          "message": "Merge pull request #61 from abelfodil/master\n\nCMake improvements",
          "timestamp": "2020-05-15T17:35:50+02:00",
          "tree_id": "2df2c88f4a9181810f8cf9cc12cb1271fcd16145",
          "url": "https://github.com/bernedom/SI/commit/d8ec37f10dee772a91f0357169a04cea0afab416"
        },
        "date": 1589557033335,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n21660 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29174 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26998 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28812 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.564,
            "range": "+/- 812",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.672,
            "range": "+/- 1.001",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 8.608,
            "range": "+/- 2.279",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.317,
            "range": "+/- 1.093",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.28,
            "range": "+/- 2.797",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.523,
            "range": "+/- 2.751",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.888,
            "range": "+/- 1.367",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.833,
            "range": "+/- 1.065",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 9.751,
            "range": "+/- 1.762",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 428.391,
            "range": "+/- 83.705",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 54.735,
            "range": "+/- 17.931",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.985,
            "range": "+/- 786",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.831,
            "range": "+/- 4.303",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 77,
            "range": "+/- 68",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 497,
            "range": "+/- 214",
            "unit": "ns",
            "extra": "100 samples\n82 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 195,
            "range": "+/- 74",
            "unit": "ns",
            "extra": "100 samples\n188 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "d8ec37f10dee772a91f0357169a04cea0afab416",
          "message": "Merge pull request #61 from abelfodil/master\n\nCMake improvements",
          "timestamp": "2020-05-15T17:35:50+02:00",
          "tree_id": "2df2c88f4a9181810f8cf9cc12cb1271fcd16145",
          "url": "https://github.com/bernedom/SI/commit/d8ec37f10dee772a91f0357169a04cea0afab416"
        },
        "date": 1589557396344,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31432 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46171 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43151 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45487 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.079,
            "range": "+/- 488",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.295,
            "range": "+/- 247",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.201,
            "range": "+/- 997",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.948,
            "range": "+/- 1.381",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.512,
            "range": "+/- 2.389",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 12.221,
            "range": "+/- 9.483",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.631,
            "range": "+/- 248",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 10.23,
            "range": "+/- 14.394",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.309,
            "range": "+/- 1.077",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 442.817,
            "range": "+/- 24.369",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.822,
            "range": "+/- 3.466",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.333,
            "range": "+/- 231",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.72,
            "range": "+/- 628",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 83,
            "range": "+/- 57",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 475,
            "range": "+/- 17",
            "unit": "ns",
            "extra": "100 samples\n80 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 88,
            "range": "+/- 6",
            "unit": "ns",
            "extra": "100 samples\n432 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": false,
          "id": "9c5f62b40f63277bb822ca1871526b732f4c3c0c",
          "message": "Bump version to 1.7.1",
          "timestamp": "2020-05-15T17:38:49+02:00",
          "tree_id": "969337298ce071c8a4a68703955f3a4672ba7bfd",
          "url": "https://github.com/bernedom/SI/commit/9c5f62b40f63277bb822ca1871526b732f4c3c0c"
        },
        "date": 1589558849054,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23500 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30049 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31207 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28619 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.443,
            "range": "+/- 830",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 8.274,
            "range": "+/- 943",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.634,
            "range": "+/- 1.708",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.457,
            "range": "+/- 921",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.778,
            "range": "+/- 659",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.041,
            "range": "+/- 1.433",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.75,
            "range": "+/- 1.344",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.793,
            "range": "+/- 1.379",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 13.76,
            "range": "+/- 18.928",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 452.681,
            "range": "+/- 36.347",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 50.175,
            "range": "+/- 7.07",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.858,
            "range": "+/- 1.21",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.949,
            "range": "+/- 1.411",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 96,
            "range": "+/- 55",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 477,
            "range": "+/- 83",
            "unit": "ns",
            "extra": "100 samples\n71 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 90,
            "range": "+/- 11",
            "unit": "ns",
            "extra": "100 samples\n364 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "d50c75b8ef700087af8ed4b7eb7c98bc4dcc3c62",
          "message": "Merge pull request #62 from bernedom/refactoring/switching-to-int8-exponents\n\nSwitch to int8_t for exponent",
          "timestamp": "2020-05-18T10:32:08+02:00",
          "tree_id": "844a77c71a8086e42fd2f11c66b7e258d2edad44",
          "url": "https://github.com/bernedom/SI/commit/d50c75b8ef700087af8ed4b7eb7c98bc4dcc3c62"
        },
        "date": 1589790820272,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20129 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28034 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28189 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27994 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.48,
            "range": "+/- 5.052",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.106,
            "range": "+/- 1.577",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 12.406,
            "range": "+/- 17.024",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.74,
            "range": "+/- 2.04",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.77,
            "range": "+/- 3.283",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.477,
            "range": "+/- 2.699",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.683,
            "range": "+/- 1.502",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.75,
            "range": "+/- 2.733",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 9.909,
            "range": "+/- 2.105",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 462.122,
            "range": "+/- 96.5",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 48.812,
            "range": "+/- 13.563",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 9.905,
            "range": "+/- 7.073",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.45,
            "range": "+/- 2.992",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 120,
            "range": "+/- 269",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 384,
            "range": "+/- 89",
            "unit": "ns",
            "extra": "100 samples\n69 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 93,
            "range": "+/- 28",
            "unit": "ns",
            "extra": "100 samples\n365 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "fe368bc050b0c548d1ec336b1e78061c54626fe5",
          "message": "Merge pull request #63 from bernedom/building/only-fail-existing-version-check-on-pull-request\n\nBuilding/only fail existing version check on pull request",
          "timestamp": "2020-06-04T09:34:06+02:00",
          "tree_id": "84883ab23943348a54a35583d70be7100128f417",
          "url": "https://github.com/bernedom/SI/commit/fe368bc050b0c548d1ec336b1e78061c54626fe5"
        },
        "date": 1591256137192,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28160 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44407 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44053 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44367 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.651,
            "range": "+/- 262",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.628,
            "range": "+/- 454",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.602,
            "range": "+/- 1.051",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.875,
            "range": "+/- 613",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.036,
            "range": "+/- 973",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.025,
            "range": "+/- 727",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.389,
            "range": "+/- 985",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.962,
            "range": "+/- 221",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 9.625,
            "range": "+/- 810",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 372.563,
            "range": "+/- 47.76",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 43.302,
            "range": "+/- 7.277",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.977,
            "range": "+/- 951",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.584,
            "range": "+/- 1.149",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 97,
            "range": "+/- 98",
            "unit": "ns",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 434,
            "range": "+/- 35",
            "unit": "ns",
            "extra": "100 samples\n79 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 61,
            "range": "+/- 4",
            "unit": "ns",
            "extra": "100 samples\n429 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "d00882819aba86d06b75b04baac1403eb9049331",
          "message": "Merge pull request #65 from bernedom/bugfix/rename-radiant-to-radian\n\nRename radiant_t to radian_t",
          "timestamp": "2020-06-09T15:28:24+02:00",
          "tree_id": "8110547b26b7365df3f0a6d01dc4942594daac88",
          "url": "https://github.com/bernedom/SI/commit/d00882819aba86d06b75b04baac1403eb9049331"
        },
        "date": 1591709388099,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28802 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41425 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40050 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40118 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.121,
            "range": "+/- 1.249",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.522,
            "range": "+/- 1.458",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 8.39,
            "range": "+/- 1.108",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.689,
            "range": "+/- 1.961",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 7.512,
            "range": "+/- 1.038",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.302,
            "range": "+/- 718",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.868,
            "range": "+/- 1.122",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.718,
            "range": "+/- 669",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.62,
            "range": "+/- 1.012",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 414.175,
            "range": "+/- 41.667",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 46.275,
            "range": "+/- 3.564",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.855,
            "range": "+/- 475",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.588,
            "range": "+/- 275",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 95,
            "range": "+/- 77",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 392,
            "range": "+/- 59",
            "unit": "ns",
            "extra": "100 samples\n79 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 90,
            "range": "+/- 12",
            "unit": "ns",
            "extra": "100 samples\n429 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "8b9622547d1fc175e624cf18fffb02a0a9b16bb0",
          "message": "Merge pull request #66 from bernedom/documentation/technical-details\n\nDocumentation/technical details",
          "timestamp": "2020-06-10T17:08:23+02:00",
          "tree_id": "4101219034f78ee8e276fe0aac4bce0b15f1ddd4",
          "url": "https://github.com/bernedom/SI/commit/8b9622547d1fc175e624cf18fffb02a0a9b16bb0"
        },
        "date": 1591801802435,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25669 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31635 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n32185 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31946 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.514,
            "range": "+/- 5.283",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.983,
            "range": "+/- 164",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.248,
            "range": "+/- 1.032",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.397,
            "range": "+/- 297",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.39,
            "range": "+/- 289",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.196,
            "range": "+/- 343",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.517,
            "range": "+/- 716",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.232,
            "range": "+/- 4.495",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.845,
            "range": "+/- 747",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 530.26,
            "range": "+/- 95.617",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 154.324,
            "range": "+/- 44.82",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.029,
            "range": "+/- 431",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.874,
            "range": "+/- 246",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 101,
            "range": "+/- 92",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 503,
            "range": "+/- 25",
            "unit": "ns",
            "extra": "100 samples\n64 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 92,
            "range": "+/- 8",
            "unit": "ns",
            "extra": "100 samples\n328 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "8b9622547d1fc175e624cf18fffb02a0a9b16bb0",
          "message": "Merge pull request #66 from bernedom/documentation/technical-details\n\nDocumentation/technical details",
          "timestamp": "2020-06-10T17:08:23+02:00",
          "tree_id": "4101219034f78ee8e276fe0aac4bce0b15f1ddd4",
          "url": "https://github.com/bernedom/SI/commit/8b9622547d1fc175e624cf18fffb02a0a9b16bb0"
        },
        "date": 1594296643168,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n21469 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26521 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26870 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25256 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.744,
            "range": "+/- 2.537",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.695,
            "range": "+/- 1.764",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.964,
            "range": "+/- 2.626",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.066,
            "range": "+/- 2.67",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 7.699,
            "range": "+/- 1.795",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 21.815,
            "range": "+/- 52.343",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.636,
            "range": "+/- 1.722",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.496,
            "range": "+/- 1.254",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.894,
            "range": "+/- 2.941",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 468.614,
            "range": "+/- 75.721",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 50.729,
            "range": "+/- 10.558",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.157,
            "range": "+/- 1.44",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.581,
            "range": "+/- 2.39",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 92,
            "range": "+/- 79",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 432,
            "range": "+/- 110",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 95,
            "range": "+/- 27",
            "unit": "ns",
            "extra": "100 samples\n350 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "aeed61ed85dc3e876658ea6b51d152f9dce4f5a7",
          "message": "Merge pull request #67 from bernedom/feature/physical-constants\n\nFeature/physical constants",
          "timestamp": "2020-07-16T13:04:25+02:00",
          "tree_id": "dd779cb150dd08941a10e399a7c962356087b291",
          "url": "https://github.com/bernedom/SI/commit/aeed61ed85dc3e876658ea6b51d152f9dce4f5a7"
        },
        "date": 1594897550456,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26900 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40192 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38936 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41875 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.752,
            "range": "+/- 973",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 5.878,
            "range": "+/- 491",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 7.47,
            "range": "+/- 513",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 6.736,
            "range": "+/- 1.199",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 5.892,
            "range": "+/- 911",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 8.995,
            "range": "+/- 1.574",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.127,
            "range": "+/- 978",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.477,
            "range": "+/- 678",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 7.778,
            "range": "+/- 685",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 332.515,
            "range": "+/- 40.434",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 37.318,
            "range": "+/- 4.821",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.105,
            "range": "+/- 3.209",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.17,
            "range": "+/- 1.121",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 102,
            "range": "+/- 79",
            "unit": "ns",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 399,
            "range": "+/- 41",
            "unit": "ns",
            "extra": "100 samples\n79 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 80,
            "range": "+/- 10",
            "unit": "ns",
            "extra": "100 samples\n395 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "d00352c7315022c888980d913eb23ef0d924e7a2",
          "message": "Merge pull request #69 from bernedom/misc/version-bump-and-cleanup\n\nVersion bump to 1.7.4",
          "timestamp": "2020-07-19T22:41:32+02:00",
          "tree_id": "a597334485f79a58ea7a48d4568c61310de24c76",
          "url": "https://github.com/bernedom/SI/commit/d00352c7315022c888980d913eb23ef0d924e7a2"
        },
        "date": 1595191380218,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30317 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n48810 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45189 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44790 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.722,
            "range": "+/- 1.207",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.921,
            "range": "+/- 414",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.885,
            "range": "+/- 813",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.569,
            "range": "+/- 2.022",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 13.385,
            "range": "+/- 47.137",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.57,
            "range": "+/- 963",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.843,
            "range": "+/- 431",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.648,
            "range": "+/- 2.983",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 10.791,
            "range": "+/- 1.15",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 417.401,
            "range": "+/- 17.722",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.537,
            "range": "+/- 3.103",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.636,
            "range": "+/- 526",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.165,
            "range": "+/- 739",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 106,
            "range": "+/- 87",
            "unit": "ns",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 471,
            "range": "+/- 25",
            "unit": "ns",
            "extra": "100 samples\n77 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 95,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n395 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "830a084342db1b8e5dd81ef5afcdb8f45f3e9e65",
          "message": "Merge pull request #68 from timofurrer/patch-1\n\nFix a few typos in the README",
          "timestamp": "2020-07-19T22:43:39+02:00",
          "tree_id": "89eb72410d18a056af78326eb88277edb11edfd6",
          "url": "https://github.com/bernedom/SI/commit/830a084342db1b8e5dd81ef5afcdb8f45f3e9e65"
        },
        "date": 1595191514059,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24420 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28047 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28234 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28018 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.535,
            "range": "+/- 615",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 9.06,
            "range": "+/- 4.869",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.048,
            "range": "+/- 2.463",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.292,
            "range": "+/- 1.943",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.225,
            "range": "+/- 1.69",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.737,
            "range": "+/- 907",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.419,
            "range": "+/- 1.228",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.866,
            "range": "+/- 536",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.016,
            "range": "+/- 3.15",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 504.973,
            "range": "+/- 50.633",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 52.547,
            "range": "+/- 3.116",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.494,
            "range": "+/- 741",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.528,
            "range": "+/- 1.698",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams without construction",
            "value": 99,
            "range": "+/- 90",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "conversion by streams including construction",
            "value": 483,
            "range": "+/- 56",
            "unit": "ns",
            "extra": "100 samples\n71 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 104,
            "range": "+/- 75",
            "unit": "ns",
            "extra": "100 samples\n365 iterations"
          }
        ]
      }
    ]
  }
}