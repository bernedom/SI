window.BENCHMARK_DATA = {
  "lastUpdate": 1643554406974,
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
            "name": "same ratio assignment",
            "value": 10.54,
            "range": "+/- 11.374",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
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
            "name": "same ratio assignment",
            "value": 7.552,
            "range": "+/- 1.537",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.499,
            "range": "+/- 350",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.493,
            "range": "+/- 1.57",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.53,
            "range": "+/- 295",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.628,
            "range": "+/- 1.902",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.415,
            "range": "+/- 280",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.766,
            "range": "+/- 1.655",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 6.476,
            "range": "+/- 759",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.67,
            "range": "+/- 810",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.167,
            "range": "+/- 1.219",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.137,
            "range": "+/- 1.077",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.115,
            "range": "+/- 1.195",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.529,
            "range": "+/- 929",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.546,
            "range": "+/- 1.199",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.652,
            "range": "+/- 1.217",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.166,
            "range": "+/- 1.798",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.363,
            "range": "+/- 2.571",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.783,
            "range": "+/- 2.474",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.434,
            "range": "+/- 2.7",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.103,
            "range": "+/- 2.054",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.176,
            "range": "+/- 2.242",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 5.35,
            "range": "+/- 489",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.309,
            "range": "+/- 1.609",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.308,
            "range": "+/- 985",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 6.083,
            "range": "+/- 46",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 7.969,
            "range": "+/- 538",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.429,
            "range": "+/- 144",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.347,
            "range": "+/- 119",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.84,
            "range": "+/- 1.399",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.419,
            "range": "+/- 2.382",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.31,
            "range": "+/- 2.047",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.767,
            "range": "+/- 3.215",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.59,
            "range": "+/- 2.304",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.549,
            "range": "+/- 3.88",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.073,
            "range": "+/- 1.426",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.493,
            "range": "+/- 1.982",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.189,
            "range": "+/- 3.366",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.884,
            "range": "+/- 2.717",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.478,
            "range": "+/- 1.635",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.298,
            "range": "+/- 3.152",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.669,
            "range": "+/- 1.755",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.645,
            "range": "+/- 1.366",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.192,
            "range": "+/- 302",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.217,
            "range": "+/- 267",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.833,
            "range": "+/- 2.801",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.478,
            "range": "+/- 379",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.702,
            "range": "+/- 1.729",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.675,
            "range": "+/- 280",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.692,
            "range": "+/- 248",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 6.813,
            "range": "+/- 2.42",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.827,
            "range": "+/- 5.583",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.718,
            "range": "+/- 566",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.5,
            "range": "+/- 2.073",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.943,
            "range": "+/- 3.171",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.423,
            "range": "+/- 1.697",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.732,
            "range": "+/- 2.254",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 8.701,
            "range": "+/- 1.422",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.666,
            "range": "+/- 1.259",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.079,
            "range": "+/- 519",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.194,
            "range": "+/- 904",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.387,
            "range": "+/- 2.533",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.143,
            "range": "+/- 791",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.02,
            "range": "+/- 420",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.527,
            "range": "+/- 627",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.001,
            "range": "+/- 608",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.717,
            "range": "+/- 310",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.979,
            "range": "+/- 1.32",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.087,
            "range": "+/- 1.745",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.814,
            "range": "+/- 267",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.924,
            "range": "+/- 282",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.621,
            "range": "+/- 2.224",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.12,
            "range": "+/- 2.801",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.271,
            "range": "+/- 2.552",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.629,
            "range": "+/- 6.106",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.499,
            "range": "+/- 3.025",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.275,
            "range": "+/- 2.379",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.132,
            "range": "+/- 2.332",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "same ratio assignment",
            "value": 7.172,
            "range": "+/- 1.005",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.809,
            "range": "+/- 967",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.922,
            "range": "+/- 1.263",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.676,
            "range": "+/- 1.283",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.553,
            "range": "+/- 3.977",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 11.256,
            "range": "+/- 15.141",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.137,
            "range": "+/- 825",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 107,
            "range": "+/- 212",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.791,
            "range": "+/- 568",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.98,
            "range": "+/- 530",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.75,
            "range": "+/- 1.176",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.506,
            "range": "+/- 637",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.939,
            "range": "+/- 764",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.367,
            "range": "+/- 503",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.215,
            "range": "+/- 672",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 88,
            "range": "+/- 70",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.633,
            "range": "+/- 853",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.895,
            "range": "+/- 852",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.24,
            "range": "+/- 1.123",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.107,
            "range": "+/- 706",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.253,
            "range": "+/- 1.748",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.354,
            "range": "+/- 863",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.564,
            "range": "+/- 2.144",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 87,
            "range": "+/- 149",
            "unit": "ns",
            "extra": "100 samples\n10 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 10.103,
            "range": "+/- 2.674",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.754,
            "range": "+/- 2.539",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 10.731,
            "range": "+/- 2.778",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 10.121,
            "range": "+/- 1.181",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.927,
            "range": "+/- 3.586",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.929,
            "range": "+/- 1.059",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 10.023,
            "range": "+/- 949",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 184,
            "range": "+/- 423",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.606,
            "range": "+/- 619",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.678,
            "range": "+/- 1.082",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.106,
            "range": "+/- 1.647",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.522,
            "range": "+/- 984",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.923,
            "range": "+/- 1.341",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.278,
            "range": "+/- 1.126",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.552,
            "range": "+/- 803",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 65,
            "range": "+/- 65",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 8.292,
            "range": "+/- 805",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.597,
            "range": "+/- 1.336",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.358,
            "range": "+/- 1.227",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.867,
            "range": "+/- 2.403",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.713,
            "range": "+/- 1.773",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.373,
            "range": "+/- 718",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.607,
            "range": "+/- 812",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 109,
            "range": "+/- 99",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 8.556,
            "range": "+/- 2.418",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.233,
            "range": "+/- 1.473",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.209,
            "range": "+/- 2.756",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.418,
            "range": "+/- 1.346",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.562,
            "range": "+/- 1.273",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.254,
            "range": "+/- 1.255",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.564,
            "range": "+/- 2.163",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 82,
            "range": "+/- 82",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 8.397,
            "range": "+/- 3.329",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.188,
            "range": "+/- 1.957",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.651,
            "range": "+/- 2.38",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 10.041,
            "range": "+/- 9.877",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.63,
            "range": "+/- 1.559",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.485,
            "range": "+/- 2.123",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.021,
            "range": "+/- 1.904",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 72,
            "range": "+/- 81",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.174,
            "range": "+/- 450",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.014,
            "range": "+/- 1.657",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.695,
            "range": "+/- 729",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 6.566,
            "range": "+/- 218",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 7.783,
            "range": "+/- 271",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.533,
            "range": "+/- 171",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.546,
            "range": "+/- 165",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 68,
            "range": "+/- 26",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 8.607,
            "range": "+/- 1.808",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.607,
            "range": "+/- 1.821",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.703,
            "range": "+/- 1.62",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.177,
            "range": "+/- 2.27",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.68,
            "range": "+/- 325",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.11,
            "range": "+/- 694",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.471,
            "range": "+/- 4.824",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 84,
            "range": "+/- 75",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 7.522,
            "range": "+/- 2.029",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.183,
            "range": "+/- 2.996",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.289,
            "range": "+/- 2.885",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 10.091,
            "range": "+/- 3.784",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.94,
            "range": "+/- 3.005",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.616,
            "range": "+/- 4.003",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.016,
            "range": "+/- 1.752",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 77,
            "range": "+/- 69",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.627,
            "range": "+/- 1.076",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.394,
            "range": "+/- 1.605",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.675,
            "range": "+/- 2.924",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.5,
            "range": "+/- 3.6",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.646,
            "range": "+/- 3.528",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.348,
            "range": "+/- 2.229",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.149,
            "range": "+/- 3.061",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 72,
            "range": "+/- 60",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 7.614,
            "range": "+/- 641",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.762,
            "range": "+/- 6.333",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.946,
            "range": "+/- 231",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.182,
            "range": "+/- 5.334",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.935,
            "range": "+/- 284",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.04,
            "range": "+/- 828",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.773,
            "range": "+/- 192",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 91,
            "range": "+/- 50",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.939,
            "range": "+/- 329",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.011,
            "range": "+/- 502",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.367,
            "range": "+/- 616",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.507,
            "range": "+/- 1.093",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.669,
            "range": "+/- 418",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.513,
            "range": "+/- 565",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.198,
            "range": "+/- 438",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 90,
            "range": "+/- 55",
            "unit": "ns",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.672,
            "range": "+/- 1.001",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.608,
            "range": "+/- 2.279",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.317,
            "range": "+/- 1.093",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.28,
            "range": "+/- 2.797",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.523,
            "range": "+/- 2.751",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.888,
            "range": "+/- 1.367",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.833,
            "range": "+/- 1.065",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 77,
            "range": "+/- 68",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 7.295,
            "range": "+/- 247",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.201,
            "range": "+/- 997",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.948,
            "range": "+/- 1.381",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.512,
            "range": "+/- 2.389",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 12.221,
            "range": "+/- 9.483",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.631,
            "range": "+/- 248",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 10.23,
            "range": "+/- 14.394",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 83,
            "range": "+/- 57",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 8.274,
            "range": "+/- 943",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.634,
            "range": "+/- 1.708",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.457,
            "range": "+/- 921",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.778,
            "range": "+/- 659",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.041,
            "range": "+/- 1.433",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.75,
            "range": "+/- 1.344",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.793,
            "range": "+/- 1.379",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 96,
            "range": "+/- 55",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 7.106,
            "range": "+/- 1.577",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 12.406,
            "range": "+/- 17.024",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.74,
            "range": "+/- 2.04",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.77,
            "range": "+/- 3.283",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 11.477,
            "range": "+/- 2.699",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.683,
            "range": "+/- 1.502",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.75,
            "range": "+/- 2.733",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 120,
            "range": "+/- 269",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.628,
            "range": "+/- 454",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.602,
            "range": "+/- 1.051",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.875,
            "range": "+/- 613",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.036,
            "range": "+/- 973",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.025,
            "range": "+/- 727",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.389,
            "range": "+/- 985",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.962,
            "range": "+/- 221",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 97,
            "range": "+/- 98",
            "unit": "ns",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.522,
            "range": "+/- 1.458",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.39,
            "range": "+/- 1.108",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.689,
            "range": "+/- 1.961",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.512,
            "range": "+/- 1.038",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.302,
            "range": "+/- 718",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.868,
            "range": "+/- 1.122",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.718,
            "range": "+/- 669",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 95,
            "range": "+/- 77",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 7.983,
            "range": "+/- 164",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.248,
            "range": "+/- 1.032",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.397,
            "range": "+/- 297",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.39,
            "range": "+/- 289",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.196,
            "range": "+/- 343",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.517,
            "range": "+/- 716",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.232,
            "range": "+/- 4.495",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 101,
            "range": "+/- 92",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 7.695,
            "range": "+/- 1.764",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.964,
            "range": "+/- 2.626",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.066,
            "range": "+/- 2.67",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.699,
            "range": "+/- 1.795",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 21.815,
            "range": "+/- 52.343",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.636,
            "range": "+/- 1.722",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.496,
            "range": "+/- 1.254",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 92,
            "range": "+/- 79",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 5.878,
            "range": "+/- 491",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.47,
            "range": "+/- 513",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.736,
            "range": "+/- 1.199",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.892,
            "range": "+/- 911",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.995,
            "range": "+/- 1.574",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.127,
            "range": "+/- 978",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.477,
            "range": "+/- 678",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 102,
            "range": "+/- 79",
            "unit": "ns",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 6.921,
            "range": "+/- 414",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.885,
            "range": "+/- 813",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.569,
            "range": "+/- 2.022",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 13.385,
            "range": "+/- 47.137",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.57,
            "range": "+/- 963",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.843,
            "range": "+/- 431",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.648,
            "range": "+/- 2.983",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 106,
            "range": "+/- 87",
            "unit": "ns",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
            "name": "same ratio assignment",
            "value": 9.06,
            "range": "+/- 4.869",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.048,
            "range": "+/- 2.463",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.292,
            "range": "+/- 1.943",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.225,
            "range": "+/- 1.69",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.737,
            "range": "+/- 907",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 9.419,
            "range": "+/- 1.228",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.866,
            "range": "+/- 536",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
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
            "name": "conversion by streams",
            "value": 99,
            "range": "+/- 90",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
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
        "date": 1595225172191,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n22248 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28627 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27540 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28630 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.861,
            "range": "+/- 1.266",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.392,
            "range": "+/- 2.22",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.437,
            "range": "+/- 2.547",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.7,
            "range": "+/- 3.134",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.528,
            "range": "+/- 3.661",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.92,
            "range": "+/- 2.362",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 13.781,
            "range": "+/- 34.215",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 10.621,
            "range": "+/- 6.823",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.431,
            "range": "+/- 2.903",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 412.737,
            "range": "+/- 65.063",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.687,
            "range": "+/- 13.565",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.565,
            "range": "+/- 1.239",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.339,
            "range": "+/- 2.343",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 99,
            "range": "+/- 230",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 457,
            "range": "+/- 119",
            "unit": "ns",
            "extra": "100 samples\n84 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 92,
            "range": "+/- 27",
            "unit": "ns",
            "extra": "100 samples\n312 iterations"
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
          "id": "0c5a50632e4703859638d58c0626020138101ea1",
          "message": "Merge pull request #70 from bernedom/test/building-with-conan-cmake-original\n\nTest/building with conan cmake original",
          "timestamp": "2020-08-08T12:23:09+02:00",
          "tree_id": "72f1a07466ab6130d26e07eebe7f7b1e87a7c58b",
          "url": "https://github.com/bernedom/SI/commit/0c5a50632e4703859638d58c0626020138101ea1"
        },
        "date": 1596882269885,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24751 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41290 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40651 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42251 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.68,
            "range": "+/- 601",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.421,
            "range": "+/- 266",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 12.359,
            "range": "+/- 18.759",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.795,
            "range": "+/- 812",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.492,
            "range": "+/- 1.002",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.359,
            "range": "+/- 1.318",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.727,
            "range": "+/- 577",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.261,
            "range": "+/- 1.18",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.398,
            "range": "+/- 597",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 342.284,
            "range": "+/- 44.606",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 40.913,
            "range": "+/- 10.475",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.633,
            "range": "+/- 1.777",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.214,
            "range": "+/- 1.259",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 76,
            "range": "+/- 82",
            "unit": "ns",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 376,
            "range": "+/- 41",
            "unit": "ns",
            "extra": "100 samples\n72 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 65,
            "range": "+/- 1",
            "unit": "ns",
            "extra": "100 samples\n402 iterations"
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
          "id": "fbbf3d516be075c382d6c01d167573f0f674c27e",
          "message": "Merge pull request #71 from bernedom/building/conan-gets-version-from-cmake\n\nBuilding/conan gets version from cmake",
          "timestamp": "2020-08-17T16:09:28+02:00",
          "tree_id": "75c3447f6af64ad6211d87c13cf8a68939a81103",
          "url": "https://github.com/bernedom/SI/commit/fbbf3d516be075c382d6c01d167573f0f674c27e"
        },
        "date": 1597673455772,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30108 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46390 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44753 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n46250 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.156,
            "range": "+/- 199",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.54,
            "range": "+/- 2.659",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.064,
            "range": "+/- 3.742",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.152,
            "range": "+/- 5.043",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.365,
            "range": "+/- 642",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.667,
            "range": "+/- 779",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.692,
            "range": "+/- 1.832",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.153,
            "range": "+/- 677",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.665,
            "range": "+/- 834",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 403.238,
            "range": "+/- 21.026",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.135,
            "range": "+/- 3.622",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.016,
            "range": "+/- 680",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.111,
            "range": "+/- 1.095",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 89,
            "range": "+/- 43",
            "unit": "ns",
            "extra": "100 samples\n12 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 484,
            "range": "+/- 41",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 85,
            "range": "+/- 9",
            "unit": "ns",
            "extra": "100 samples\n405 iterations"
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
          "id": "452511fc4be86d13411652202744bbfa27211b96",
          "message": "Merge pull request #72 from bernedom/refactoring/removing-conan-warnings\n\nRefactoring/removing conan warnings",
          "timestamp": "2020-08-21T20:49:01+02:00",
          "tree_id": "49c2ebe012332c120eb9d2cb6737751572745fa5",
          "url": "https://github.com/bernedom/SI/commit/452511fc4be86d13411652202744bbfa27211b96"
        },
        "date": 1598035828097,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24810 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29677 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27729 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29865 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 9.972,
            "range": "+/- 6.215",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 10.963,
            "range": "+/- 11.919",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.685,
            "range": "+/- 610",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.416,
            "range": "+/- 460",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.375,
            "range": "+/- 615",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.897,
            "range": "+/- 436",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.784,
            "range": "+/- 1.213",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.469,
            "range": "+/- 667",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 14.362,
            "range": "+/- 15.599",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 493.755,
            "range": "+/- 75.221",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 164.3,
            "range": "+/- 40.776",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.676,
            "range": "+/- 3.171",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.253,
            "range": "+/- 1.197",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 106,
            "range": "+/- 77",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 464,
            "range": "+/- 79",
            "unit": "ns",
            "extra": "100 samples\n64 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 86,
            "range": "+/- 15",
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
          "id": "ea9bdaf5ed85df46880ad5dcbd2c533ba582b581",
          "message": "Merge pull request #73 from bernedom/refactoring/conanfile-create-cmake-only-once\n\nRefactoring/conanfile create cmake only once",
          "timestamp": "2020-09-06T22:04:13+02:00",
          "tree_id": "ccb2a5b02f40b0ca5aca5b045fb992d5c1d88e54",
          "url": "https://github.com/bernedom/SI/commit/ea9bdaf5ed85df46880ad5dcbd2c533ba582b581"
        },
        "date": 1599422738501,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20353 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26244 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26955 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27021 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.232,
            "range": "+/- 2.958",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.704,
            "range": "+/- 2.035",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.57,
            "range": "+/- 2.988",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.497,
            "range": "+/- 2.307",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.342,
            "range": "+/- 2.614",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.791,
            "range": "+/- 2.627",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.658,
            "range": "+/- 1.56",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.584,
            "range": "+/- 2.28",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.808,
            "range": "+/- 3.652",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 441.274,
            "range": "+/- 51.902",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 52.783,
            "range": "+/- 18.699",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.79,
            "range": "+/- 2.737",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.357,
            "range": "+/- 3.135",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 77,
            "range": "+/- 76",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 407,
            "range": "+/- 118",
            "unit": "ns",
            "extra": "100 samples\n67 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 82,
            "range": "+/- 25",
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
          "id": "0f3c5bf7e0e9f80bb2dda5dda13f185ea3e985bf",
          "message": "Merge pull request #74 from bernedom/documentation/conan-center-instructions\n\nUpdate installation instructions",
          "timestamp": "2020-09-11T07:29:14+02:00",
          "tree_id": "e60cb1c62063565d6a76ab7d2d3eddc6e0cbfd83",
          "url": "https://github.com/bernedom/SI/commit/0f3c5bf7e0e9f80bb2dda5dda13f185ea3e985bf"
        },
        "date": 1599802238648,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20181 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25038 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25478 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25931 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.193,
            "range": "+/- 3.177",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.283,
            "range": "+/- 1.952",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.185,
            "range": "+/- 2.679",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.421,
            "range": "+/- 2.266",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.904,
            "range": "+/- 2.772",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.915,
            "range": "+/- 3.116",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.513,
            "range": "+/- 2.84",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.979,
            "range": "+/- 1.838",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 12.097,
            "range": "+/- 4.692",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 440.071,
            "range": "+/- 59.501",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.069,
            "range": "+/- 17.155",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.879,
            "range": "+/- 1.956",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.801,
            "range": "+/- 2.652",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 98,
            "range": "+/- 229",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 482,
            "range": "+/- 178",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 85,
            "range": "+/- 31",
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
          "id": "d55d8fd322a3ee5690db990dfd2e9effd87343fc",
          "message": "Merge pull request #75 from bernedom/feature/fractions-as-exponent\n\nFeature/fractions as exponent",
          "timestamp": "2020-10-19T16:38:48+02:00",
          "tree_id": "f2a89739d51588c58e36f09941d3e1218d83f374",
          "url": "https://github.com/bernedom/SI/commit/d55d8fd322a3ee5690db990dfd2e9effd87343fc"
        },
        "date": 1603118420808,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30640 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n47363 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45445 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n47847 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.528,
            "range": "+/- 99",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.547,
            "range": "+/- 329",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.544,
            "range": "+/- 116",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7,
            "range": "+/- 96",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.017,
            "range": "+/- 159",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.348,
            "range": "+/- 253",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.176,
            "range": "+/- 116",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.955,
            "range": "+/- 82",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.747,
            "range": "+/- 63",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 429.058,
            "range": "+/- 7.466",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.317,
            "range": "+/- 1.137",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.576,
            "range": "+/- 98",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.923,
            "range": "+/- 33",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 95,
            "range": "+/- 23",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 503,
            "range": "+/- 6",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 96,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n393 iterations"
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
          "id": "e9ecb719d98049ab9c0b12e7d88e757070f68b21",
          "message": "Merge pull request #76 from bernedom/packaging/lowercase-conan-package\n\nRename conan package to 'si'",
          "timestamp": "2020-11-03T17:26:44+01:00",
          "tree_id": "cca6f6f2734283fe1685bff10e04bcc368b2b5f9",
          "url": "https://github.com/bernedom/SI/commit/e9ecb719d98049ab9c0b12e7d88e757070f68b21"
        },
        "date": 1604420887063,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27173 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40258 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37575 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40038 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.003,
            "range": "+/- 610",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 4.509,
            "range": "+/- 441",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.062,
            "range": "+/- 598",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.796,
            "range": "+/- 729",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 6.731,
            "range": "+/- 406",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.694,
            "range": "+/- 584",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.255,
            "range": "+/- 929",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.933,
            "range": "+/- 690",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.186,
            "range": "+/- 1.171",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 363.425,
            "range": "+/- 34.474",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 42.112,
            "range": "+/- 3.935",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 4.715,
            "range": "+/- 347",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.066,
            "range": "+/- 888",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 88,
            "range": "+/- 28",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 436,
            "range": "+/- 55",
            "unit": "ns",
            "extra": "100 samples\n75 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 87,
            "range": "+/- 11",
            "unit": "ns",
            "extra": "100 samples\n381 iterations"
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
          "id": "94d5160fae2285ed5e5edc4c6d3abebf34e69f2a",
          "message": "Fix typo in readme",
          "timestamp": "2020-11-04T13:00:32+01:00",
          "tree_id": "5060933b2d12aa50028f3afc4149a041e71e7318",
          "url": "https://github.com/bernedom/SI/commit/94d5160fae2285ed5e5edc4c6d3abebf34e69f2a"
        },
        "date": 1604491323689,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26247 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28677 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26829 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27747 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.443,
            "range": "+/- 930",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.233,
            "range": "+/- 558",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.567,
            "range": "+/- 890",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.638,
            "range": "+/- 853",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.462,
            "range": "+/- 482",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 12.406,
            "range": "+/- 30.335",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.517,
            "range": "+/- 539",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.577,
            "range": "+/- 1.019",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.616,
            "range": "+/- 1.68",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 414.786,
            "range": "+/- 28.386",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 133.957,
            "range": "+/- 16.85",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.062,
            "range": "+/- 287",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.408,
            "range": "+/- 1.624",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 88,
            "range": "+/- 88",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 457,
            "range": "+/- 73",
            "unit": "ns",
            "extra": "100 samples\n62 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 108,
            "range": "+/- 167",
            "unit": "ns",
            "extra": "100 samples\n338 iterations"
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
          "id": "94d5160fae2285ed5e5edc4c6d3abebf34e69f2a",
          "message": "Fix typo in readme",
          "timestamp": "2020-11-04T13:00:32+01:00",
          "tree_id": "5060933b2d12aa50028f3afc4149a041e71e7318",
          "url": "https://github.com/bernedom/SI/commit/94d5160fae2285ed5e5edc4c6d3abebf34e69f2a"
        },
        "date": 1604491933602,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n22214 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25957 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27239 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27870 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.386,
            "range": "+/- 1.232",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 6.906,
            "range": "+/- 1.735",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.45,
            "range": "+/- 3.656",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.222,
            "range": "+/- 2.607",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.942,
            "range": "+/- 1.163",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.455,
            "range": "+/- 3.661",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.203,
            "range": "+/- 804",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.399,
            "range": "+/- 1.692",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.82,
            "range": "+/- 2.676",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 461.52,
            "range": "+/- 54.573",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 46.682,
            "range": "+/- 10.451",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.721,
            "range": "+/- 3.281",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.565,
            "range": "+/- 1.991",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 92,
            "range": "+/- 80",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 484,
            "range": "+/- 91",
            "unit": "ns",
            "extra": "100 samples\n70 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 89,
            "range": "+/- 17",
            "unit": "ns",
            "extra": "100 samples\n378 iterations"
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
          "id": "8a30233938ba4eff8218b001fda9e9baaf265b82",
          "message": "Merge pull request #77 from bernedom/refactoring/simpler_enable_ifs\n\nRefactoring/simpler enable ifs",
          "timestamp": "2020-11-27T15:04:16+01:00",
          "tree_id": "917aeabcb3bb0b86c2a3e3448142e56b1a567497",
          "url": "https://github.com/bernedom/SI/commit/8a30233938ba4eff8218b001fda9e9baaf265b82"
        },
        "date": 1606485939895,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n18853 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n24444 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25233 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25989 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.159,
            "range": "+/- 1.905",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.783,
            "range": "+/- 2.254",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.087,
            "range": "+/- 1.05",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.696,
            "range": "+/- 3.687",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.307,
            "range": "+/- 907",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 13.576,
            "range": "+/- 40.193",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.911,
            "range": "+/- 1.396",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.398,
            "range": "+/- 974",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.754,
            "range": "+/- 2.212",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 395.093,
            "range": "+/- 51.824",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 41.347,
            "range": "+/- 8.538",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.39,
            "range": "+/- 1.8",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.968,
            "range": "+/- 3.175",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 76,
            "range": "+/- 76",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 435,
            "range": "+/- 128",
            "unit": "ns",
            "extra": "100 samples\n77 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 93,
            "range": "+/- 27",
            "unit": "ns",
            "extra": "100 samples\n380 iterations"
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
          "id": "6cb3c584f7cecea98a51f45bd2e285be6e76a72a",
          "message": "Merge pull request #78 from bernedom/building/move-to-github-actions\n\nBuilding/move to GitHub actions",
          "timestamp": "2020-11-30T23:41:17+01:00",
          "tree_id": "70652dc126e70e6b308ad0986a38b4cd1118e152",
          "url": "https://github.com/bernedom/SI/commit/6cb3c584f7cecea98a51f45bd2e285be6e76a72a"
        },
        "date": 1606776159948,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29010 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41613 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38982 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41139 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.288,
            "range": "+/- 645",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.432,
            "range": "+/- 464",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.292,
            "range": "+/- 523",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.277,
            "range": "+/- 272",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.04,
            "range": "+/- 380",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.142,
            "range": "+/- 120",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.417,
            "range": "+/- 726",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.757,
            "range": "+/- 675",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.656,
            "range": "+/- 718",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 411.727,
            "range": "+/- 20.313",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 45.198,
            "range": "+/- 2.909",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.508,
            "range": "+/- 358",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.225,
            "range": "+/- 697",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 96,
            "range": "+/- 26",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 432,
            "range": "+/- 85",
            "unit": "ns",
            "extra": "100 samples\n78 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 95,
            "range": "+/- 7",
            "unit": "ns",
            "extra": "100 samples\n380 iterations"
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
          "id": "0e4cd23d861ac8da8403b83bdebd37cb5ac9d502",
          "message": "Merge pull request #79 from bernedom/building/deploy-to-bintray\n\nBuilding/deploy to bintray",
          "timestamp": "2020-12-03T23:17:01+01:00",
          "tree_id": "5868d1b159124204f6bb06b696e5cf479ae69e23",
          "url": "https://github.com/bernedom/SI/commit/0e4cd23d861ac8da8403b83bdebd37cb5ac9d502"
        },
        "date": 1607033914350,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28071 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40312 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38721 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40159 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.569,
            "range": "+/- 356",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.211,
            "range": "+/- 657",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.356,
            "range": "+/- 741",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.009,
            "range": "+/- 620",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 6.859,
            "range": "+/- 497",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.453,
            "range": "+/- 1.106",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.079,
            "range": "+/- 112",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.866,
            "range": "+/- 267",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.18,
            "range": "+/- 798",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 408.379,
            "range": "+/- 32.29",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 44.098,
            "range": "+/- 3.856",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.385,
            "range": "+/- 424",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.36,
            "range": "+/- 769",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 80,
            "range": "+/- 53",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 475,
            "range": "+/- 6",
            "unit": "ns",
            "extra": "100 samples\n70 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 97,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n369 iterations"
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
          "id": "fce11bcbaf74854f0180db92865b14eba1853f9e",
          "message": "Merge pull request #80 from bernedom/documentation/package-renaming\n\nDocumentation/package renaming",
          "timestamp": "2020-12-04T09:14:57+01:00",
          "tree_id": "03128c1a4346811f372760b719d16344d2fe1cca",
          "url": "https://github.com/bernedom/SI/commit/fce11bcbaf74854f0180db92865b14eba1853f9e"
        },
        "date": 1607073311072,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27503 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43407 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41304 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42371 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 3.857,
            "range": "+/- 29",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 3.799,
            "range": "+/- 58",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.54,
            "range": "+/- 1.05",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.272,
            "range": "+/- 549",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.584,
            "range": "+/- 68",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 7.429,
            "range": "+/- 1.193",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.576,
            "range": "+/- 706",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 4.9,
            "range": "+/- 43",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 7.315,
            "range": "+/- 1",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 420.945,
            "range": "+/- 14.948",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 42.997,
            "range": "+/- 5.17",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 4.871,
            "range": "+/- 494",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.151,
            "range": "+/- 943",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 66,
            "range": "+/- 18",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 445,
            "range": "+/- 50",
            "unit": "ns",
            "extra": "100 samples\n78 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 89,
            "range": "+/- 4",
            "unit": "ns",
            "extra": "100 samples\n374 iterations"
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
          "id": "bc4f9a16ae6300c41b8394e652dbe0ae60ab7bef",
          "message": "Merge pull request #82 from bernedom/refactoring/fix-non-matching-test-names\n\nFix typos in test names",
          "timestamp": "2020-12-15T16:49:57+01:00",
          "tree_id": "eabd05105df74bdbba64f6cc3a7aa5019cecae60",
          "url": "https://github.com/bernedom/SI/commit/bc4f9a16ae6300c41b8394e652dbe0ae60ab7bef"
        },
        "date": 1608047480717,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n25258 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n36655 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n35552 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n36513 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 4.029,
            "range": "+/- 98",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 4.295,
            "range": "+/- 38",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 6.587,
            "range": "+/- 148",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 5.092,
            "range": "+/- 26",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.051,
            "range": "+/- 97",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 6.536,
            "range": "+/- 18",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 5.006,
            "range": "+/- 85",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 5.103,
            "range": "+/- 103",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 7.25,
            "range": "+/- 12",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 314.704,
            "range": "+/- 2.061",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 34.34,
            "range": "+/- 403",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.702,
            "range": "+/- 178",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 6.558,
            "range": "+/- 93",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 70,
            "range": "+/- 19",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 373,
            "range": "+/- 8",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 71,
            "range": "+/- 1",
            "unit": "ns",
            "extra": "100 samples\n389 iterations"
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
          "id": "bf3432398ac2001e1963ab882b205b8096fcb380",
          "message": "Merge pull request #83 from bernedom/feature/full-magnitudes-for-mass\n\nFeature/full magnitudes for mass",
          "timestamp": "2020-12-17T16:33:09+01:00",
          "tree_id": "27f7f6a237950b26d61747ec156fa771bb5b3602",
          "url": "https://github.com/bernedom/SI/commit/bf3432398ac2001e1963ab882b205b8096fcb380"
        },
        "date": 1608219269525,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28334 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37192 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n36403 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37076 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 4.549,
            "range": "+/- 76",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 4.605,
            "range": "+/- 77",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.346,
            "range": "+/- 98",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 5.691,
            "range": "+/- 87",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.698,
            "range": "+/- 213",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 7.451,
            "range": "+/- 100",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 5.642,
            "range": "+/- 106",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 5.665,
            "range": "+/- 85",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.222,
            "range": "+/- 147",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 359.145,
            "range": "+/- 1.894",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 38.788,
            "range": "+/- 602",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 4.49,
            "range": "+/- 62",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 7.344,
            "range": "+/- 155",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 78,
            "range": "+/- 12",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 423,
            "range": "+/- 8",
            "unit": "ns",
            "extra": "100 samples\n74 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 79,
            "range": "+/- 1",
            "unit": "ns",
            "extra": "100 samples\n386 iterations"
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
          "id": "2d9619570fcc8af86f65a796d17628450cef711a",
          "message": "Merge pull request #84 from bernedom/doc/update-readme\n\nDoc/update readme",
          "timestamp": "2020-12-23T07:25:04+01:00",
          "tree_id": "54d6aa9b11f0cfe4bf3375f9ad09c6697a01a536",
          "url": "https://github.com/bernedom/SI/commit/2d9619570fcc8af86f65a796d17628450cef711a"
        },
        "date": 1608704787175,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28099 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n39646 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37817 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n39636 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 4.472,
            "range": "+/- 117",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 4.564,
            "range": "+/- 106",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.324,
            "range": "+/- 165",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 5.731,
            "range": "+/- 82",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.828,
            "range": "+/- 59",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 7.435,
            "range": "+/- 138",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 5.697,
            "range": "+/- 78",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 5.667,
            "range": "+/- 126",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.207,
            "range": "+/- 277",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 364.158,
            "range": "+/- 2.819",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 39.914,
            "range": "+/- 792",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 4.501,
            "range": "+/- 111",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 7.381,
            "range": "+/- 159",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 81,
            "range": "+/- 40",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 425,
            "range": "+/- 10",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 80,
            "range": "+/- 3",
            "unit": "ns",
            "extra": "100 samples\n384 iterations"
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
          "id": "1ecb63fe024a28dcca4f8d0075d0c7a2142fabf2",
          "message": "Update ci scripts to use main instead of master",
          "timestamp": "2021-01-18T13:20:02+01:00",
          "tree_id": "adebd4187efe62682dd484cc02b0b08fffb4301f",
          "url": "https://github.com/bernedom/SI/commit/1ecb63fe024a28dcca4f8d0075d0c7a2142fabf2"
        },
        "date": 1610972487209,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28202 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41905 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40083 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41792 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 4.549,
            "range": "+/- 60",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 4.509,
            "range": "+/- 57",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 7.367,
            "range": "+/- 82",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 5.719,
            "range": "+/- 73",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.68,
            "range": "+/- 71",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.042,
            "range": "+/- 157",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 5.792,
            "range": "+/- 94",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 5.818,
            "range": "+/- 87",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.31,
            "range": "+/- 123",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 359.443,
            "range": "+/- 2.708",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 39.698,
            "range": "+/- 931",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 4.893,
            "range": "+/- 73",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 7.515,
            "range": "+/- 237",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 82,
            "range": "+/- 55",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 423,
            "range": "+/- 19",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 80,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n385 iterations"
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
          "id": "0ee820aab8b7da182ffad0754e3316df00d257c7",
          "message": "Merge pull request #85 from bernedom/feature/add-tonne-as-type\n\nAdd ton_t for mass",
          "timestamp": "2021-01-30T12:04:16+01:00",
          "tree_id": "05b5effddc4648784c3e098df9b985f820ee7f33",
          "url": "https://github.com/bernedom/SI/commit/0ee820aab8b7da182ffad0754e3316df00d257c7"
        },
        "date": 1612004740788,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29959 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43345 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41602 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43527 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.452,
            "range": "+/- 771",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.481,
            "range": "+/- 114",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 8.522,
            "range": "+/- 807",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.89,
            "range": "+/- 972",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 6.994,
            "range": "+/- 683",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.933,
            "range": "+/- 754",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.803,
            "range": "+/- 659",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.014,
            "range": "+/- 847",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.924,
            "range": "+/- 1.328",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 419.749,
            "range": "+/- 29.608",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 46.049,
            "range": "+/- 4.383",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.532,
            "range": "+/- 517",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.758,
            "range": "+/- 612",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 96,
            "range": "+/- 26",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 508,
            "range": "+/- 8",
            "unit": "ns",
            "extra": "100 samples\n73 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 96,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n379 iterations"
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
          "id": "417e51747ed4ce2abacfb89381f90dfc46c782bb",
          "message": "Merge pull request #86 from bernedom/feature/literals-for-ton\n\nFeature/literals for ton",
          "timestamp": "2021-02-10T13:43:55+01:00",
          "tree_id": "fd00df54333d2593ce2bb05695fba6c4609e8571",
          "url": "https://github.com/bernedom/SI/commit/417e51747ed4ce2abacfb89381f90dfc46c782bb"
        },
        "date": 1612961126757,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n22265 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28434 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29229 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28844 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.85,
            "range": "+/- 2.323",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 8.714,
            "range": "+/- 1.47",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.769,
            "range": "+/- 2.228",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.771,
            "range": "+/- 2.841",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 10.265,
            "range": "+/- 6.223",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.066,
            "range": "+/- 1.881",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.916,
            "range": "+/- 1.871",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.967,
            "range": "+/- 718",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 13.007,
            "range": "+/- 3.407",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 481.409,
            "range": "+/- 60.351",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 57.787,
            "range": "+/- 38.039",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.466,
            "range": "+/- 1.46",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.096,
            "range": "+/- 2.976",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 95,
            "range": "+/- 79",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 494,
            "range": "+/- 89",
            "unit": "ns",
            "extra": "100 samples\n71 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 92,
            "range": "+/- 20",
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
          "id": "b490c65f4a85910f6f8e7588770c414f857f1130",
          "message": "Merge pull request #87 from bernedom/documentation/remove-bintray-links\n\nDocumentation/remove bintray links",
          "timestamp": "2021-03-12T15:03:21+01:00",
          "tree_id": "7255ce02dbb8ea4c58bd72274938c772cd719847",
          "url": "https://github.com/bernedom/SI/commit/b490c65f4a85910f6f8e7588770c414f857f1130"
        },
        "date": 1615557900521,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n28939 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27895 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30475 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29765 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.599,
            "range": "+/- 1.986",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 8.207,
            "range": "+/- 522",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.02,
            "range": "+/- 719",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.521,
            "range": "+/- 268",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.825,
            "range": "+/- 2.438",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.785,
            "range": "+/- 2.884",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.615,
            "range": "+/- 321",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.597,
            "range": "+/- 370",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 11.173,
            "range": "+/- 1.643",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 482.55,
            "range": "+/- 54.615",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 145.729,
            "range": "+/- 3.754",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.107,
            "range": "+/- 295",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.056,
            "range": "+/- 692",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 101,
            "range": "+/- 92",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 461,
            "range": "+/- 17",
            "unit": "ns",
            "extra": "100 samples\n70 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 95,
            "range": "+/- 15",
            "unit": "ns",
            "extra": "100 samples\n348 iterations"
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
          "id": "b490c65f4a85910f6f8e7588770c414f857f1130",
          "message": "Merge pull request #87 from bernedom/documentation/remove-bintray-links\n\nDocumentation/remove bintray links",
          "timestamp": "2021-03-12T15:03:21+01:00",
          "tree_id": "7255ce02dbb8ea4c58bd72274938c772cd719847",
          "url": "https://github.com/bernedom/SI/commit/b490c65f4a85910f6f8e7588770c414f857f1130"
        },
        "date": 1615558137220,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23367 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31283 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n30183 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29247 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.808,
            "range": "+/- 1.657",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.441,
            "range": "+/- 2.063",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.685,
            "range": "+/- 7.716",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.479,
            "range": "+/- 1.872",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.984,
            "range": "+/- 2.684",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.319,
            "range": "+/- 3.348",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.78,
            "range": "+/- 2.61",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.314,
            "range": "+/- 2.689",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.3,
            "range": "+/- 2.39",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 483.315,
            "range": "+/- 58.423",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 53.377,
            "range": "+/- 13.869",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.336,
            "range": "+/- 2.203",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.402,
            "range": "+/- 4.589",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 137,
            "range": "+/- 289",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 526,
            "range": "+/- 201",
            "unit": "ns",
            "extra": "100 samples\n87 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 84,
            "range": "+/- 30",
            "unit": "ns",
            "extra": "100 samples\n433 iterations"
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
          "id": "5163b08a5122c25ed177d6d098567ca537edb44c",
          "message": "Merge pull request #88 from bernedom/refactoring/move-unit_cast-to-own-include-file\n\nRefactoring/move unit cast to own include file",
          "timestamp": "2021-03-24T10:39:02+01:00",
          "tree_id": "31d04346d42c1812a56f386c17a53a818843fe3b",
          "url": "https://github.com/bernedom/SI/commit/5163b08a5122c25ed177d6d098567ca537edb44c"
        },
        "date": 1616578830653,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n19582 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23603 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n22707 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23152 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.724,
            "range": "+/- 3.501",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 9.476,
            "range": "+/- 3.21",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.547,
            "range": "+/- 3.602",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.582,
            "range": "+/- 2.293",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.222,
            "range": "+/- 4.138",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.55,
            "range": "+/- 5.065",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.328,
            "range": "+/- 2.108",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.096,
            "range": "+/- 1.2",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.631,
            "range": "+/- 2.858",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 401.058,
            "range": "+/- 58.024",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 39.209,
            "range": "+/- 5.496",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.129,
            "range": "+/- 2.161",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.183,
            "range": "+/- 3.554",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 139,
            "range": "+/- 238",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 469,
            "range": "+/- 219",
            "unit": "ns",
            "extra": "100 samples\n61 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 92,
            "range": "+/- 27",
            "unit": "ns",
            "extra": "100 samples\n289 iterations"
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
          "id": "3a8bf95edd711d4b5faef841cc9b7431230f4de9",
          "message": "Merge pull request #89 from bernedom/refactoring/cleanup\n\nRefactoring/cleanup",
          "timestamp": "2021-04-09T23:03:46+02:00",
          "tree_id": "a20c28227bcc0d5e2850292e605118af055ed5a9",
          "url": "https://github.com/bernedom/SI/commit/3a8bf95edd711d4b5faef841cc9b7431230f4de9"
        },
        "date": 1618002314640,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n27408 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41027 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41241 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n41069 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.619,
            "range": "+/- 113",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.526,
            "range": "+/- 103",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.001,
            "range": "+/- 64",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.096,
            "range": "+/- 153",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.033,
            "range": "+/- 125",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.036,
            "range": "+/- 166",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.447,
            "range": "+/- 238",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.088,
            "range": "+/- 254",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.103,
            "range": "+/- 150",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 431.136,
            "range": "+/- 2.364",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 42.94,
            "range": "+/- 936",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.622,
            "range": "+/- 118",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.401,
            "range": "+/- 161",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 106,
            "range": "+/- 23",
            "unit": "ns",
            "extra": "100 samples\n11 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 485,
            "range": "+/- 14",
            "unit": "ns",
            "extra": "100 samples\n67 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 109,
            "range": "+/- 2",
            "unit": "ns",
            "extra": "100 samples\n302 iterations"
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
          "id": "d4ead6ae834eb80d96437576d5d342c35dd3db1e",
          "message": "Merge pull request #91 from bernedom/building/try-for-systeminstalled-catch\n\nBuilding/try for systeminstalled catch",
          "timestamp": "2021-04-26T10:49:18+02:00",
          "tree_id": "23344dd6e76445fd668ea0f8bd19d135b0b207cf",
          "url": "https://github.com/bernedom/SI/commit/d4ead6ae834eb80d96437576d5d342c35dd3db1e"
        },
        "date": 1619427046710,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n20513 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29186 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29406 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29109 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.529,
            "range": "+/- 3.206",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.741,
            "range": "+/- 1.684",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.886,
            "range": "+/- 5.152",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.236,
            "range": "+/- 5.111",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.933,
            "range": "+/- 1.178",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.71,
            "range": "+/- 1.725",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 7.917,
            "range": "+/- 1.212",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.91,
            "range": "+/- 1.332",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.385,
            "range": "+/- 1.296",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 429.149,
            "range": "+/- 59.388",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 145.362,
            "range": "+/- 52.32",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.938,
            "range": "+/- 1.432",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.373,
            "range": "+/- 1.463",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 97,
            "range": "+/- 53",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 477,
            "range": "+/- 128",
            "unit": "ns",
            "extra": "100 samples\n70 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 97,
            "range": "+/- 17",
            "unit": "ns",
            "extra": "100 samples\n314 iterations"
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
          "id": "87b6c8376e934ee51b2473bf4aa04df51e927aa0",
          "message": "Merge pull request #92 from bernedom/building/update-to-catch-2.13.6\n\nBuilding/update to catch 2.13.6",
          "timestamp": "2021-04-28T10:31:05+02:00",
          "tree_id": "9c0aa412a09bdeaf621ea1b0aebd0e7be34a22d0",
          "url": "https://github.com/bernedom/SI/commit/87b6c8376e934ee51b2473bf4aa04df51e927aa0"
        },
        "date": 1619598757721,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.139222,
            "range": "+/- 0.0105568",
            "unit": "ns",
            "extra": "100 samples\n29373 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.301351,
            "range": "+/- 0.0435125",
            "unit": "ns",
            "extra": "100 samples\n47912 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.239401,
            "range": "+/- 0.046515",
            "unit": "ns",
            "extra": "100 samples\n47126 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.232719,
            "range": "+/- 0.00428197",
            "unit": "ns",
            "extra": "100 samples\n47800 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.4789,
            "range": "+/- 518.445",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.51578,
            "range": "+/- 465.472",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.5344,
            "range": "+/- 681.25",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 6.89743,
            "range": "+/- 742.603",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 6.61757,
            "range": "+/- 507.695",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 8.72177,
            "range": "+/- 851.885",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.57758,
            "range": "+/- 900.461",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 6.85378,
            "range": "+/- 589.104",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.74059,
            "range": "+/- 999.141",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 415.435,
            "range": "+/- 26.5295",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 42.5958,
            "range": "+/- 2.84321",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.55279,
            "range": "+/- 405.55",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.36975,
            "range": "+/- 885.964",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 110.437,
            "range": "+/- 46.3701",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 445.29,
            "range": "+/- 60.353",
            "unit": "ns",
            "extra": "100 samples\n76 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 109.844,
            "range": "+/- 8.17713",
            "unit": "ns",
            "extra": "100 samples\n331 iterations"
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
          "id": "d16ff16a631fc574563e2ca6a26327e40ef7a828",
          "message": "Merge pull request #94 from bernedom/windows-build-fixing\n\nWindows build fixing",
          "timestamp": "2021-09-20T17:53:08+02:00",
          "tree_id": "4edb1a8fa2a7db0f02a74babdf02854c9d8c3fd7",
          "url": "https://github.com/bernedom/SI/commit/d16ff16a631fc574563e2ca6a26327e40ef7a828"
        },
        "date": 1632153275331,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.168759,
            "range": "+/- 0.0128136",
            "unit": "ns",
            "extra": "100 samples\n29220 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.313072,
            "range": "+/- 0.0127676",
            "unit": "ns",
            "extra": "100 samples\n46106 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.256039,
            "range": "+/- 0.0343319",
            "unit": "ns",
            "extra": "100 samples\n45885 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.252584,
            "range": "+/- 0.00135375",
            "unit": "ns",
            "extra": "100 samples\n46283 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 5.99973,
            "range": "+/- 174.215",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 5.76915,
            "range": "+/- 393.197",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 11.244,
            "range": "+/- 155.01",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 7.32835,
            "range": "+/- 544.473",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 7.06298,
            "range": "+/- 125.785",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.13523,
            "range": "+/- 166.324",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 6.90379,
            "range": "+/- 306.925",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.01151,
            "range": "+/- 573.792",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 8.85695,
            "range": "+/- 613.585",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 438.736,
            "range": "+/- 7.50265",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 42.5611,
            "range": "+/- 895.718",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.58928,
            "range": "+/- 119.114",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.35461,
            "range": "+/- 183.62",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 102.004,
            "range": "+/- 25.984",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 493.308,
            "range": "+/- 41.5599",
            "unit": "ns",
            "extra": "100 samples\n71 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 105.788,
            "range": "+/- 8.60058",
            "unit": "ns",
            "extra": "100 samples\n322 iterations"
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
          "id": "b73d9e35e6058fe0b8da4398346cb572ecc7cd21",
          "message": "Merge pull request #95 from bernedom/bugfix/fix-missing-conversion-for-division\n\nBugfix/fix missing conversion for division",
          "timestamp": "2021-09-21T14:54:55+02:00",
          "tree_id": "4c9b22387bd536155bd8031caa1b586170361946",
          "url": "https://github.com/bernedom/SI/commit/b73d9e35e6058fe0b8da4398346cb572ecc7cd21"
        },
        "date": 1632228985542,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.328355,
            "range": "+/- 0.264575",
            "unit": "ns",
            "extra": "100 samples\n19695 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.280085,
            "range": "+/- 0.114288",
            "unit": "ns",
            "extra": "100 samples\n24521 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.304391,
            "range": "+/- 0.173354",
            "unit": "ns",
            "extra": "100 samples\n25812 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.315474,
            "range": "+/- 0.169701",
            "unit": "ns",
            "extra": "100 samples\n25742 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.79921,
            "range": "+/- 1.09681",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.94395,
            "range": "+/- 1.92337",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.5879,
            "range": "+/- 1.79704",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.62594,
            "range": "+/- 2.85506",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.48597,
            "range": "+/- 3.7641",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.5373,
            "range": "+/- 2.97315",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.15597,
            "range": "+/- 2.69413",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.13197,
            "range": "+/- 3.62358",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.395,
            "range": "+/- 3.90801",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 443.188,
            "range": "+/- 80.6157",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 51.0148,
            "range": "+/- 17.2546",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.83197,
            "range": "+/- 2.48368",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.76872,
            "range": "+/- 2.93973",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 142.857,
            "range": "+/- 380.13",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 442.66,
            "range": "+/- 113.874",
            "unit": "ns",
            "extra": "100 samples\n65 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 92.4726,
            "range": "+/- 20.113",
            "unit": "ns",
            "extra": "100 samples\n315 iterations"
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
          "id": "a0bb885a1193992f2e6e9a7959a974a9c51f067a",
          "message": "Merge pull request #96 from bernedom/feature/add_degree_t\n\nFeature/add degree t",
          "timestamp": "2021-10-04T11:38:48+02:00",
          "tree_id": "5a10e4fdad66c3020ef8b6de286ea1915a1356eb",
          "url": "https://github.com/bernedom/SI/commit/a0bb885a1193992f2e6e9a7959a974a9c51f067a"
        },
        "date": 1633340422728,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.261936,
            "range": "+/- 0.00233724",
            "unit": "ns",
            "extra": "100 samples\n21284 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.293989,
            "range": "+/- 0.0683419",
            "unit": "ns",
            "extra": "100 samples\n26331 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.374918,
            "range": "+/- 0.377876",
            "unit": "ns",
            "extra": "100 samples\n26382 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.311119,
            "range": "+/- 0.114632",
            "unit": "ns",
            "extra": "100 samples\n25717 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.8183,
            "range": "+/- 3.01711",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 10.1291,
            "range": "+/- 9.38997",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.3943,
            "range": "+/- 2.69099",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.10055,
            "range": "+/- 2.05742",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.12781,
            "range": "+/- 2.68995",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.6953,
            "range": "+/- 2.80961",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.25905,
            "range": "+/- 2.30747",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.22926,
            "range": "+/- 983.744",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 11.0471,
            "range": "+/- 2.51949",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 425.592,
            "range": "+/- 60.7611",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 46.0722,
            "range": "+/- 6.65989",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 8.65784,
            "range": "+/- 2.60831",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.44506,
            "range": "+/- 2.14954",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 90.75,
            "range": "+/- 76.0617",
            "unit": "ns",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 445.355,
            "range": "+/- 100.788",
            "unit": "ns",
            "extra": "100 samples\n68 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 98.4626,
            "range": "+/- 30.6876",
            "unit": "ns",
            "extra": "100 samples\n329 iterations"
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
          "id": "5f4b9a5924a8b3509baec07525fda9ad926adcec",
          "message": "Add string operations to acceleration types",
          "timestamp": "2021-11-11T23:32:49+01:00",
          "tree_id": "179ac27c451968beabb6f9aa802822e12f5b02e1",
          "url": "https://github.com/bernedom/SI/commit/5f4b9a5924a8b3509baec07525fda9ad926adcec"
        },
        "date": 1636670059575,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.277305,
            "range": "+/- 0.0528664",
            "unit": "ns",
            "extra": "100 samples\n25481 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.353306,
            "range": "+/- 0.0731712",
            "unit": "ns",
            "extra": "100 samples\n29057 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.331555,
            "range": "+/- 0.0525075",
            "unit": "ns",
            "extra": "100 samples\n28297 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.319182,
            "range": "+/- 0.0506941",
            "unit": "ns",
            "extra": "100 samples\n27677 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.69225,
            "range": "+/- 2.73919",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.618,
            "range": "+/- 1.14479",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.57525,
            "range": "+/- 1.37409",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.49425,
            "range": "+/- 1.07317",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.9205,
            "range": "+/- 3.17327",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 10.2693,
            "range": "+/- 1.57066",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.57525,
            "range": "+/- 1.17161",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 8.477,
            "range": "+/- 697.176",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 10.1667,
            "range": "+/- 1.87269",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 450.205,
            "range": "+/- 69.0203",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 150.7,
            "range": "+/- 22.0528",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.32676,
            "range": "+/- 539.199",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.0863,
            "range": "+/- 3.74973",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 119.714,
            "range": "+/- 190.406",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 453.484,
            "range": "+/- 178.978",
            "unit": "ns",
            "extra": "100 samples\n62 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 100.235,
            "range": "+/- 24.6683",
            "unit": "ns",
            "extra": "100 samples\n298 iterations"
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
          "id": "5f4b9a5924a8b3509baec07525fda9ad926adcec",
          "message": "Add string operations to acceleration types",
          "timestamp": "2021-11-11T23:32:49+01:00",
          "tree_id": "179ac27c451968beabb6f9aa802822e12f5b02e1",
          "url": "https://github.com/bernedom/SI/commit/5f4b9a5924a8b3509baec07525fda9ad926adcec"
        },
        "date": 1636694541799,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.255167,
            "range": "+/- 0.0825266",
            "unit": "ns",
            "extra": "100 samples\n21096 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.304359,
            "range": "+/- 0.108276",
            "unit": "ns",
            "extra": "100 samples\n26666 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.339388,
            "range": "+/- 0.145758",
            "unit": "ns",
            "extra": "100 samples\n26377 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.310219,
            "range": "+/- 0.100304",
            "unit": "ns",
            "extra": "100 samples\n28148 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.95852,
            "range": "+/- 1.69318",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.90477,
            "range": "+/- 3.00478",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 10.3278,
            "range": "+/- 3.0776",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 9.44957,
            "range": "+/- 3.22808",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 8.56654,
            "range": "+/- 2.23662",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.10005,
            "range": "+/- 1.6338",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.52328,
            "range": "+/- 3.54897",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 7.75629,
            "range": "+/- 2.23325",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 9.54406,
            "range": "+/- 2.79913",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 458.668,
            "range": "+/- 31.2041",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.9262,
            "range": "+/- 13.2743",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.60327,
            "range": "+/- 1.17275",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 9.68753,
            "range": "+/- 1.70424",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 112.429,
            "range": "+/- 84.8205",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 440.185,
            "range": "+/- 93.4291",
            "unit": "ns",
            "extra": "100 samples\n60 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 101.434,
            "range": "+/- 16.926",
            "unit": "ns",
            "extra": "100 samples\n318 iterations"
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
          "id": "8b456b5af7148f300ec763a406473d5efaecd1a3",
          "message": "Version bump to 2.4.0",
          "timestamp": "2022-01-24T22:10:36+01:00",
          "tree_id": "45c46066ac3b515437ca86fbd0be5954f2dd974f",
          "url": "https://github.com/bernedom/SI/commit/8b456b5af7148f300ec763a406473d5efaecd1a3"
        },
        "date": 1643058715885,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.139232,
            "range": "+/- 0.00578302",
            "unit": "ns",
            "extra": "100 samples\n26546 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.260202,
            "range": "+/- 0.0194706",
            "unit": "ns",
            "extra": "100 samples\n41422 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.211912,
            "range": "+/- 0.0128367",
            "unit": "ns",
            "extra": "100 samples\n41258 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.212983,
            "range": "+/- 0.0238747",
            "unit": "ns",
            "extra": "100 samples\n41496 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 4.55167,
            "range": "+/- 88.8299",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 4.53631,
            "range": "+/- 31.1443",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.00556,
            "range": "+/- 202.554",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 5.78924,
            "range": "+/- 159.129",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 5.72564,
            "range": "+/- 46.5894",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 7.36499,
            "range": "+/- 189.094",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 5.7172,
            "range": "+/- 113.689",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 5.691,
            "range": "+/- 171.8",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 7.52449,
            "range": "+/- 71.2706",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 361.146,
            "range": "+/- 1.88966",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 35.2002,
            "range": "+/- 582.179",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 4.50774,
            "range": "+/- 25.3678",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 6.82623,
            "range": "+/- 84.4319",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 87.2857,
            "range": "+/- 31.4792",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 415.849,
            "range": "+/- 10.8649",
            "unit": "ns",
            "extra": "100 samples\n72 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 88.9221,
            "range": "+/- 2.43971",
            "unit": "ns",
            "extra": "100 samples\n332 iterations"
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
          "id": "507be9e902d16e32fcdbbe63e9fd76760ad20b0e",
          "message": "Update changelog",
          "timestamp": "2022-01-30T15:51:56+01:00",
          "tree_id": "eb129d2172c854935109b1a1bba3a95e819d9b87",
          "url": "https://github.com/bernedom/SI/commit/507be9e902d16e32fcdbbe63e9fd76760ad20b0e"
        },
        "date": 1643554402054,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0.261515,
            "range": "+/- 0.148072",
            "unit": "ns",
            "extra": "100 samples\n19670 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0.322603,
            "range": "+/- 0.122218",
            "unit": "ns",
            "extra": "100 samples\n26525 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0.288378,
            "range": "+/- 0.111841",
            "unit": "ns",
            "extra": "100 samples\n26788 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0.32783,
            "range": "+/- 0.124195",
            "unit": "ns",
            "extra": "100 samples\n25495 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 8.63056,
            "range": "+/- 8.79959",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio assignment",
            "value": 7.7903,
            "range": "+/- 2.43128",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio assignment",
            "value": 9.10756,
            "range": "+/- 3.538",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw add assignment (reference)",
            "value": 8.05231,
            "range": "+/- 1.72673",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio add assignment",
            "value": 9.77456,
            "range": "+/- 3.61338",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio add assignment",
            "value": 9.98882,
            "range": "+/- 4.22288",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw subtract assignment (reference)",
            "value": 8.56432,
            "range": "+/- 2.90384",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "same ratio subtract assignment",
            "value": 9.44905,
            "range": "+/- 2.4443",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "different ratio subtract assignment",
            "value": 11.4874,
            "range": "+/- 3.20478",
            "unit": "us",
            "extra": "100 samples\n3 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 406.591,
            "range": "+/- 65.5938",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 47.8793,
            "range": "+/- 13.6846",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.02531,
            "range": "+/- 1.1959",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.97006,
            "range": "+/- 1.52142",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "conversion by streams",
            "value": 144.003,
            "range": "+/- 349.629",
            "unit": "ns",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "stream conversion with ctor",
            "value": 484.837,
            "range": "+/- 290.653",
            "unit": "ns",
            "extra": "100 samples\n66 iterations"
          },
          {
            "name": "conversion by to_string",
            "value": 102.407,
            "range": "+/- 45.7566",
            "unit": "ns",
            "extra": "100 samples\n293 iterations"
          }
        ]
      }
    ]
  }
}